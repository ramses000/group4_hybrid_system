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

fxValue* __declspec(dllexport) scada_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) scada_formName();
fxValue* __declspec(dllexport) scada_formDescription();
fxValue* __declspec(dllexport) SCADAToolbox();
fxValue* __declspec(dllexport) SCADAForm(fxValue* name);

#ifdef __cplusplus
}
#endif