/******************************************************************************

  This source file is part of the tomviz project.

  Copyright Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/

#ifndef tomvizAboutDialog_h
#define tomvizAboutDialog_h

#include <QDialog>

#include <QJsonObject>
#include <QScopedPointer>

namespace Ui {
class AboutDialog;
}

namespace tomviz {

class AboutDialog : public QDialog
{
  Q_OBJECT

public:
  explicit AboutDialog(QWidget* parent);
  ~AboutDialog() override;

private:
  QScopedPointer<Ui::AboutDialog> m_ui;
  QJsonObject m_details;
};
}

#endif
