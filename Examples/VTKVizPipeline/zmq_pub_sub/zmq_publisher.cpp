#include <zmq.hpp>
#include <jthread>
#include <string>
#include <vtkSmartPoointer.h>

void publishImages(int numImages, int width, int height, const std::string& endpoint) {
    // Create a ZMQ context and a publisher socket
    zmq::context_t context(1);
    zmq::socket_t publisher(context, ZMQ_PUB);
    publisher.bind(endpoint);

    // Generate and publish the specified number of images
    for(int i = 0; i < numImages; i++) {
        // Generate a random red VTK image
        vtkSmartPointer<vtkImageData> imageData = generateRedImage(width, height);

        // Serialize the image data into a string
        vtkSmartPointer<vtkCharArray> charArray = vtkSmartPointer<vtkCharArray>::New();
        charArray->SetArray(static_cast<char*>(imageData->GetScalarPointer()),
            width*height, 1);
        std::string message(charArray->GetPointer(0), charArray->GetSize());

        // Publish the image data over ZMQ
        zmq::message_t zmqMessage(message.size());
        memcpy(zmqMessage.data(), message.data(), message.size());
        publisher.send(zmqMessage);
    }
}

int main(int argc, char* argv[]) {
    // Set the number of images to generate and the endpoint to publish to
    int numImages = 10;
    int width = 256;
    int height = 256;
    std::string endpoint = "tcp://localhost:5555";

    // Create a jthread to run the publishImages function
    std::jthread publisherThread([&] {
        publishImages(numImages, width, height, endpoint);
    });

    // Wait for the publisher thread to finish
    publisherThread.join();

    return 0;
}
