/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// PublishImages Logic includes
#include <vtkSlicerPublishImagesLogic.h>

// PublishImages includes
#include "qSlicerPublishImagesModule.h"
#include "qSlicerPublishImagesModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerPublishImagesModulePrivate
{
public:
  qSlicerPublishImagesModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerPublishImagesModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerPublishImagesModulePrivate::qSlicerPublishImagesModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerPublishImagesModule methods

//-----------------------------------------------------------------------------
qSlicerPublishImagesModule::qSlicerPublishImagesModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerPublishImagesModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerPublishImagesModule::~qSlicerPublishImagesModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerPublishImagesModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerPublishImagesModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerPublishImagesModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerPublishImagesModule::icon() const
{
  return QIcon(":/Icons/PublishImages.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerPublishImagesModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerPublishImagesModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerPublishImagesModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerPublishImagesModule
::createWidgetRepresentation()
{
  return new qSlicerPublishImagesModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerPublishImagesModule::createLogic()
{
  return vtkSlicerPublishImagesLogic::New();
}
