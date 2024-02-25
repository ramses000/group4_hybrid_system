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

fxValue* __declspec(dllexport) signalstatisticsform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) signalstatisticsresult(fxValue* form, fxValue* data);
fxValue* __declspec(dllexport) signalstatisticsformName();
fxValue* __declspec(dllexport) signalstatisticsformDescription();
fxValue* __declspec(dllexport) signalstatisticsresultName();
fxValue* __declspec(dllexport) signalstatisticsresultDescription();
fxValue* __declspec(dllexport) corrconvform(fxValue* parent, fxValue* name);
fxValue* __declspec(dllexport) corrconvresult(fxValue* form, fxValue* data1, fxValue* data2);
fxValue* __declspec(dllexport) corrconvformName();
fxValue* __declspec(dllexport) corrconvformDescription();
fxValue* __declspec(dllexport) corrconvresultName();
fxValue* __declspec(dllexport) corrconvresultDescription();

#ifdef __cplusplus
}
#endif