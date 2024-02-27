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

void* Document_Plugin_initContext(void* c);
fxValue* document_widget(fxValue* parent, fxValue* data);
fxValue* set_document_widget_document(fxValue* documentWidget, fxValue* data);
fxValue* document_widget_document(fxValue* documentWidget);
fxValue* editor_widget(fxValue* parent, fxValue* editorType, fxValue* data);
fxValue* set_editor_widget_document(fxValue* editorWidget, fxValue* data);
fxValue* editor_widget_document(fxValue* editorWidget);
fxValue* set_editor_widget_text(fxValue* editorWidget, fxValue* text);
fxValue* editor_widget_text(fxValue* editorWidget);
fxValue* set_editor_widget_type(fxValue* editorWidget, fxValue* type);
fxValue* editor_widget_type(fxValue* editorWidget);

fxValue* code_compile(fxValue* text, fxValue* type);
fxValue* code_evaluate_start(fxValue* code);
fxValue* code_evaluate_stop(fxValue* code);
fxValue* code_delete(fxValue* code);

fxValue* document_widgetName();
fxValue* document_widgetDescription();
fxValue* set_document_widget_documentName();
fxValue* set_document_widget_documentDescription();
fxValue* document_widget_documentName();
fxValue* document_widget_documentDescription();
fxValue* editor_widgetName();
fxValue* editor_widgetDescription();
fxValue* set_editor_widget_documentName();
fxValue* set_editor_widget_documentDescription();
fxValue* editor_widget_documentName();
fxValue* editor_widget_documentDescription();
fxValue* set_editor_widget_textName();
fxValue* set_editor_widget_textDescription();
fxValue* editor_widget_textName();
fxValue* editor_widget_textDescription();
fxValue* set_editor_widget_typeName();
fxValue* set_editor_widget_typeDescription();
fxValue* editor_widget_typeName();
fxValue* editor_widget_typeDescription();

fxValue* app_insert_main_tab(fxValue* pos, fxValue* tab, fxValue* caption);
fxValue* app_insert_side_tab(fxValue* pos, fxValue* tab, fxValue* caption);

fxValue* app_insert_main_tabName();
fxValue* app_insert_main_tabDescription();
fxValue* app_insert_side_tabName();
fxValue* app_insert_side_tabDescription();

#ifdef __cplusplus
}
#endif
