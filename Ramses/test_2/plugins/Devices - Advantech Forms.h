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

fxValue* __declspec(dllexport) atconfig_form(fxValue* parent, fxValue* name, fxValue* device);
fxValue* __declspec(dllexport) atconfig_formName();
fxValue* __declspec(dllexport) atconfig_formDescription();
fxValue* __declspec(dllexport) atconfig_form_configure(fxValue* form);
fxValue* __declspec(dllexport) atconfig_form_configureName();
fxValue* __declspec(dllexport) atconfig_form_configureDescription();
fxValue* __declspec(dllexport) atconfig_form_device_handle(fxValue* form, fxValue* tp);
fxValue* __declspec(dllexport) atconfig_form_device_handleName();
fxValue* __declspec(dllexport) atconfig_form_device_handleDescription();
fxValue* __declspec(dllexport) ATConfigForm(fxValue* name);

#ifdef __cplusplus
}
#endif