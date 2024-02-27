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

fxValue* __declspec(dllexport) chirpsignal(fxValue* startF, fxValue* endF, fxValue* Fsamp, fxValue* flength, fxValue* ftype, fxValue* NumB, fxValue* delay);
fxValue* __declspec(dllexport) chirpsignalName();
fxValue* __declspec(dllexport) chirpsignalDescription();
fxValue* __declspec(dllexport) freanasignal(fxValue* vec1, fxValue* wintype, fxValue* fsamp, fxValue* NumB);
fxValue* __declspec(dllexport) freanasignalName();
fxValue* __declspec(dllexport) freanasignalDescription();
fxValue* __declspec(dllexport) chsiggenform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) chsiggenresult(fxValue* form);
fxValue* __declspec(dllexport) chsiggenformName();
fxValue* __declspec(dllexport) chsiggenformDescription();
fxValue* __declspec(dllexport) chsiggenresultName();
fxValue* __declspec(dllexport) chsiggenresultDescription();
fxValue* __declspec(dllexport) sigfreanaform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) sigfreanaresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) sigfreanaformName();
fxValue* __declspec(dllexport) sigfreanaformDescription();
fxValue* __declspec(dllexport) sigfreanaresultName();
fxValue* __declspec(dllexport) sigfreanaresultDescription();
fxValue* __declspec(dllexport) ChirpSigGenForm(fxValue* name);

#ifdef __cplusplus
}
#endif