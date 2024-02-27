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

fxValue* __declspec(dllexport) icpmodbus_config_form(fxValue* parent, fxValue* name, fxValue* opstring, fxValue* devtype, fxValue* devaddress);
fxValue* __declspec(dllexport) icpmodbus_config_form2(fxValue* parent, fxValue* clas, fxValue* xml, fxValue* name, fxValue* opstring, fxValue* devtype, fxValue* devaddress);
fxValue* __declspec(dllexport) icpmodbus_config_delete();
fxValue* __declspec(dllexport) icpmodbus_config_formName();
fxValue* __declspec(dllexport) icpmodbus_config_formDescription();

#ifdef __cplusplus
}
#endif