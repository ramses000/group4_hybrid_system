#ifndef FXWRAPPERLIB_H
#define FXWRAPPERLIB_H

#include <stdbool.h>

#ifndef FXWRAPPERLIBSHARED_EXPORT
#if defined(FXWRAPPERLIB_LIBRARY)
#  define FXWRAPPERLIBSHARED_EXPORT __declspec(dllexport)
#else
#  define FXWRAPPERLIBSHARED_EXPORT
#endif
#endif


#ifdef __cplusplus
extern "C" {
#endif

void FXWRAPPERLIBSHARED_EXPORT initWrapperSystem();
void FXWRAPPERLIBSHARED_EXPORT downloadResources(const char* name, void* runtimeMain);
void FXWRAPPERLIBSHARED_EXPORT setWrapperThreadRun(int r);
void FXWRAPPERLIBSHARED_EXPORT deleteDestroyedObjects();

void FXWRAPPERLIBSHARED_EXPORT set_static_plugins(const char* data);
void FXWRAPPERLIBSHARED_EXPORT set_static_plugin_callback(void* arg);
void* FXWRAPPERLIBSHARED_EXPORT static_plugin_callback();

//wrapper context
void* FXWRAPPERLIBSHARED_EXPORT newContext();
void FXWRAPPERLIBSHARED_EXPORT freeContext(void* wrc);

void FXWRAPPERLIBSHARED_EXPORT setEnv(void* wrc, int a, int b, int c, int d, int e);
void FXWRAPPERLIBSHARED_EXPORT setDir(void* wrc, char* dir);

//math
void* FXWRAPPERLIBSHARED_EXPORT contextMath(void* wrc);
int FXWRAPPERLIBSHARED_EXPORT contextStopEvaluation(void* wrc);
int FXWRAPPERLIBSHARED_EXPORT contextWaitForGUI(void* wrc);
void FXWRAPPERLIBSHARED_EXPORT contextProcessGUI(void* wrc);
void FXWRAPPERLIBSHARED_EXPORT contextSleep(void* wrc, unsigned int ms);

//scopes
void FXWRAPPERLIBSHARED_EXPORT newScope(void* wrc);
void FXWRAPPERLIBSHARED_EXPORT freeScope(void* wrc, void* ex,  int dels);
void FXWRAPPERLIBSHARED_EXPORT newLoopScope(void* wrc);
void FXWRAPPERLIBSHARED_EXPORT freeLoopScope(void* wrc, void* ex,  int dels);
void FXWRAPPERLIBSHARED_EXPORT deleteVal(void* wrc, void* v);

void FXWRAPPERLIBSHARED_EXPORT printVal(void* wrc, void* v);

//types
void* FXWRAPPERLIBSHARED_EXPORT voidToVal(void* wrc);
void* FXWRAPPERLIBSHARED_EXPORT boolToVal(void* wrc, bool b);
void* FXWRAPPERLIBSHARED_EXPORT intToVal(void* wrc, int i);
void* FXWRAPPERLIBSHARED_EXPORT doubleToVal(void* wrc, double d);
void* FXWRAPPERLIBSHARED_EXPORT complexToVal(void* wrc, double d);
void* FXWRAPPERLIBSHARED_EXPORT symbolToVal(void* wrc, const char* s);
void* FXWRAPPERLIBSHARED_EXPORT stringToVal(void* wrc, const char* s);
void* FXWRAPPERLIBSHARED_EXPORT emstringToVal(void* wrc);
void* FXWRAPPERLIBSHARED_EXPORT hexToVal(void* wrc, const char* s);
void* FXWRAPPERLIBSHARED_EXPORT binToVal(void* wrc, const char* s);
void* FXWRAPPERLIBSHARED_EXPORT objToVal(void* wrc, const char* name, void* obj, int widget);
void* FXWRAPPERLIBSHARED_EXPORT array1ToVal(void* wrc, unsigned char* data, int size);

int FXWRAPPERLIBSHARED_EXPORT valToBool(void* wrc, void* v);
int FXWRAPPERLIBSHARED_EXPORT valToInt(void* v);
double FXWRAPPERLIBSHARED_EXPORT valToDouble(void* v);
const char* FXWRAPPERLIBSHARED_EXPORT valToString(void* v);
void* FXWRAPPERLIBSHARED_EXPORT valToObj(void* v);
void* FXWRAPPERLIBSHARED_EXPORT valToWrapper(void* v);

unsigned char* FXWRAPPERLIBSHARED_EXPORT valToArray1(void* v, int* size);

/*binary operators*/

/*binary arithmetic operators*/
void* FXWRAPPERLIBSHARED_EXPORT opAdd(void* wrc, void* v1, void* v2);// +
void* FXWRAPPERLIBSHARED_EXPORT opSub(void* wrc, void* v1, void* v2);// -
void* FXWRAPPERLIBSHARED_EXPORT opMul(void* wrc, void* v1, void* v2);// *
void* FXWRAPPERLIBSHARED_EXPORT opDiv(void* wrc, void* v1, void* v2);// /
void* FXWRAPPERLIBSHARED_EXPORT opMod(void* wrc, void* v1, void* v2);// %
/*bitwise shift*/
void* FXWRAPPERLIBSHARED_EXPORT opLs(void* wrc, void* v1, void* v2);// <<
void* FXWRAPPERLIBSHARED_EXPORT opRs(void* wrc, void* v1, void* v2);// >>
/*bitwise operators*/
void* FXWRAPPERLIBSHARED_EXPORT opAb(void* wrc, void* v1, void* v2); // &
void* FXWRAPPERLIBSHARED_EXPORT opXb(void* wrc, void* v1, void* v2);// ^
void* FXWRAPPERLIBSHARED_EXPORT opOb(void* wrc, void* v1, void* v2);// |
/*compound assignment operators*/
void* FXWRAPPERLIBSHARED_EXPORT opCAdd(void* wrc, void* v1, void* v2);// +=
void* FXWRAPPERLIBSHARED_EXPORT opCSub(void* wrc, void* v1, void* v2);// -=
void* FXWRAPPERLIBSHARED_EXPORT opCMul(void* wrc, void* v1, void* v2);// *=
void* FXWRAPPERLIBSHARED_EXPORT opCDiv(void* wrc, void* v1, void* v2);// /=
void* FXWRAPPERLIBSHARED_EXPORT opCMod(void* wrc, void* v1, void* v2);// %=
void* FXWRAPPERLIBSHARED_EXPORT opCLs(void* wrc, void* v1, void* v2);// <<=
void* FXWRAPPERLIBSHARED_EXPORT opCRs(void* wrc, void* v1, void* v2);// >>=
void* FXWRAPPERLIBSHARED_EXPORT opCA(void* wrc, void* v1, void* v2);// &=
void* FXWRAPPERLIBSHARED_EXPORT opCX(void* wrc, void* v1, void* v2); // ^=
void* FXWRAPPERLIBSHARED_EXPORT opCO(void* wrc, void* v1, void* v2);// |=
/*comparison operators*/
void* FXWRAPPERLIBSHARED_EXPORT opEqu(void* wrc, void* v1, void* v2);// ==
void* FXWRAPPERLIBSHARED_EXPORT opNEqu(void* wrc, void* v1, void* v2);// !=
void* FXWRAPPERLIBSHARED_EXPORT opLt(void* wrc, void* v1, void* v2);// <
void* FXWRAPPERLIBSHARED_EXPORT opGt(void* wrc, void* v1, void* v2);// >
void* FXWRAPPERLIBSHARED_EXPORT opLte(void* wrc, void* v1, void* v2);// <=
void* FXWRAPPERLIBSHARED_EXPORT opGte(void* wrc, void* v1, void* v2);// >=
/*logical operators*/
void* FXWRAPPERLIBSHARED_EXPORT opA(void* wrc, void* v1, void* v2);// &&
void* FXWRAPPERLIBSHARED_EXPORT opO(void* wrc, void* v1, void* v2);// ||
/*assign*/
void* FXWRAPPERLIBSHARED_EXPORT opAss(void* wrc, void* v1, void* v2);// =

/*unary operators*/
void* FXWRAPPERLIBSHARED_EXPORT opNeg(void* wrc, void* v);// -
void* FXWRAPPERLIBSHARED_EXPORT opNot(void* wrc, void* v);// !
void* FXWRAPPERLIBSHARED_EXPORT opNotb(void* wrc, void* v);// ~
void* FXWRAPPERLIBSHARED_EXPORT opAddr(void* wrc, void* v);// &
void* FXWRAPPERLIBSHARED_EXPORT opDeref(void* wrc, void* v);// *
void* FXWRAPPERLIBSHARED_EXPORT opSubsc(void* wrc, void* v, void* i);// []
//set susc
void* FXWRAPPERLIBSHARED_EXPORT opSetSubsc(void* wrc, void* v, void* i, void* val);// [] <-

//global vars
void* FXWRAPPERLIBSHARED_EXPORT setGlobal(void* wrc, char* name, void* v);
void* FXWRAPPERLIBSHARED_EXPORT getGlobal(char* name);

/*create vector and matrix*/
void* FXWRAPPERLIBSHARED_EXPORT crVec(void* wrc, int isRow, unsigned int size, ...);// create vector
void* FXWRAPPERLIBSHARED_EXPORT crMat(void* wrc, unsigned int rows, unsigned int columns, ...);// create matrix

/*copy value*/
void* FXWRAPPERLIBSHARED_EXPORT valCopy(void* wrc, void* v);
/*copy return value before clear memory*/
void* FXWRAPPERLIBSHARED_EXPORT retCopy(void* wrc, void* v);
/*copy return value and free context, call it from main*/
void* FXWRAPPERLIBSHARED_EXPORT retCopyFree(void* wrc, void* v);

/*call function*/
void* FXWRAPPERLIBSHARED_EXPORT callFn(void* wrc, int push, void* obj, const char* fnName, unsigned int argSize,  ...);// function call
//call on_event
void* FXWRAPPERLIBSHARED_EXPORT callOnEvent(void* wrc, void* obj, void* function, void* mthis);
//call open_file_content
void* FXWRAPPERLIBSHARED_EXPORT callOpenFileContent(void* wrc, void* arg1, void* function, void* mthis);
//call download_file
void* FXWRAPPERLIBSHARED_EXPORT callDownloadFile(void* wrc, void* arg1, void* arg2, void* function, void* mthis);
//call audio_record_async
void* FXWRAPPERLIBSHARED_EXPORT callAudioRecordAsync(void* wrc, void* arg1, void* arg2, void* arg3, void* function, void* mthis);
/*call image res read*/
void* FXWRAPPERLIBSHARED_EXPORT callImgResRead(void* wrc, const unsigned char* fileData, int fileDataSize);
/*call py evaluate*/
void* FXWRAPPERLIBSHARED_EXPORT callPyEvaluate(void* wrc, const char* fileData, void* vars);
void* FXWRAPPERLIBSHARED_EXPORT extractVar(void* vars, const char* varName, int del);

//types
int FXWRAPPERLIBSHARED_EXPORT contextDefineType(void* wrc, char* name);
int FXWRAPPERLIBSHARED_EXPORT contextTypeInherits(void* wrc, char* name, char* inheritList);
int FXWRAPPERLIBSHARED_EXPORT contextAddTypeMember(void* wrc, char* name, char* var, void* value);
int FXWRAPPERLIBSHARED_EXPORT contextAddTypeMethod(void* wrc, char* name, char* method, void* pointer, unsigned int argSize, ...);
int FXWRAPPERLIBSHARED_EXPORT contextRegisterTypes(void* wrc, char* pluginName);
void FXWRAPPERLIBSHARED_EXPORT contextUnregisterTypes(void* wrc);

void* FXWRAPPERLIBSHARED_EXPORT contextCreateType(void* wrc, char* name);
//get var address
void* FXWRAPPERLIBSHARED_EXPORT objGetMemberAddr(void* obj, char* member);

//void* FXWRAPPERLIBSHARED_EXPORT objGetMember(void* wrc, void* obj, char* member);
//void* FXWRAPPERLIBSHARED_EXPORT objSetMember(void* wrc, void* obj, char* member, void* value);

//create line info for callbacks
void* FXWRAPPERLIBSHARED_EXPORT startLineInfo(void* wrc, unsigned int line, unsigned int size, ...);
void FXWRAPPERLIBSHARED_EXPORT endLineInfo(void* lineInfo, unsigned int size, ...);
void* FXWRAPPERLIBSHARED_EXPORT endLineInfoPtr(void* lineInfo, unsigned int size, ...);

#ifdef __cplusplus
}
#endif

#endif // FXWRAPPERLIB_H
