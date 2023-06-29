#include <zmq.hpp>
#include <vtkSmartPointer.h>

void subscribeImages(const std::string& endpoint) {
    // Create a ZMQ context and a subscriber socket
    zmq::context_t context(1);
    zmq::socket_t subscriber(context, ZMQ_SUB);
    subscriber.connect(endpoint);
    subscriber.setsockopt(ZMQ_SUBSCRIBE, "", 0);

    // Receive and display images indefinitely
    while(true) {
        // Receive a message from the publisher socket
        zmq::message_t zmqMessage;
        subscriber.recv(&zmqMessage);

        // Deserialize the message into a vtkImageData object
        vtkSmartPointer<vtkImageData> imageData = vtkSmartPointer<vtkImageData>::New();
        imageData->SetDimensions(256, 256, 1);
        imageData->AllocateScalars(VTK_UNSIGNED_CHAR, 1);
        memcpy(imageData->GetScalarPointer(), zmqMessage.data(), zmqMessage.size());

        // Display the received image
        displayImage(imageData);
    }
}

#include <jthread>
#include <string>

int main(int argc, char* argv[]) {
    // Set the endpoint to subscribe to
    std::string endpoint = "tcp://localhost:5555";

    // Create a jthread to run the subscribeImages function
    std::jthread subscribeThread([&] {
        subscribeImages(endpoint);
    })

    // Wait for the subscriber thread to finish
    subscribeThread.join();
}
