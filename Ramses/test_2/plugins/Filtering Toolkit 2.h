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

fxValue* __declspec(dllexport) resamplingform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) resamplingresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) resamplingformName();
fxValue* __declspec(dllexport) resamplingformDescription();
fxValue* __declspec(dllexport) resamplingresultName();
fxValue* __declspec(dllexport) resamplingresultDescription();
fxValue* __declspec(dllexport) firoptimalform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) firoptimalresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) firoptimalformName();
fxValue* __declspec(dllexport) firoptimalformDescription();
fxValue* __declspec(dllexport) firoptimalresultName();
fxValue* __declspec(dllexport) firoptimalresultDescription();

#ifdef __cplusplus
}
#endif