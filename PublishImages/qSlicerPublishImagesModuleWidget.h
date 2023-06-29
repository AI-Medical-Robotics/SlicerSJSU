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

#ifndef __qSlicerPublishImagesModuleWidget_h
#define __qSlicerPublishImagesModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerPublishImagesModuleExport.h"

class qSlicerPublishImagesModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_PUBLISHIMAGES_EXPORT qSlicerPublishImagesModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerPublishImagesModuleWidget(QWidget *parent=0);
  virtual ~qSlicerPublishImagesModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerPublishImagesModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerPublishImagesModuleWidget);
  Q_DISABLE_COPY(qSlicerPublishImagesModuleWidget);
};

#endif
