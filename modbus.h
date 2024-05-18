#pragma once
#include <stdint.h>

typedef enum
{
	READ_OUTPUT_COILS = 0x01,
	READ_INPUT_CONTACTS = 0x02,
	READ_ANALOG_OUTPUT_HOLDING = 0x03,
	READ_ANALOG_INPUT = 0x04,
	WRITE_OUTPUT_COIL = 0x05,
	WRITE_SINGLE_ANALOG_OUTPUT_HOLDING = 0x06,
	WRITE_OUTPUT_COILS = 0x15,
	WRITE_MULTI_ANALOG_OUTPUT_HOLDING = 0x16
} func_code_t;

typedef struct
{
	uint8_t device_address;
	func_code_t func_code;
	uint8_t* data_buff;
	uint8_t data_size;
	uint16_t crc;

} modbus_frame_data_t;
void ModbusPrepareData();