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

fxValue* __declspec(dllexport) waveform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) waveformresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) waveformName();
fxValue* __declspec(dllexport) waveformDescription();
fxValue* __declspec(dllexport) waveformresultName();
fxValue* __declspec(dllexport) waveformresultDescription();

#ifdef __cplusplus
}
#endif