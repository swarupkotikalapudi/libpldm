#ifndef STATE_SET_H
#define STATE_SET_H

#ifdef __cplusplus
extern "C" {
#endif

/** @brief PLDM State Set IDs in DSP0249_1.1.0 specification
 */
enum pldm_state_set_ids {

	/* Table 1 - General State Sets */
	PLDM_STATE_SET_HEALTH_STATE = 1,
	PLDM_STATE_SET_AVAILABILITY = 2,
	PLDM_STATE_SET_PREDICTIVE_CONDITION = 3,
	PLDM_STATE_SET_REDUNDANCY_STATUS = 4,
	PLDM_STATE_SET_HEALTH_REDUNDANCY_TREND = 5,
	PLDM_STATE_SET_GROUP_RESOURCE_LEVEL = 6,
	PLDM_STATE_SET_REDUNDANCY_ENTITY_ROLE = 7,
	PLDM_STATE_SET_OPERATIONAL_STATUS = 8,
	PLDM_STATE_SET_OPERATIONAL_STRESS_STATUS = 9,
	PLDM_STATE_SET_OPERATIONAL_FAULT_STATUS = 10,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS = 11,
	PLDM_STATE_SET_OPERATIONAL_CONNECTION_STATUS = 12,
	PLDM_STATE_SET_PRESENCE = 13,
	PLDM_STATE_SET_PERFORMANCE = 14,
	PLDM_STATE_SET_CONFIGURATION_STATE = 15,
	PLDM_STATE_SET_CHANGED_CONFIGURATION = 16,
	PLDM_STATE_SET_IDENTIFY_STATE = 17,
	PLDM_STATE_SET_VERSION = 18,
	PLDM_STATE_SET_ALARM_STATE = 19,
	PLDM_STATE_SET_DEVICE_INITIALIZATION = 20,
	PLDM_STATE_SET_THERMAL_TRIP = 21,

	/* Table 2 - Communication State Sets */
	PLDM_STATE_SET_HEARTBEAT = 32,
	PLDM_STATE_SET_LINK_STATE = 33,

	/* Table 3 - General Sensor State Sets */
	PLDM_STATE_SET_SMOKE_STATE = 64,
	PLDM_STATE_SET_HUMIDITY_STATE = 65,
	PLDM_STATE_SET_DOOR_STATE = 66,
	PLDM_STATE_SET_SWITCH_STATE = 67,

	/* Table 4 - Security-Related State Sets */
	PLDM_STATE_SET_LOCK_STATE = 96,
	PLDM_STATE_SET_PHYSICAL_SECURITY = 97,
	PLDM_STATE_SET_DOCK_AUTHORIZATION = 98,
	PLDM_STATE_SET_HW_SECURITY = 99,
	PLDM_STATE_SET_PHYSICAL_COMM_CONNECTION = 100,
	PLDM_STATE_SET_COMM_LEASH_STATUS = 101,
	PLDM_STATE_SET_FOREIGN_NW_DETECTION_STATUS = 102,
	PLDM_STATE_SET_PASSWORD_PROTECTED_ACCESS_SECURITY = 103,
	PLDM_STATE_SET_SECURITY_ACCESS_PRIVILEGE_LEVEL = 104,
	PLDM_STATE_SET_SESSION_AUDIT = 105,

	/* Table 5 - Software-Related State Sets */
	PLDM_STATE_SET_SW_TERMINATION_STATUS = 129,

	/* Table 6 - Redundant Storage Media (RAID) State Sets */
	PLDM_STATE_SET_STORAGE_MEDIA_ACTIVITY = 160,

	/* Table 7 - Boot-Related State Sets */
	PLDM_STATE_SET_BOOT_RESTART_CAUSE = 192,
	PLDM_STATE_SET_BOOT_RESTART_REQUEST = 193,
	PLDM_STATE_SET_ENTITY_BOOT_STATUS = 194,
	PLDM_STATE_SET_BOOT_ERROR_STATUS = 195,
	PLDM_STATE_SET_BOOT_PROGRESS = 196,
	PLDM_STATE_SET_SYS_FIRMWARE_HANG = 197,
	PLDM_STATE_SET_POST_ERRORS = 198,

	/* Table 8 - Monitored System-Related State Sets */
	PLDM_STATE_SET_LOG_FILL_STATUS = 225,
	PLDM_STATE_SET_LOG_FILTER_STATUS = 226,
	PLDM_STATE_SET_LOG_TIMESTAMP_CHANGE = 227,
	PLDM_STATE_SET_INTERRUPT_REQUESTED = 228,
	PLDM_STATE_SET_INTERRUPT_RECEIVED = 229,
	PLDM_STATE_SET_DIAGNOSTIC_INTERRUPT_REQUESTED = 230,
	PLDM_STATE_SET_DIAGNOSTIC_INTERRUPT_RECEIVED = 231,
	PLDM_STATE_SET_IO_CHANNEL_CHECK_NMI_REQUESTED = 232,
	PLDM_STATE_SET_IO_CHANNEL_CHECK_NMI_RECEIVED = 233,
	PLDM_STATE_SET_FATAL_NMI_REQUESTED = 234,
	PLDM_STATE_SET_FATAL_NMI_RECEIVED = 235,
	PLDM_STATE_SET_SOFTWARE_NMI_REQUESTED = 236,
	PLDM_STATE_SET_SOFTWARE_NMI_RECEIVED = 237,
	PLDM_STATE_SET_SMI_REQUESTED = 238,
	PLDM_STATE_SET_SMI_RECEIVED = 238,
	PLDM_STATE_SET_PCI_PERR_REQUESTED = 239,
	PLDM_STATE_SET_PCI_PERR_RECEIVED = 240,
	PLDM_STATE_SET_PCI_SERR_REQUESTED = 241,
	PLDM_STATE_SET_PCI_SERR_RECEIVED = 242,
	PLDM_STATE_SET_BUS_ERROR_STATUS = 243,
	PLDM_STATE_SET_WATCHDOG_STATUS = 244,

	/* Table 9 - Power-Related State Sets */
	PLDM_STATE_SET_POWER_SUPPLY_STATE = 256,
	PLDM_STATE_SET_DEVICE_POWER_STATE = 257,
	PLDM_STATE_SET_ACPI_POWER_STATE = 258,
	PLDM_STATE_SET_BACKUP_POWER_SOURCE = 259,
	PLDM_STATE_SET_SYSTEM_POWER_STATE = 260,
	PLDM_STATE_SET_BATTERY_ACTIVITY = 261,
	PLDM_STATE_SET_BATTERY_STATE = 262,

	/* Table 10 - Processor-Related State Sets */
	PLDM_STATE_SET_PROC_POWER_STATE = 288,
	PLDM_STATE_SET_POWER_PERFORMANCE_STATE = 289,
	PLDM_STATE_SET_PROC_ERROR_STATUS = 290,
	PLDM_STATE_SET_BIST_FAILURE_STATUS = 291,
	PLDM_STATE_SET_IBIST_FAILURE_STATUS = 292,
	PLDM_STATE_SET_PROC_HANG_IN_POST = 293,
	PLDM_STATE_SET_PROC_STARTUP_FAILURE = 294,
	PLDM_STATE_SET_UNCORRECTABLE_CPU_ERROR = 295,
	PLDM_STATE_SET_MACHINE_CHECK_ERROR = 296,
	PLDM_STATE_SET_CORRECTED_MACHINE_CHECK = 297,

	/* Table 11 - Memory-Related State Sets */
	PLDM_STATE_SET_CACHE_STATUS = 320,
	PLDM_STATE_SET_MEMORY_ERROR_STATUS = 321,
	PLDM_STATE_SET_REDUNDANT_MEMORY_ACTIVITY_STATUS = 322,

	/* Table 12 - Storage Device State Sets */
	PLDM_STATE_SET_ERROR_DETECTION_STATUS = 330,
	PLDM_STATE_SET_STUCK_BIT_STATUS = 331,
	PLDM_STATE_SET_SCRUB_STATUS = 332,

	/* Table 13 - Slot/Module State Sets */
	PLDM_STATE_SET_SLOT_OCCUPANCY = 352,
	PLDM_STATE_SET_SLOT_STATE = 353,
};

/* @brief List of states for the Health State state set (ID 1).
 */
enum pldm_state_set_health_state_values {
	PLDM_STATE_SET_HEALTH_STATE_NORMAL = 1,
	PLDM_STATE_SET_HEALTH_STATE_NON_CRITICAL = 2,
	PLDM_STATE_SET_HEALTH_STATE_CRITICAL = 3,
	PLDM_STATE_SET_HEALTH_STATE_FATAL = 4,
	PLDM_STATE_SET_HEALTH_STATE_UPPER_NON_CRITICAL = 5,
	PLDM_STATE_SET_HEALTH_STATE_LOWER_NON_CRITICAL = 6,
	PLDM_STATE_SET_HEALTH_STATE_UPPER_CRITICAL = 7,
	PLDM_STATE_SET_HEALTH_STATE_LOWER_CRITICAL = 8,
	PLDM_STATE_SET_HEALTH_STATE_UPPER_FATAL = 9,
	PLDM_STATE_SET_HEALTH_STATE_LOWER_FATAL = 10,
};

/* @brief List of states for the State Set Availability (ID 2),
 */
enum pldm_state_set_availability_values {
	PLDM_STATE_SET_AVAILABILITY_REBOOTING = 8
};

/* @brief List of states for the Operational Fault status (ID 10).
 */
enum pldm_state_set_operational_fault_status_values {
	PLDM_STATE_SET_OPERATIONAL_FAULT_STATUS_NORMAL = 1,
	PLDM_STATE_SET_OPERATIONAL_FAULT_STATUS_STRESSED = 2,
};

/* @brief List of states for the Operational Stress status (ID 9).
 */
enum pldm_state_set_operational_stress_status_values {
	PLDM_STATE_SET_OPERATIONAL_STRESS_STATUS_NORMAL = 1,
	PLDM_STATE_SET_OPERATIONAL_STRESS_STATUS_STRESSED = 2,
};

/* @brief List of states for Operational Fault status (ID 10).
 */
enum pldm_state_set_operational_fault_status_value {
	PLDM_STATE_SET_OPERATIONAL_NORMAL = 1,
	PLDM_STATE_SET_OPERATIONAL_ERROR = 2,
	PLDM_STATE_SET_OPERATIONAL_NON_RECOVERABLE_ERROR = 3,
};

/* @brief List of states for the Operational Running Status state set (ID 11).
 */
enum pldm_state_set_operational_running_status_values {
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_STARTING = 1,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_STOPPING = 2,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_STOPPED = 3,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_IN_SERVICE = 4,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_ABORTED = 5,
	PLDM_STATE_SET_OPERATIONAL_RUNNING_STATUS_DORMANT = 6
};

/* @brief List of states for the Set Identify state (ID 17).
 */
enum pldm_state_set_identify_state_values {
	PLDM_STATE_SET_IDENTIFY_STATE_UNASSERTED = 1,
	PLDM_STATE_SET_IDENTIFY_STATE_ASSERTED = 2,
};

/* @brief List of states for the Set Thermal Trip state set (ID 21).
 */
enum pldm_state_set_thermal_trip_values {
	PLDM_STATE_SET_THERMAL_TRIP_STATUS_NORMAL = 1,
	PLDM_STATE_SET_THERMAL_TRIP_STATUS_THERMAL_TRIP = 2,
};

/* @brief List of states for the Software-related state set (ID 129).
 */
enum pldm_software_termination_status_values {
	PLDM_SW_TERM_NORMAL = 1,
	PLDM_SW_TERM_SOFTWARE_TERMINATION_DETECTED = 2,
	PLDM_SW_TERM_CRITICAL_STOP_DURING_LOAD_INITIALIZATION = 3,
	PLDM_SW_TERM_RUN_TIME_CRITICAL_STOP = 4,
	PLDM_SW_TERM_GRACEFUL_SHUTDOWN_REQUESTED = 5,
	PLDM_SW_TERM_GRACEFUL_RESTART_REQUESTED = 6,
	PLDM_SW_TERM_GRACEFUL_SHUTDOWN = 7,
	PLDM_SW_TERM_TERMINATION_REQUEST_FAILED = 8,
};

/* @brief List of states for the Boot Restart Cause state set (ID 192).
 */
enum pldm_state_set_boot_restart_cause_values {
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_POWERED_UP = 1,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_HARD_RESET = 2,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_WARM_RESET = 3,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_MANUAL_HARD_RESET = 4,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_MANUAL_WARM_RESET = 5,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_SYSTEM_RESTART = 6,
	PLDM_STATE_SET_BOOT_RESTART_CAUSE_WATCHDOG_TIMEOUT = 7
};

/* @brief List of states for the Boot Progress state set (ID 196).
 */
enum pldm_state_set_boot_progress_state_values {
	PLDM_STATE_SET_BOOT_PROG_STATE_NOT_ACTIVE = 1,
	PLDM_STATE_SET_BOOT_PROG_STATE_COMPLETED = 2,
	PLDM_STATE_SET_BOOT_PROG_STATE_MEM_INITIALIZATION = 3,
	PLDM_STATE_SET_BOOT_PROG_STATE_SEC_PROC_INITIALIZATION = 5,
	PLDM_STATE_SET_BOOT_PROG_STATE_PCI_RESORUCE_CONFIG = 9,
	PLDM_STATE_SET_BOOT_PROG_STATE_OSSTART = 20,
	PLDM_STATE_SET_BOOT_PROG_STATE_STARTING_OP_SYS = 21,
	PLDM_STATE_SET_BOOT_PROG_STATE_BASE_BOARD_INITIALIZATION = 22,
	PLDM_STATE_SET_BOOT_PROG_STATE_PRIMARY_PROC_INITIALIZATION = 26,
};

/* @brief List of states for the System Power State set (ID 260).
 */
enum pldm_state_set_system_power_state_values {
	PLDM_STATE_SET_SYS_POWER_STATE_OFF_SOFT_GRACEFUL = 9
};

/* OEM ranges */
#define PLDM_OEM_STATE_SET_ID_START 32768
#define PLDM_OEM_STATE_SET_ID_END   65535

#ifdef __cplusplus
}
#endif

#endif /* STATE_SET_H */
