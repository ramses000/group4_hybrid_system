/// do not modify this file! ///
/*used uplugins start
biodaq
biodaqutil
used uplugins end*/

#include <ValueTypes/value.h>
using namespace FlexitekMath::ValueTypes;

extern "C" {

fxValue __declspec(dllexport) plugin_at_loaded();
fxValue __declspec(dllexport) atdevice_last_error(const fxValue& returnType);
fxValue __declspec(dllexport) atdevice_list_all();
fxValue __declspec(dllexport) atdevice_desc2num(const fxValue& deviceDescription);
fxValue __declspec(dllexport) atdevice_num2desc(const fxValue& deviceNumber);
fxValue __declspec(dllexport) atdevice_properties(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_set_boardid(const fxValue& handle, const fxValue& boardid);
fxValue __declspec(dllexport) atdevice_set_description(const fxValue& handle, const fxValue& description);
fxValue __declspec(dllexport) atdevice_load_profile(const fxValue& handle, const fxValue& path);
fxValue __declspec(dllexport) atdevice_close(const fxValue& handle);

fxValue __declspec(dllexport) atdevice_ai_list();
fxValue __declspec(dllexport) atdevice_ai_open(const fxValue& deviceNumber, const fxValue& buffered);
fxValue __declspec(dllexport) atdevice_ai_channels(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_logical_channels(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_ranges(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_connections(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_set_range(const fxValue& handle, const fxValue& channelNumber, const fxValue& range);
fxValue __declspec(dllexport) atdevice_ai_range(const fxValue& handle, const fxValue& channelNumber);
fxValue __declspec(dllexport) atdevice_ai_set_connection(const fxValue& handle, const fxValue& channelNumber, const fxValue& connectionType);
fxValue __declspec(dllexport) atdevice_ai_connection(const fxValue& handle, const fxValue& channelNumber);
fxValue __declspec(dllexport) atdevice_ai_set_conversion(const fxValue& handle, const fxValue& startChannel, const fxValue& channelCount, const fxValue& clockSource, const fxValue& clockRate);
fxValue __declspec(dllexport) atdevice_ai_conversion(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_set_record(const fxValue& handle, const fxValue& sectionLenght, const fxValue& sectionCount);
fxValue __declspec(dllexport) atdevice_ai_record(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ai_read(const fxValue& handle, const fxValue& startChannel);
fxValue __declspec(dllexport) atdevice_ai_read_multi(const fxValue& handle, const fxValue& startChannel, const fxValue& channelCount);

fxValue __declspec(dllexport) atdevice_ao_list();
fxValue __declspec(dllexport) atdevice_ao_open(const fxValue& deviceNumber, const fxValue& buffered);
fxValue __declspec(dllexport) atdevice_ao_channels(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ao_ranges(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ao_set_range(const fxValue& handle, const fxValue& channelNumber, const fxValue& range);
fxValue __declspec(dllexport) atdevice_ao_range(const fxValue& handle, const fxValue& channelNumber);
fxValue __declspec(dllexport) atdevice_ao_set_conversion(const fxValue& handle, const fxValue& startChannel, const fxValue& channelCount, const fxValue& clockSource, const fxValue& clockRate);
fxValue __declspec(dllexport) atdevice_ao_conversion(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ao_set_record(const fxValue& handle, const fxValue& sectionLength);
fxValue __declspec(dllexport) atdevice_ao_record(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ao_write(const fxValue& handle, const fxValue& startChannel, const fxValue& data);
fxValue __declspec(dllexport) atdevice_ao_write_multi(const fxValue& handle, const fxValue& startChannel, const fxValue& channelCount, const fxValue& data);

fxValue __declspec(dllexport) atdevice_di_list();
fxValue __declspec(dllexport) atdevice_di_open(const fxValue& deviceNumber, const fxValue& buffered);
fxValue __declspec(dllexport) atdevice_di_ports(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_di_set_inverse_channels(const fxValue& handle, const fxValue& port, const fxValue& data);
fxValue __declspec(dllexport) atdevice_di_inverse_channels(const fxValue& handle, const fxValue& port);
fxValue __declspec(dllexport) atdevice_di_set_conversion(const fxValue& handle, const fxValue& startChannel, const fxValue& channelCount, const fxValue& clockSource, const fxValue& clockRate);
fxValue __declspec(dllexport) atdevice_di_conversion(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_di_set_record(const fxValue& handle, const fxValue& sectionLength, const fxValue& sectionCount);
fxValue __declspec(dllexport) atdevice_di_record(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_di_read(const fxValue& handle, const fxValue& startPort);
fxValue __declspec(dllexport) atdevice_di_read_bit(const fxValue& handle, const fxValue& startChannel, const fxValue& bit);
fxValue __declspec(dllexport) atdevice_di_read_multi(const fxValue& handle, const fxValue& startPort, const fxValue& portCount);

fxValue __declspec(dllexport) atdevice_do_list();
fxValue __declspec(dllexport) atdevice_do_open(const fxValue& deviceNumber, const fxValue& buffered);
fxValue __declspec(dllexport) atdevice_do_ports(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_do_set_conversion(const fxValue& handle, const fxValue& startPort, const fxValue& portCount, const fxValue& clockSource, const fxValue& clockRate);
fxValue __declspec(dllexport) atdevice_do_conversion(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_do_set_record(const fxValue& handle, const fxValue& sectionLength);
fxValue __declspec(dllexport) atdevice_do_record(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_do_write(const fxValue& handle, const fxValue& startPort, const fxValue& data);
fxValue __declspec(dllexport) atdevice_do_write_bit(const fxValue& handle, const fxValue& startPort, const fxValue& bit, const fxValue& data);
fxValue __declspec(dllexport) atdevice_do_read(const fxValue& handle, const fxValue& startPort);
fxValue __declspec(dllexport) atdevice_do_read_bit(const fxValue& handle, const fxValue& startChannel, const fxValue& bit);
fxValue __declspec(dllexport) atdevice_do_write_multi(const fxValue& handle, const fxValue& startPort, const fxValue& portCount, const fxValue& data);


fxValue __declspec(dllexport) atdevice_ct_list(const fxValue& counterType);
fxValue __declspec(dllexport) atdevice_ct_open(const fxValue& deviceNumber, const fxValue& counterType);
fxValue __declspec(dllexport) atdevice_ct_channels(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ct_start(const fxValue& handle, const fxValue& startChannel);
fxValue __declspec(dllexport) atdevice_ct_start_output(const fxValue& handle, const fxValue& startChannel, const fxValue& val);
fxValue __declspec(dllexport) atdevice_ct_stop(const fxValue& handle);
fxValue __declspec(dllexport) atdevice_ct_read(const fxValue& handle);

fxValue __declspec(dllexport) plugin_at_loadedName();
fxValue __declspec(dllexport) plugin_at_loadedDescription();
fxValue __declspec(dllexport) atdevice_last_errorName();
fxValue __declspec(dllexport) atdevice_last_errorDescription();
fxValue __declspec(dllexport) atdevice_list_allName();
fxValue __declspec(dllexport) atdevice_list_allDescription();
fxValue __declspec(dllexport) atdevice_desc2numName();
fxValue __declspec(dllexport) atdevice_desc2numDescription();
fxValue __declspec(dllexport) atdevice_num2descName();
fxValue __declspec(dllexport) atdevice_num2descDescription();
fxValue __declspec(dllexport) atdevice_propertiesName();
fxValue __declspec(dllexport) atdevice_propertiesDescription();
fxValue __declspec(dllexport) atdevice_set_boardidName();
fxValue __declspec(dllexport) atdevice_set_boardidDescription();
fxValue __declspec(dllexport) atdevice_set_descriptionName();
fxValue __declspec(dllexport) atdevice_set_descriptionDescription();
fxValue __declspec(dllexport) atdevice_load_profileName();
fxValue __declspec(dllexport) atdevice_load_profileDescription();
fxValue __declspec(dllexport) atdevice_closeName();
fxValue __declspec(dllexport) atdevice_closeDescription();

fxValue __declspec(dllexport) atdevice_ai_listName();
fxValue __declspec(dllexport) atdevice_ai_listDescription();
fxValue __declspec(dllexport) atdevice_ai_openName();
fxValue __declspec(dllexport) atdevice_ai_openDescription();
fxValue __declspec(dllexport) atdevice_ai_channelsName();
fxValue __declspec(dllexport) atdevice_ai_channelsDescription();
fxValue __declspec(dllexport) atdevice_ai_logical_channelsName();
fxValue __declspec(dllexport) atdevice_ai_logical_channelsDescription();
fxValue __declspec(dllexport) atdevice_ai_rangesName();
fxValue __declspec(dllexport) atdevice_ai_rangesDescription();
fxValue __declspec(dllexport) atdevice_ai_connectionsName();
fxValue __declspec(dllexport) atdevice_ai_connectionsDescription();
fxValue __declspec(dllexport) atdevice_ai_set_rangeName();
fxValue __declspec(dllexport) atdevice_ai_set_rangeDescription();
fxValue __declspec(dllexport) atdevice_ai_rangeName();
fxValue __declspec(dllexport) atdevice_ai_rangeDescription();
fxValue __declspec(dllexport) atdevice_ai_set_connectionName();
fxValue __declspec(dllexport) atdevice_ai_set_connectionDescription();
fxValue __declspec(dllexport) atdevice_ai_connectionName();
fxValue __declspec(dllexport) atdevice_ai_connectionDescription();
fxValue __declspec(dllexport) atdevice_ai_set_conversionName();
fxValue __declspec(dllexport) atdevice_ai_set_conversionDescription();
fxValue __declspec(dllexport) atdevice_ai_conversionName();
fxValue __declspec(dllexport) atdevice_ai_conversionDescription();
fxValue __declspec(dllexport) atdevice_ai_set_recordName();
fxValue __declspec(dllexport) atdevice_ai_set_recordDescription();
fxValue __declspec(dllexport) atdevice_ai_recordName();
fxValue __declspec(dllexport) atdevice_ai_recordDescription();
fxValue __declspec(dllexport) atdevice_ai_readName();
fxValue __declspec(dllexport) atdevice_ai_readDescription();
fxValue __declspec(dllexport) atdevice_ai_read_multiName();
fxValue __declspec(dllexport) atdevice_ai_read_multiDescription();

fxValue __declspec(dllexport) atdevice_ao_listName();
fxValue __declspec(dllexport) atdevice_ao_listDescription();
fxValue __declspec(dllexport) atdevice_ao_openName();
fxValue __declspec(dllexport) atdevice_ao_openDescription();
fxValue __declspec(dllexport) atdevice_ao_channelsName();
fxValue __declspec(dllexport) atdevice_ao_channelsDescription();
fxValue __declspec(dllexport) atdevice_ao_rangesName();
fxValue __declspec(dllexport) atdevice_ao_rangesDescription();
fxValue __declspec(dllexport) atdevice_ao_set_rangeName();
fxValue __declspec(dllexport) atdevice_ao_set_rangeDescription();
fxValue __declspec(dllexport) atdevice_ao_rangeName();
fxValue __declspec(dllexport) atdevice_ao_rangeDescription();
fxValue __declspec(dllexport) atdevice_ao_set_conversionName();
fxValue __declspec(dllexport) atdevice_ao_set_conversionDescription();
fxValue __declspec(dllexport) atdevice_ao_conversionName();
fxValue __declspec(dllexport) atdevice_ao_conversionDescription();
fxValue __declspec(dllexport) atdevice_ao_set_recordName();
fxValue __declspec(dllexport) atdevice_ao_set_recordDescription();
fxValue __declspec(dllexport) atdevice_ao_recordName();
fxValue __declspec(dllexport) atdevice_ao_recordDescription();
fxValue __declspec(dllexport) atdevice_ao_writeName();
fxValue __declspec(dllexport) atdevice_ao_writeDescription();
fxValue __declspec(dllexport) atdevice_ao_write_multiName();
fxValue __declspec(dllexport) atdevice_ao_write_multiDescription();

fxValue __declspec(dllexport) atdevice_di_listName();
fxValue __declspec(dllexport) atdevice_di_listDescription();
fxValue __declspec(dllexport) atdevice_di_openName();
fxValue __declspec(dllexport) atdevice_di_openDescription();
fxValue __declspec(dllexport) atdevice_di_portsName();
fxValue __declspec(dllexport) atdevice_di_portsDescription();
fxValue __declspec(dllexport) atdevice_di_set_inverse_channelsName();
fxValue __declspec(dllexport) atdevice_di_set_inverse_channelsDescription();
fxValue __declspec(dllexport) atdevice_di_inverse_channelsName();
fxValue __declspec(dllexport) atdevice_di_inverse_channelsDescription();
fxValue __declspec(dllexport) atdevice_di_set_conversionName();
fxValue __declspec(dllexport) atdevice_di_set_conversionDescription();
fxValue __declspec(dllexport) atdevice_di_conversionName();
fxValue __declspec(dllexport) atdevice_di_conversionDescription();
fxValue __declspec(dllexport) atdevice_di_set_recordName();
fxValue __declspec(dllexport) atdevice_di_set_recordDescription();
fxValue __declspec(dllexport) atdevice_di_recordName();
fxValue __declspec(dllexport) atdevice_di_recordDescription();
fxValue __declspec(dllexport) atdevice_di_readName();
fxValue __declspec(dllexport) atdevice_di_readDescription();
fxValue __declspec(dllexport) atdevice_di_read_bitName();
fxValue __declspec(dllexport) atdevice_di_read_bitDescription();
fxValue __declspec(dllexport) atdevice_di_read_multiName();
fxValue __declspec(dllexport) atdevice_di_read_multiDescription();

fxValue __declspec(dllexport) atdevice_do_listName();
fxValue __declspec(dllexport) atdevice_do_listDescription();
fxValue __declspec(dllexport) atdevice_do_openName();
fxValue __declspec(dllexport) atdevice_do_openDescription();
fxValue __declspec(dllexport) atdevice_do_portsName();
fxValue __declspec(dllexport) atdevice_do_portsDescription();
fxValue __declspec(dllexport) atdevice_do_set_conversionName();
fxValue __declspec(dllexport) atdevice_do_set_conversionDescription();
fxValue __declspec(dllexport) atdevice_do_conversionName();
fxValue __declspec(dllexport) atdevice_do_conversionDescription();
fxValue __declspec(dllexport) atdevice_do_set_recordName();
fxValue __declspec(dllexport) atdevice_do_set_recordDescription();
fxValue __declspec(dllexport) atdevice_do_recordName();
fxValue __declspec(dllexport) atdevice_do_recordDescription();
fxValue __declspec(dllexport) atdevice_do_writeName();
fxValue __declspec(dllexport) atdevice_do_writeDescription();
fxValue __declspec(dllexport) atdevice_do_write_bitName();
fxValue __declspec(dllexport) atdevice_do_write_bitDescription();
fxValue __declspec(dllexport) atdevice_do_readName();
fxValue __declspec(dllexport) atdevice_do_readDescription();
fxValue __declspec(dllexport) atdevice_do_read_bitName();
fxValue __declspec(dllexport) atdevice_do_read_bitDescription();
fxValue __declspec(dllexport) atdevice_do_write_multiName();
fxValue __declspec(dllexport) atdevice_do_write_multiDescription();

fxValue __declspec(dllexport) atdevice_ct_listName();
fxValue __declspec(dllexport) atdevice_ct_listDescription();
fxValue __declspec(dllexport) atdevice_ct_openName();
fxValue __declspec(dllexport) atdevice_ct_openDescription();
fxValue __declspec(dllexport) atdevice_ct_channelsName();
fxValue __declspec(dllexport) atdevice_ct_channelsDescription();
fxValue __declspec(dllexport) atdevice_ct_startName();
fxValue __declspec(dllexport) atdevice_ct_startDescription();
fxValue __declspec(dllexport) atdevice_ct_start_outputName();
fxValue __declspec(dllexport) atdevice_ct_start_outputDescription();
fxValue __declspec(dllexport) atdevice_ct_stopName();
fxValue __declspec(dllexport) atdevice_ct_stopDescription();
fxValue __declspec(dllexport) atdevice_ct_readName();
fxValue __declspec(dllexport) atdevice_ct_readDescription();

}


