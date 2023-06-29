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

// Qt includes
#include <QDebug>

// Slicer includes
#include "qSlicerSubscribeImagesModuleWidget.h"
#include "ui_qSlicerSubscribeImagesModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSubscribeImagesModuleWidgetPrivate: public Ui_qSlicerSubscribeImagesModuleWidget
{
public:
  qSlicerSubscribeImagesModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSubscribeImagesModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModuleWidgetPrivate::qSlicerSubscribeImagesModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSubscribeImagesModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModuleWidget::qSlicerSubscribeImagesModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerSubscribeImagesModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerSubscribeImagesModuleWidget::~qSlicerSubscribeImagesModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerSubscribeImagesModuleWidget::setup()
{
  Q_D(qSlicerSubscribeImagesModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
