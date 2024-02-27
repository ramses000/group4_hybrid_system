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

fxValue* __declspec(dllexport) iirfilteringform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) iirfilteringresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) iirfilteringformName();
fxValue* __declspec(dllexport) iirfilteringformDescription();
fxValue* __declspec(dllexport) iirfilteringresultName();
fxValue* __declspec(dllexport) iirfilteringresultDescription();
fxValue* __declspec(dllexport) firfilteringform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) firfilteringresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) firfilteringformName();
fxValue* __declspec(dllexport) firfilteringformDescription();
fxValue* __declspec(dllexport) firfilteringresultName();
fxValue* __declspec(dllexport) firfilteringresultDescription();

#ifdef __cplusplus
}
#endif