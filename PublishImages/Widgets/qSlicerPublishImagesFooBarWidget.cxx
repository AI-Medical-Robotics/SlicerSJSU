/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerPublishImagesFooBarWidget.h"
#include "ui_qSlicerPublishImagesFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_PublishImages
class qSlicerPublishImagesFooBarWidgetPrivate
  : public Ui_qSlicerPublishImagesFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerPublishImagesFooBarWidget);
protected:
  qSlicerPublishImagesFooBarWidget* const q_ptr;

public:
  qSlicerPublishImagesFooBarWidgetPrivate(
    qSlicerPublishImagesFooBarWidget& object);
  virtual void setupUi(qSlicerPublishImagesFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerPublishImagesFooBarWidgetPrivate
::qSlicerPublishImagesFooBarWidgetPrivate(
  qSlicerPublishImagesFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerPublishImagesFooBarWidgetPrivate
::setupUi(qSlicerPublishImagesFooBarWidget* widget)
{
  this->Ui_qSlicerPublishImagesFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerPublishImagesFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerPublishImagesFooBarWidget
::qSlicerPublishImagesFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerPublishImagesFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerPublishImagesFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerPublishImagesFooBarWidget
::~qSlicerPublishImagesFooBarWidget()
{
}
