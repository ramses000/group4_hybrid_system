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

fxValue* __declspec(dllexport) virtument_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) virtument_formName();
fxValue* __declspec(dllexport) virtument_formDescription();
fxValue* __declspec(dllexport) virtument_get_instrument(fxValue* form, fxValue* tag_name, fxValue* direction);
fxValue* __declspec(dllexport) virtument_get_instrumentName();
fxValue* __declspec(dllexport) virtument_get_instrumentDescription();
fxValue* __declspec(dllexport) virtument_save_file(fxValue* form);
fxValue* __declspec(dllexport) virtument_save_fileName();
fxValue* __declspec(dllexport) virtument_save_fileDescription();
fxValue* __declspec(dllexport) virtument_load_file(fxValue* form, fxValue* text);
fxValue* __declspec(dllexport) virtument_load_fileName();
fxValue* __declspec(dllexport) virtument_load_fileDescription();
fxValue* __declspec(dllexport) virtumentToolbox();
fxValue* __declspec(dllexport) VirtumentForm(fxValue* name);
fxValue* __declspec(dllexport) DataLoggerForm(fxValue* name);

#ifdef __cplusplus
}
#endif