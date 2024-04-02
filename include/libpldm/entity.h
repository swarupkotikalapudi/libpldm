/* SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later */
#ifndef ENTITY_H
#define ENTITY_H

#ifdef __cplusplus
extern "C" {
#endif

/** @brief PLDM Entity ID Codes in DSP0249_1.1.0 specification
 */
enum pldm_entity_id_codes {
	PLDM_ENTITY_UNSPECIFIED = 0,
	PLDM_ENTITY_OTHER = 1,

	/* Miscellaneous Entities */
	PLDM_ENTITY_NETWORK = 2,
	PLDM_ENTITY_GROUP = 3,
	PLDM_ENTITY_REMOTE_MGMT_COMM_DEVICE = 4,
	PLDM_ENTITY_EXTERNAL_ENVIRONMENT = 5,
	PLDM_ENTITY_COMM_CHANNEL = 6,
	PLDM_ENTITY_TERMINUS = 7,
	PLDM_ENTITY_PLATFORM_EVENT_LOG = 8,

	/* Human Interface Entities */
	PLDM_ENTITY_KEYPAD = 15,
	PLDM_ENTITY_SWITCH = 16,
	PLDM_ENTITY_PUSHBUTTON = 17,
	PLDM_ENTITY_DISPLAY = 18,
	PLDM_ENTITY_INDICATOR = 19,

	/* Software/Firmware Entities */
	PLDM_ENTITY_SYS_MGMT_SW = 30,
	PLDM_ENTITY_SYS_FIRMWARE = 31,
	PLDM_ENTITY_OPERATING_SYS = 32,
	PLDM_ENTITY_VIRTUAL_MACHINE_MANAGER = 33,
	PLDM_ENTITY_OS_LOADER = 34,
	PLDM_ENTITY_DEVICE_DRIVER = 35,
	PLDM_ENTITY_MGMT_CONTROLLER_FW = 36,

	/* Chassis/Enclosure Entities */
	PLDM_ENTITY_SYSTEM_CHASSIS = 45,
	PLDM_ENTITY_SUB_CHASSIS = 46,
	PLDM_ENTITY_DISK_DRIVE_BAY = 47,
	PLDM_ENTITY_PERIPHERAL_BAY = 48,
	PLDM_ENTITY_DEVICE_BAY = 49,
	PLDM_ENTITY_DOOR = 50,
	PLDM_ENTITY_ACCESS_PANEL = 51,
	PLDM_ENTITY_COVER = 52,

	/* Board/Card/Module Entities */
	PLDM_ENTITY_BOARD = 60,
	PLDM_ENTITY_CARD = 61,
	PLDM_ENTITY_MODULE = 62,
	PLDM_ENTITY_SYS_MGMT_MODULE = 63,
	PLDM_ENTITY_SYS_BOARD = 64,
	PLDM_ENTITY_MEMORY_BOARD = 65,
	PLDM_ENTITY_MEMORY_MODULE = 66,
	PLDM_ENTITY_PROC_MODULE = 67,
	PLDM_ENTITY_ADD_IN_CARD = 68,
	PLDM_ENTITY_CHASSIS_FRONT_PANEL_BOARD = 69,
	PLDM_ENTITY_BACK_PANEL_BOARD = 70,
	PLDM_ENTITY_POWER_MGMT = 71,
	PLDM_ENTITY_POWER_SYS_BOARD = 72,
	PLDM_ENTITY_DRIVE_BACKPLANE = 73,
	PLDM_ENTITY_SYS_INTERNAL_EXPANSION_BOARD = 74,
	PLDM_ENTITY_OTHER_SYS_BOARD = 75,
	PLDM_ENTITY_CHASSIS_BACK_PANEL_BOARD = 76,
	PLDM_ENTITY_PROCESSING_BLADE = 77,
	PLDM_ENTITY_CONNECTIVITY_SWITCH = 78,
	PLDM_ENTITY_PROC_MEMORY_MODULE = 79,
	PLDM_ENTITY_IO_MODULE = 80,
	PLDM_ENTITY_PROC_IO_MODULE = 81,

	/* Cooling Entities */
	PLDM_ENTITY_COOLING_DEVICE = 90,
	PLDM_ENTITY_COOLING_SUBSYSTEM = 91,
	PLDM_ENTITY_COOLING_UNIT = 92,
	PLDM_ENTITY_FAN = 93,
	PLDM_ENTITY_PELTIER_COOLING_DEVICE = 94,
	PLDM_ENTITY_LIQUID_COOLING_DEVICE = 95,
	PLDM_ENTITY_LIQUID_COOLING_SUBSYSTEM = 96,

	/* Storage Device Entities */
	PLDM_ENTITY_OTHER_STORAGE_DEVICE = 105,
	PLDM_ENTITY_FLOPPY_DRIVE = 106,
	PLDM_ENTITY_FIXED_DISK_HARD_DRIVE = 107,
	PLDM_ENTITY_CD_DRIVE = 108,
	PLDM_ENTITY_CD_DVD_DRIVE = 109,
	PLDM_ENTITY_OTHER_SILICON_STORAGE_DEVICE = 110,
	PLDM_ENTITY_SOLID_STATE_SRIVE = 111,

	/* Power Entities */
	PLDM_ENTITY_POWER_SUPPLY = 120,
	PLDM_ENTITY_BATTERY = 121,
	PLDM_ENTITY_SUPER_CAPACITOR = 122,
	PLDM_ENTITY_POWER_CONVERTER = 123,
	PLDM_ENTITY_DC_DC_CONVERTER = 124,
	PLDM_ENTITY_AC_MAINS_POWER_SUPPLY = 125,
	PLDM_ENTITY_DC_MAINS_POWER_SUPPLY = 126,

	/* Chip Entities */
	PLDM_ENTITY_PROC = 135,
	PLDM_ENTITY_CHIPSET_COMPONENT = 136,
	PLDM_ENTITY_MGMT_CONTROLLER = 137,
	PLDM_ENTITY_PERIPHERAL_CONTROLLER = 138,
	PLDM_ENTITY_SEEPROM = 139,
	PLDM_ENTITY_NVRAM_CHIP = 140,
	PLDM_ENTITY_FLASH_MEMORY_CHIP = 141,
	PLDM_ENTITY_MEMORY_CHIP = 142,
	PLDM_ENTITY_MEMORY_CONTROLLER = 143,
	PLDM_ENTITY_NETWORK_CONTROLLER = 144,
	PLDM_ENTITY_IO_CONTROLLER = 145,
	PLDM_ENTITY_SOUTH_BRIDGE = 146,
	PLDM_ENTITY_REAL_TIME_CLOCK = 147,
	PLDM_ENTITY_FPGA_CPLD_DEVICE = 148,
	/* Bus Entities */
	PLDM_ENTITY_OTHER_BUS = 160,
	PLDM_ENTITY_SYS_BUS = 161,
	PLDM_ENTITY_I2C_BUS = 162,
	PLDM_ENTITY_SMBUS_BUS = 163,
	PLDM_ENTITY_SPI_BUS = 164,
	PLDM_ENTITY_PCI_BUS = 165,
	PLDM_ENTITY_PCI_EXPRESS_BUS = 166,
	PLDM_ENTITY_PECI_BUS = 167,
	PLDM_ENTITY_LPC_BUS = 168,
	PLDM_ENTITY_USB_BUS = 169,
	PLDM_ENTITY_FIREWIRE_BUS = 170,
	PLDM_ENTITY_SCSI_BUS = 171,
	PLDM_ENTITY_SATA_SAS_BUS = 172,
	PLDM_ENTITY_PROC_FRONT_SIDE_BUS = 173,
	PLDM_ENTITY_INTER_PROC_BUS = 174,

	/* Connectors/Cables */
	PLDM_ENTITY_CONNECTOR = 185,
	PLDM_ENTITY_SLOT = 186,
	PLDM_ENTITY_CABLE = 187,
	PLDM_ENTITY_INTERCONNECT = 188,
	PLDM_ENTITY_PLUG = 189,
	PLDM_ENTITY_SOCKET = 190,

	/* Network Interface Connectors */
	PLDM_ENTITY_RJ45 = 200,
	PLDM_ENTITY_XFP = 201,
	PLDM_ENTITY_SFP = 202,
	PLDM_ENTITY_SFP10 = 203,
	PLDM_ENTITY_SFP16 = 205,
	PLDM_ENTITY_SFP28 = 206,
	PLDM_ENTITY_SFP_PLUS = 207,
	PLDM_ENTITY_SFPDD = 208,
	PLDM_ENTITY_CSFP = 209,
	PLDM_ENTITY_QSFP = 210,
	PLDM_ENTITY_QSFP28 = 211,
	PLDM_ENTITY_QSFP_PLUS = 212,
	PLDM_ENTITY_QSFPDD = 213,
	PLDM_ENTITY_OSFP = 214,

	/* Network Ports Connection Types */
	PLDM_ENTITY_ETHERNET = 300,
	PLDM_ENTITY_INFINIBAND = 301,
	PLDM_ENTITY_FIBRECHANEL = 302,
	PLDM_ENTITY_OMINIPATH = 303,

	/* OEM ranges */
	PLDM_OEM_ENTITY_TYPE_START = 24576,
	PLDM_OEM_ENTITY_TYPE_END = 32767,
};

#ifdef __cplusplus
}
#endif

#endif /* ENTITY_H */
