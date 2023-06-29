#include <vtkImageData.h>
#include <vtkUnsignedCharArray.h>
#include <cstdlib>

vtkSmartPointer<vtkImageData> generateRedImage(int width, int height) {
    // Create an image data object
    vtkSmartPointer<vtkImageData> imageData = vtkSmartPointer<vtkImageData>::New();
    imageData->SetDimensions(width, height, 1);
    imageData->AllocateScalars(VTK_UNSIGNED_CHAR, 1);

    // Fill the image data with random shades of red
    vtkUnsignedCharArray* pixels = static_cast<vtkUnsignedCharArray*>(imageData->GetScalarPointer());
    for(int i = 0; i < width*height; i++) {
        pixels->SetValue(i, rand() % 256);
    }

    return imageData;
}


#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSmartPointer.h>
#include <vtkImageMapper.h>
#include <vtkActor2D.h>
#include <vtkInteractorStyleImage.h>
#include <vtkNamedColors.h>

void displayImage(vtkSmartPointer<vtkImageData> imageData) {
    // Create a renderer and a render window
    vtkSmartPointer<vtkRenderer> renderer = vtkSmartPointer<vtkRenderer>::New();
    vtkSmartPointer<vtkRenderWindow> renderWindow = vtkSmartPointer<vtkRenderWindow>::New();
    renderWindow->AddRenderer(renderer);

    // Create an image mapper and an actor
    vtkSmartPointer<vtkImageMapper> imageMapper = vtkSmartPointer<vtkImageMapper>::New();
    imageMapper->SetInputData(imageData);
    vtkSmartPointer<vtkActor2D> actor = vtkSmartPointer<vtkActor2D>::New();
    actor->SetMapper(imageMapper);

    // Add the actor to the renderer
    renderer->AddActor2D(actor);

    // Set up the interactor and start the event loop
    vtkSmartPointer<vtkRenderWindowInteractor> interactor = vtkSmartPointer<vtkRenderWindowInteractor>::New();
    interactor->SetRenderWindow(renderWindow);
    vtkSmartPointer<vtkInteractorStyleImage> style = vtkSmartPointer<vtkInteractorStyleImage>::New();
    interactor->setInteractorStyle(style);
    renderWindow->Render();
    interactor->Start();
}

int main(int argc, char* argv[]) {
    // Generate a 2D image of random shades of red
    vtkSmartPointer<vtkImageData> imageData = generateRedImage(256, 256);

    // Display the generated image
    displayImage(imageData);

    return 0;
}
