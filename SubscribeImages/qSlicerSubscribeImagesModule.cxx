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

// SubscribeImages Logic includes
#include <vtkSlicerSubscribeImagesLogic.h>

// SubscribeImages includes
#include "qSlicerSubscribeImagesModule.h"
#include "qSlicerSubscribeImagesModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSubscribeImagesModulePrivate
{
public:
  qSlicerSubscribeImagesModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSubscribeImagesModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModulePrivate::qSlicerSubscribeImagesModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSubscribeImagesModule methods

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModule::qSlicerSubscribeImagesModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerSubscribeImagesModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModule::~qSlicerSubscribeImagesModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerSubscribeImagesModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerSubscribeImagesModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSubscribeImagesModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerSubscribeImagesModule::icon() const
{
  return QIcon(":/Icons/SubscribeImages.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerSubscribeImagesModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSubscribeImagesModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerSubscribeImagesModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerSubscribeImagesModule
::createWidgetRepresentation()
{
  return new qSlicerSubscribeImagesModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerSubscribeImagesModule::createLogic()
{
  return vtkSlicerSubscribeImagesLogic::New();
}
