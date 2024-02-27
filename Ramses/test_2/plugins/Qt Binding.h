/// do not modify this file! ///
/*used uplugins start
used uplugins end*/

#ifdef __cplusplus
#include <ValueTypes/value.h>
using namespace FlexitekMath::ValueTypes;
extern "C" {
#else
#define fxValue void
#endif

fxValue* __declspec(dllexport) call_function3(fxValue* obj, fxValue* fn, fxValue* args);
fxValue* __declspec(dllexport) QConnect4(fxValue* sender, fxValue* signal, fxValue* receiver, fxValue* slot);
fxValue* __declspec(dllexport) QStringDescription0();
fxValue* __declspec(dllexport) QFontDescription0();
fxValue* __declspec(dllexport) QColorDescription0();
fxValue* __declspec(dllexport) QPainterDescription0();
fxValue* __declspec(dllexport) QMouseEventDescription0();
fxValue* __declspec(dllexport) QHBoxLayoutDescription0();
fxValue* __declspec(dllexport) QVBoxLayoutDescription0();
fxValue* __declspec(dllexport) QWidgetDescription0();
fxValue* __declspec(dllexport) QPushButtonDescription0();
fxValue* __declspec(dllexport) QToolButtonDescription0();
fxValue* __declspec(dllexport) QSpinBoxDescription0();
fxValue* __declspec(dllexport) QDoubleSpinBoxDescription0();
fxValue* __declspec(dllexport) QRadioButtonDescription0();
fxValue* __declspec(dllexport) QCheckBoxDescription0();
fxValue* __declspec(dllexport) QListWidgetDescription0();
fxValue* __declspec(dllexport) QComboBoxDescription0();
fxValue* __declspec(dllexport) QLineEditDescription0();
fxValue* __declspec(dllexport) QPlainTextEditDescription0();
fxValue* __declspec(dllexport) QSliderDescription0();
fxValue* __declspec(dllexport) QLabelDescription0();
fxValue* __declspec(dllexport) QProgressBarDescription0();
fxValue* __declspec(dllexport) QmdTableWidgetDescription0();
fxValue* __declspec(dllexport) QmdGraph2DWidgetDescription0();
fxValue* __declspec(dllexport) QmdGraph3DWidgetDescription0();
fxValue* __declspec(dllexport) QmdImageWidgetDescription0();
fxValue* __declspec(dllexport) QmdInstrumentWidgetDescription0();
fxValue* __declspec(dllexport) QGroupBoxDescription0();
fxValue* __declspec(dllexport) QTabWidgetDescription0();
fxValue* __declspec(dllexport) QmdScrollWidgetDescription0();
fxValue* __declspec(dllexport) QTreeWidgetDescription0();
fxValue* __declspec(dllexport) QCheckBox_QCheckBox4(fxValue* mthis, fxValue* parent, fxValue* item_text, fxValue* value);
fxValue* __declspec(dllexport) QColor_QColor5(fxValue* mthis, fxValue* r, fxValue* g, fxValue* b, fxValue* a);
fxValue* __declspec(dllexport) QComboBox_QComboBox3(fxValue* mthis, fxValue* parent, fxValue* items);
fxValue* __declspec(dllexport) QDoubleSpinBox_QDoubleSpinBox6(fxValue* mthis, fxValue* parent, fxValue* min, fxValue* max, fxValue* step, fxValue* value);
fxValue* __declspec(dllexport) QFont_QFont3(fxValue* mthis, fxValue* font_family, fxValue* pointSize);
fxValue* __declspec(dllexport) QGroupBox_QGroupBox3(fxValue* mthis, fxValue* parent, fxValue* group_text);
fxValue* __declspec(dllexport) QHBoxLayout_QHBoxLayout2(fxValue* mthis, fxValue* parent);
fxValue* __declspec(dllexport) QLabel_QLabel3(fxValue* mthis, fxValue* parent, fxValue* label_text);
fxValue* __declspec(dllexport) QLineEdit_QLineEdit3(fxValue* mthis, fxValue* parent, fxValue* edit_text);
fxValue* __declspec(dllexport) QListWidget_QListWidget3(fxValue* mthis, fxValue* parent, fxValue* items);
fxValue* __declspec(dllexport) QMouseEvent_QMouseEvent1(fxValue* mthis);
fxValue* __declspec(dllexport) QPainter_QPainter1(fxValue* mthis);
fxValue* __declspec(dllexport) QPlainTextEdit_QPlainTextEdit3(fxValue* mthis, fxValue* parent, fxValue* edit_text);
fxValue* __declspec(dllexport) QProgressBar_QProgressBar6(fxValue* mthis, fxValue* parent, fxValue* min, fxValue* max, fxValue* value, fxValue* orientation);
fxValue* __declspec(dllexport) QPushButton_QPushButton3(fxValue* mthis, fxValue* parent, fxValue* button_text);
fxValue* __declspec(dllexport) QRadioButton_QRadioButton4(fxValue* mthis, fxValue* parent, fxValue* item_text, fxValue* value);
fxValue* __declspec(dllexport) QSlider_QSlider7(fxValue* mthis, fxValue* parent, fxValue* min, fxValue* max, fxValue* step, fxValue* value, fxValue* orientation);
fxValue* __declspec(dllexport) QSpinBox_QSpinBox6(fxValue* mthis, fxValue* parent, fxValue* min, fxValue* max, fxValue* step, fxValue* value);
fxValue* __declspec(dllexport) QString_QString2(fxValue* mthis, fxValue* text);
fxValue* __declspec(dllexport) QTabWidget_QTabWidget2(fxValue* mthis, fxValue* parent);
fxValue* __declspec(dllexport) QToolButton_QToolButton3(fxValue* mthis, fxValue* parent, fxValue* button_text);
fxValue* __declspec(dllexport) QTreeWidget_QTreeWidget2(fxValue* mthis, fxValue* parent);
fxValue* __declspec(dllexport) QVBoxLayout_QVBoxLayout2(fxValue* mthis, fxValue* parent);
fxValue* __declspec(dllexport) QWidget_QWidget3(fxValue* mthis, fxValue* parent, fxValue* title);
fxValue* __declspec(dllexport) QWidget_QWidget2(fxValue* mthis, fxValue* parent);
fxValue* __declspec(dllexport) QmdGraph2DWidget_QmdGraph2DWidget3(fxValue* mthis, fxValue* parent, fxValue* value);
fxValue* __declspec(dllexport) QmdGraph3DWidget_QmdGraph3DWidget3(fxValue* mthis, fxValue* parent, fxValue* value);
fxValue* __declspec(dllexport) QmdImageWidget_QmdImageWidget3(fxValue* mthis, fxValue* parent, fxValue* value);
fxValue* __declspec(dllexport) QmdInstrumentWidget_QmdInstrumentWidget3(fxValue* mthis, fxValue* parent, fxValue* type);
fxValue* __declspec(dllexport) QmdScrollWidget_QmdScrollWidget3(fxValue* mthis, fxValue* parent, fxValue* title);
fxValue* __declspec(dllexport) QmdTableWidget_QmdTableWidget3(fxValue* mthis, fxValue* parent, fxValue* value);

#ifdef __cplusplus
}
#endif