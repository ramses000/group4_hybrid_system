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

fxValue* __declspec(dllexport) curvefitformName();
fxValue* __declspec(dllexport) curvefitformDescription();
fxValue* __declspec(dllexport) curvefitresultName();
fxValue* __declspec(dllexport) curvefitresultDescription();
fxValue* __declspec(dllexport) curvefitform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) curvefitresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) curveregtable(fxValue* parent, fxValue* data);
fxValue* __declspec(dllexport) curveregtableName();
fxValue* __declspec(dllexport) curveregtableDescription();

#ifdef __cplusplus
}
#endif