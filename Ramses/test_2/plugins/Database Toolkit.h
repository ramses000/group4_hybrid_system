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

fxValue* __declspec(dllexport) database_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) database_formName();
fxValue* __declspec(dllexport) database_formDescription();
fxValue* __declspec(dllexport) DatabaseForm(fxValue* name);
fxValue* __declspec(dllexport) sqliteToolbox();
fxValue* __declspec(dllexport) database_browserToolbox();

#ifdef __cplusplus
}
#endif