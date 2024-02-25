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

fxValue* __declspec(dllexport) icp_config_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) icp_config_formName();
fxValue* __declspec(dllexport) icp_config_formDescription();
fxValue* __declspec(dllexport) ICP_Config_Toolbox();
fxValue* __declspec(dllexport) ICP_Config_Form(fxValue* name);

#ifdef __cplusplus
}
#endif