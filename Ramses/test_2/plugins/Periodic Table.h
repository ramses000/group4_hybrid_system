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

fxValue* __declspec(dllexport) periodic_table_form(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) periodic_table_formName();
fxValue* __declspec(dllexport) periodic_table_formDescription();
fxValue* __declspec(dllexport) PERIODIC_TABLE_Form(fxValue* name);
fxValue* __declspec(dllexport) periodic_tableToolbox();

#ifdef __cplusplus
}
#endif