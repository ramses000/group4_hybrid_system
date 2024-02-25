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

fxValue* __declspec(dllexport) microbit_toolbox_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) microbit_toolbox_formName();
fxValue* __declspec(dllexport) microbit_toolbox_formDescription();
fxValue* __declspec(dllexport) MICROBIT_TOOLBOX_Form(fxValue* name);
fxValue* __declspec(dllexport) microbitToolbox();

#ifdef __cplusplus
}
#endif