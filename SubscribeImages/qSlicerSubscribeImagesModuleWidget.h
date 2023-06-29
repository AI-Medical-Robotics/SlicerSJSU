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

#ifndef __qSlicerSubscribeImagesModuleWidget_h
#define __qSlicerSubscribeImagesModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerSubscribeImagesModuleExport.h"

class qSlicerSubscribeImagesModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_SUBSCRIBEIMAGES_EXPORT qSlicerSubscribeImagesModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerSubscribeImagesModuleWidget(QWidget *parent=0);
  virtual ~qSlicerSubscribeImagesModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerSubscribeImagesModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerSubscribeImagesModuleWidget);
  Q_DISABLE_COPY(qSlicerSubscribeImagesModuleWidget);
};

#endif
