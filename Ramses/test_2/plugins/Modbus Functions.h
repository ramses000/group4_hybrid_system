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

fxValue* __declspec(dllexport) modb_ai_readcmd(fxValue* address, fxValue* pinaddress);
fxValue* __declspec(dllexport) modb_ai_readcmdName();
fxValue* __declspec(dllexport) modb_ai_readcmdDescription();
fxValue* __declspec(dllexport) modb_ai_read(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ai_readf(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* channel, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ai_readName();
fxValue* __declspec(dllexport) modb_ai_readfName();
fxValue* __declspec(dllexport) modb_ai_readfDescription();
fxValue* __declspec(dllexport) modb_ai_readDescription();
fxValue* __declspec(dllexport) modb_ai_read_multicmd(fxValue* address, fxValue* pinaddress, fxValue* multi);
fxValue* __declspec(dllexport) modb_ai_read_multicmdName();
fxValue* __declspec(dllexport) modb_ai_read_multicmdDescription();
fxValue* __declspec(dllexport) modb_ai_read_multi(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ai_read_multiName();
fxValue* __declspec(dllexport) modb_ai_read_multiDescription();
fxValue* __declspec(dllexport) modb_di_readcmd(fxValue* address, fxValue* pinaddress, fxValue* totchanels);
fxValue* __declspec(dllexport) modb_di_readcmdName();
fxValue* __declspec(dllexport) modb_di_readcmdDescription();
fxValue* __declspec(dllexport) modb_di_read_bit(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* bit, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_di_read_bitName();
fxValue* __declspec(dllexport) modb_di_read_bitDescription();
fxValue* __declspec(dllexport) modb_di_read_reg(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_di_read_regName();
fxValue* __declspec(dllexport) modb_di_read_regDescription();
fxValue* __declspec(dllexport) modb_ao_writecmd(fxValue* address, fxValue* pinaddress, fxValue* data);
fxValue* __declspec(dllexport) modb_ao_writecmdName();
fxValue* __declspec(dllexport) modb_ao_writecmdDescription();
fxValue* __declspec(dllexport) modb_ao_write(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ao_writef(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* channel, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ao_writeName();
fxValue* __declspec(dllexport) modb_ao_writefName();
fxValue* __declspec(dllexport) modb_ao_writeDescription();
fxValue* __declspec(dllexport) modb_ao_writefDescription();
fxValue* __declspec(dllexport) modb_ao_write_multicmd(fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* data);
fxValue* __declspec(dllexport) modb_ao_write_multicmdName();
fxValue* __declspec(dllexport) modb_ao_write_multicmdDescription();
fxValue* __declspec(dllexport) modb_ao_write_multi(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ao_write_multiName();
fxValue* __declspec(dllexport) modb_ao_write_multiDescription();
fxValue* __declspec(dllexport) modb_do_writecmd(fxValue* address, fxValue* pinaddress, fxValue* data);
fxValue* __declspec(dllexport) modb_do_writecmdName();
fxValue* __declspec(dllexport) modb_do_writecmdDescription();
fxValue* __declspec(dllexport) modb_do_write(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_do_writeName();
fxValue* __declspec(dllexport) modb_do_writeDescription();
fxValue* __declspec(dllexport) modb_do_readcmd(fxValue* address, fxValue* pinaddress, fxValue* totchanels);
fxValue* __declspec(dllexport) modb_do_readcmdName();
fxValue* __declspec(dllexport) modb_do_readcmdDescription();
fxValue* __declspec(dllexport) modb_do_read_bit(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* bit, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_do_read_bitName();
fxValue* __declspec(dllexport) modb_do_read_bitDescription();
fxValue* __declspec(dllexport) modb_do_read_reg(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_do_read_regName();
fxValue* __declspec(dllexport) modb_do_read_regDescription();
fxValue* __declspec(dllexport) modb_do_write_regcmd(fxValue* address, fxValue* pinaddress, fxValue* totchanels, fxValue* data);
fxValue* __declspec(dllexport) modb_do_write_regcmdName();
fxValue* __declspec(dllexport) modb_do_write_regcmdDescription();
fxValue* __declspec(dllexport) modb_do_write_reg(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* totchanels, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_do_write_regName();
fxValue* __declspec(dllexport) modb_do_write_regDescription();
fxValue* __declspec(dllexport) modb_multi_read_writecmd(fxValue* address, fxValue* startread, fxValue* qread, fxValue* startwrite, fxValue* qwrite, fxValue* data);
fxValue* __declspec(dllexport) modb_multi_read_writecmdName();
fxValue* __declspec(dllexport) modb_multi_read_writecmdDescription();
fxValue* __declspec(dllexport) modb_multi_read_write(fxValue* handle, fxValue* address, fxValue* startread, fxValue* qread, fxValue* startwrite, fxValue* qwrite, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_multi_read_writeName();
fxValue* __declspec(dllexport) modb_multi_read_writeDescription();
fxValue* __declspec(dllexport) modb_multi_readcmd(fxValue* address, fxValue* pinaddress, fxValue* multi);
fxValue* __declspec(dllexport) modb_multi_readcmdName();
fxValue* __declspec(dllexport) modb_multi_readcmdDescription();
fxValue* __declspec(dllexport) modb_multi_read(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* timeout);
fxValue* __declspec(dllexport) modb_multi_readName();
fxValue* __declspec(dllexport) modb_multi_readDescription();
fxValue* __declspec(dllexport) modb_multi_writecmd(fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* data);
fxValue* __declspec(dllexport) modb_multi_writecmdName();
fxValue* __declspec(dllexport) modb_multi_writecmdDescription();
fxValue* __declspec(dllexport) modb_multi_write(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* multi, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_multi_writeName();
fxValue* __declspec(dllexport) modb_multi_writeDescription();
fxValue* __declspec(dllexport) modb_bits_readcmd(fxValue* address, fxValue* pinaddress, fxValue* totchanels);
fxValue* __declspec(dllexport) modb_bits_readcmdName();
fxValue* __declspec(dllexport) modb_bits_readcmdDescription();
fxValue* __declspec(dllexport) modb_bits_read_bit(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* bit, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_bits_read_bitName();
fxValue* __declspec(dllexport) modb_bits_read_bitDescription();
fxValue* __declspec(dllexport) modb_bits_read_reg(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* totchanels, fxValue* timeout);
fxValue* __declspec(dllexport) modb_bits_read_regName();
fxValue* __declspec(dllexport) modb_bits_read_regDescription();
fxValue* __declspec(dllexport) modb_bits_writecmd(fxValue* address, fxValue* pinaddress, fxValue* data);
fxValue* __declspec(dllexport) modb_bits_writecmdName();
fxValue* __declspec(dllexport) modb_bits_writecmdDescription();
fxValue* __declspec(dllexport) modb_bits_write(fxValue* handle, fxValue* address, fxValue* pinaddress, fxValue* data, fxValue* timeout);
fxValue* __declspec(dllexport) modb_bits_writeName();
fxValue* __declspec(dllexport) modb_bits_writeDescription();
fxValue* __declspec(dllexport) icpdas_ai_tcode2string(fxValue* code);
fxValue* __declspec(dllexport) icpdas_ao_tcode2string(fxValue* code);
fxValue* __declspec(dllexport) icpdas_ai_string2tcode(fxValue* code);
fxValue* __declspec(dllexport) icpdas_ao_string2tcode(fxValue* code);
fxValue* __declspec(dllexport) icpdas_ai_tcode2scale(fxValue* code, fxValue* format);
fxValue* __declspec(dllexport) icpdas_ao_tcode2scale(fxValue* code, fxValue* format);
fxValue* __declspec(dllexport) hex2dec_compl(fxValue* number);
fxValue* __declspec(dllexport) eng2dec(fxValue* number);
fxValue* __declspec(dllexport) dec2hex_compl(fxValue* number);
fxValue* __declspec(dllexport) dec2eng(fxValue* number);
fxValue* __declspec(dllexport) modb_ao_readtc(fxValue* handle, fxValue* address, fxValue* channel, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ai_readtc(fxValue* handle, fxValue* address, fxValue* channel, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ai_range_code(fxValue* handle, fxValue* address, fxValue* channel, fxValue* timeout);
fxValue* __declspec(dllexport) modb_ao_range_code(fxValue* handle, fxValue* address, fxValue* channel, fxValue* timeout);

#ifdef __cplusplus
}
#endif