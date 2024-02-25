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

fxValue* __declspec(dllexport) sigtransform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) sigtransresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) sigtransformName();
fxValue* __declspec(dllexport) sigtransformDescription();
fxValue* __declspec(dllexport) sigtransresultName();
fxValue* __declspec(dllexport) sigtransresultDescription();

#ifdef __cplusplus
}
#endif