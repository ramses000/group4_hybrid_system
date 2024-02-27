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

fxValue* __declspec(dllexport) lmsreceivergraph(fxValue* mu_a, fxValue* length_a, fxValue* buffer_size, fxValue* ch1, fxValue* ch2, fxValue* grp);
fxValue* __declspec(dllexport) lmsreceivergraphDescription();
fxValue* __declspec(dllexport) lmsreceivergraphName();

#ifdef __cplusplus
}
#endif