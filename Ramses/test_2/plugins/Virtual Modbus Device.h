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

fxValue* __declspec(dllexport) virtual_modbus_device_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) virtual_modbus_device_formName();
fxValue* __declspec(dllexport) virtual_modbus_device_formDescription();
fxValue* __declspec(dllexport) Virtual_Modbus_Toolbox();
fxValue* __declspec(dllexport) Virtual_Modbus_Form(fxValue* name);

#ifdef __cplusplus
}
#endif