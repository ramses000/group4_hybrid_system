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

fxValue* __declspec(dllexport) ftdi_list_devices0();
fxValue* __declspec(dllexport) ftdi_list_devicesDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_num_channels0();
fxValue* __declspec(dllexport) ftdi_i2c_num_channelsDescription0();
fxValue* __declspec(dllexport) ftdi_spi_num_channels0();
fxValue* __declspec(dllexport) ftdi_spi_num_channelsDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_list_channels0();
fxValue* __declspec(dllexport) ftdi_i2c_list_channelsDescription0();
fxValue* __declspec(dllexport) ftdi_spi_list_channels0();
fxValue* __declspec(dllexport) ftdi_spi_list_channelsDescription0();
fxValue* __declspec(dllexport) ftdi_open1(fxValue* index);
fxValue* __declspec(dllexport) ftdi_openDescription0();
fxValue* __declspec(dllexport) ftdi_open_ex1(fxValue* serial);
fxValue* __declspec(dllexport) ftdi_open_exDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_open1(fxValue* index);
fxValue* __declspec(dllexport) ftdi_i2c_openDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_open_ex1(fxValue* serial);
fxValue* __declspec(dllexport) ftdi_i2c_open_exDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_config2(fxValue* handle, fxValue* clock);
fxValue* __declspec(dllexport) ftdi_i2c_configDescription0();
fxValue* __declspec(dllexport) ftdi_spi_open1(fxValue* index);
fxValue* __declspec(dllexport) ftdi_spi_openDescription0();
fxValue* __declspec(dllexport) ftdi_spi_open_ex1(fxValue* serial);
fxValue* __declspec(dllexport) ftdi_spi_open_exDescription0();
fxValue* __declspec(dllexport) ftdi_spi_config2(fxValue* handle, fxValue* clock);
fxValue* __declspec(dllexport) ftdi_spi_configDescription0();
fxValue* __declspec(dllexport) ftdi_close1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_closeDescription0();
fxValue* __declspec(dllexport) ftdi_write2(fxValue* handle, fxValue* data);
fxValue* __declspec(dllexport) ftdi_writeDescription0();
fxValue* __declspec(dllexport) ftdi_read1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_readDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_write_byte4(fxValue* handle, fxValue* sslaveAddress, fxValue* sregisterAddress, fxValue* sdata);
fxValue* __declspec(dllexport) ftdi_i2c_write_byteDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_write4(fxValue* handle, fxValue* slaveAddress, fxValue* data, fxValue* doptions);
fxValue* __declspec(dllexport) ftdi_i2c_writeDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_read_byte3(fxValue* handle, fxValue* sslaveAddress, fxValue* sregisterAddress);
fxValue* __declspec(dllexport) ftdi_i2c_read_byteDescription0();
fxValue* __declspec(dllexport) ftdi_i2c_read4(fxValue* handle, fxValue* slaveAddress, fxValue* ssizeToTransfer, fxValue* doptions);
fxValue* __declspec(dllexport) ftdi_i2c_readDescription0();
fxValue* __declspec(dllexport) ftdi_spi_write_byte4(fxValue* handle, fxValue* sslaveAddress, fxValue* sAddress, fxValue* sdata);
fxValue* __declspec(dllexport) ftdi_spi_write_byteDescription0();
fxValue* __declspec(dllexport) ftdi_spi_write3(fxValue* handle, fxValue* data, fxValue* doptions);
fxValue* __declspec(dllexport) ftdi_spi_writeDescription0();
fxValue* __declspec(dllexport) ftdi_spi_read_byte3(fxValue* handle, fxValue* sslaveAddress, fxValue* sAddress);
fxValue* __declspec(dllexport) ftdi_spi_read_byteDescription0();
fxValue* __declspec(dllexport) ftdi_spi_read3(fxValue* handle, fxValue* ssizeToTransfer, fxValue* doptions);
fxValue* __declspec(dllexport) ftdi_spi_readDescription0();
fxValue* __declspec(dllexport) ftdi_set_baud_rate2(fxValue* handle, fxValue* rate);
fxValue* __declspec(dllexport) ftdi_set_baud_rateDescription0();
fxValue* __declspec(dllexport) ftdi_reset_device1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_reset_deviceDescription0();
fxValue* __declspec(dllexport) ftdi_purge1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_purgeDescription0();
fxValue* __declspec(dllexport) ftdi_get_queue_status1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_get_queue_statusDescription0();
fxValue* __declspec(dllexport) ftdi_set_data_characteristics4(fxValue* handle, fxValue* word_length, fxValue* stop_bits, fxValue* parity);
fxValue* __declspec(dllexport) ftdi_set_data_characteristicsDescription0();
fxValue* __declspec(dllexport) ftdi_get_com_port_number1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_get_com_port_numberDescription0();
fxValue* __declspec(dllexport) ftdi_set_bit_mode3(fxValue* handle, fxValue* mask, fxValue* mode);
fxValue* __declspec(dllexport) ftdi_set_bit_modeDescription0();
fxValue* __declspec(dllexport) ftdi_get_bit_mode1(fxValue* handle);
fxValue* __declspec(dllexport) ftdi_get_bit_modeDescription0();
fxValue* __declspec(dllexport) ftdi_set_usb_parameters3(fxValue* handle, fxValue* in_size, fxValue* out_size);
fxValue* __declspec(dllexport) ftdi_set_usb_parametersDescription0();
fxValue* __declspec(dllexport) ftdi_set_chars5(fxValue* handle, fxValue* event_ch, fxValue* event_ch_en, fxValue* error_ch, fxValue* error_ch_en);
fxValue* __declspec(dllexport) ftdi_set_charsDescription0();
fxValue* __declspec(dllexport) ftdi_set_timeouts3(fxValue* handle, fxValue* read_timeout, fxValue* write_timeout);
fxValue* __declspec(dllexport) ftdi_set_timeoutsDescription0();
fxValue* __declspec(dllexport) ftdi_set_latency_timer2(fxValue* handle, fxValue* timer);
fxValue* __declspec(dllexport) ftdi_set_latency_timerDescription0();
fxValue* __declspec(dllexport) ftdi_set_flow_control4(fxValue* handle, fxValue* flow_control, fxValue* xon, fxValue* xoff);
fxValue* __declspec(dllexport) ftdi_set_flow_controlDescription0();

#ifdef __cplusplus
}
#endif