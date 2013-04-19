/******************************************************************************

	ui_text.c

	��`�����󥿥ե��`���ƥ����ȹ���

******************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

#define LANG_ENGLISH	            0
#define LANG_JAPANESE	            1
#define LANG_CHINESE_SIMPLIFIED	    2
#define LANG_CHINESE_TRADITIONAL    3
#define LANG_FRENCH                 0
#define LANG_SPANISH                0
#define LANG_GERMAN                 0
#define LANG_ITALIAN                0
#define LANG_DUTCH                  0
#define LANG_PORTUGUESE             0
#define LANG_RUSSIAN                0
#define LANG_KOREAN                 0

enum
{
	EOM = 0,
	LF,

	/* psp/filer.c */
	PLEASE_WAIT,
	COULD_NOT_OPEN_ZIPNAME_DAT,
#ifdef ADHOC
	PLEASE_TURN_ON_THE_WLAN_SWITCH,
	FAILED_TO_LOAD_ADHOC_MODULES,
#endif

	/* psp/sound.c */
	COULD_NOT_RESERVE_AUDIO_CHANNEL_FOR_SOUND,
	COULD_NOT_START_SOUND_THREAD,

	/* psp/ui.c */
	WARNING_BATTERY_IS_LOW_PLEASE_CHARGE_BATTERY,

	LAUNCH_OR_CANCEL,
	CONFIRM_OR_CANCEL,
#ifdef SAVE_STATE
	GAME_OR_MENU,
#endif
	PRESS_ANY_BUTTON,
	START_EMULATION,
#ifdef ADHOC
	START_EMULATION_ADHOC,
#endif
	EXIT_EMULATION,
	RESET_EMULATION,
	NEED_TO_RESTART_EMULATION,
#if (EMU_SYSTEM != NCDZ)
	THIS_GAME_DOESNT_WORK,
	YOU_WONT_BE_ABLE_TO_MAKE_IT_WORK_CORRECTRY,
	DONT_BOTHER,
#endif
	DO_YOU_MAKE_THIS_DIRECTORY_THE_STARTUP_DIRECTORY,
#ifdef PSP_SLIM
	THIS_PROGRAM_REQUIRES_PSP2000,
#endif
#ifdef SAVE_STATE
	START_SAVESTATE,
	START_LOADSTATE,
#endif
#if defined(SAVE_STATE) || defined(COMMAND_LIST)
	COMPLETE,
#endif
#ifdef SAVE_STATE
	DELETE_STATE_FILE,
#endif
#if (EMU_SYSTEM == NCDZ)
	MP3_NOT_FOUND,
	IPL_NOT_FOUND,
	BOOT_NEOCD_BIOS,
	NEOGEO_CDZ_BIOS_NOT_FOUND,
	INVALID_NEOGEO_CDZ_BIOS_FOUND,
	CANNOT_LAUNCH_GAME,
#endif

	HELP_TITLE,
	HELP_NOT_USE,
	PRESS_ANY_BUTTON_TO_RETURN_TO_MENU,
	FILE_BROWSER,
	SCROLL,
	SCROLL_1_PAGE,
	LAUNCH_GAME,
	LAUNCH_GAME_ADHOC,
	EXIT_EMULATOR,
	SHOW_BIOS_SELECT_MENU,
	OPEN_COLOR_SETTINGS_MENU,
	SHOW_THIS_HELP,
	BOOT_BIOS,
	SET_SELECTED_DIRECTORY_AS_STARTUP,
	CHANGE_VALUE,
	SELECT,
	SELECT_SLOT,
	CHANGE_FUNCTION,
	EXECUTE_FUNCTION,
	SELECT_ITEM,
	SELECT_ITEM_CHANGE_VALUE,
	RGB_VALUE_PLUS_5,
	RETURN_TO_FILE_BROWSER,
	RGB_VALUE_MINUS_5,
	RESTORE_ALL_VALUES_TO_DEFAULT,
	SCROLL_SELECT_ITEM,
	OPEN_CLOSE_ITEM_MENU,
	RETURN_TO_MAIN_MENU_GAME,

	/* psp/ui_menu.c */
	ON,
	OFF,
	YES,
	NO,
	ENABLE,
	DISABLE,
	RETURN_TO_MAIN_MENU,

	GAME_CONFIGURATION_MENU,
	RASTER_EFFECTS,
	STRETCH_SCREEN,
	STRETCH1,
	STRETCH2,
	STRETCH3,
	STRETCH4,
#if (EMU_SYSTEM == MVS || EMU_SYSTEM == NCDZ)
	STRETCH5,
#endif
#if (EMU_SYSTEM == CPS1 || EMU_SYSTEM == CPS2)
	ROTATE_SCREEN,
#endif
	VIDEO_SYNC,
	AUTO_FRAMESKIP,
	FRAMESKIP,
	SKIP1,
	SKIP2,
	SKIP3,
	SKIP4,
	SKIP5,
	SKIP6,
	SKIP7,
	SKIP8,
	SKIP9,
	SKIP10,
	SKIP11,
	SHOW_FPS,
	FRAME_LIMIT,
	ENABLE_SOUND,
	SAMPLE_RATE,
	RATE11KHz,
	RATE22KHz,
	RATE44KHz,
	SOUND_VOLUME,
	VOL0,
	VOL10,
	VOL20,
	VOL30,
	VOL40,
	VOL50,
	VOL60,
	VOL70,
	VOL80,
	VOL90,
	VOL100,
	CONTROLLER,
	CONTROLLER1,
	CONTROLLER2,
#if (EMU_SYSTEM == CPS1 || EMU_SYSTEM == CPS2)
	CONTROLLER3,
	CONTROLLER4,
#endif
	PSP_CLOCK,
	CLK222MHz,
	CLK266MHz,
	CLK300MHz,
	CLK333MHz,
#if (EMU_SYSTEM == MVS)
	DEFAULT,
#endif
#if (EMU_SYSTEM == MVS || EMU_SYSTEM == NCDZ)
	MACHINE_REGION,
	REGION_JAPAN,
	REGION_USA,
	REGION_EUROPE,
#endif
#if (EMU_SYSTEM == MVS)
	MACHINE_MODE,
	MODE_AES,
	MODE_MVS,
#endif
#if (EMU_SYSTEM == NCDZ)
	EMULATE_LOAD_SCREEN,
	CDROM_SPEED_LIMIT,
	ENABLE_CDDA,
	CDDA_VOLUME,
#endif

	KEY_CONFIGURATION_MENU,
	NOT_USE,
	PSP_BUTTON_NAME1,
	PSP_BUTTON_NAME2,
	PSP_BUTTON_NAME3,
	PSP_BUTTON_NAME4,
	PSP_BUTTON_NAME5,
	PSP_BUTTON_NAME6,
	PSP_BUTTON_NAME7,
	PSP_BUTTON_NAME8,
	PSP_BUTTON_NAME9,
	PSP_BUTTON_NAME10,
	PSP_BUTTON_NAME11,
	PSP_BUTTON_NAME12,
	SENSITIVITY_LOW,
	SENSITIVITY_NORMAL,
	SENSITIVITY_HIGH,
#if (EMU_SYSTEM == CPS2)
	PLAYER1_START,
	PLAYER2_START,
#endif
	xFRAME,
	xFRAMES,
	INPUT_UP,
	INPUT_DOWN,
	INPUT_LEFT,
	INPUT_RIGHT,
	INPUT_BUTTON1,
	INPUT_BUTTON2,
	INPUT_BUTTON3,
	INPUT_BUTTON4,
#if (EMU_SYSTEM == CPS1 || EMU_SYSTEM == CPS2)
	INPUT_BUTTON5,
	INPUT_BUTTON6,
#endif
	INPUT_START,
	INPUT_COIN,
#if (EMU_SYSTEM != NCDZ)
	INPUT_SERVCOIN,
	INPUT_SERVSWITCH,
#endif
	AUTOFIRE1,
	AUTOFIRE2,
	AUTOFIRE3,
	AUTOFIRE4,
#if (EMU_SYSTEM == CPS1 || EMU_SYSTEM == CPS2)
	AUTOFIRE5,
	AUTOFIRE6,
#endif
	AUTOFIRE_INV,
#if (EMU_SYSTEM == CPS1 || EMU_SYSTEM == CPS2)
	HOTKEY_12,
	HOTKEY_13,
	HOTKEY_14,
	HOTKEY_23,
	HOTKEY_24,
	HOTKEY_34,
	HOTKEY_123,
	HOTKEY_124,
	HOTKEY_134,
	HOTKEY_234,
	HOTKEY_1234,
#else
	HOTKEY_AB,
	HOTKEY_AC,
	HOTKEY_AD,
	HOTKEY_BC,
	HOTKEY_BD,
	HOTKEY_CD,
	HOTKEY_ABC,
	HOTKEY_ABD,
	HOTKEY_ACD,
	HOTKEY_BCD,
	HOTKEY_ABCD,
#endif
#if (EMU_SYSTEM != NCDZ)
	ANALOG_SENS,
#endif
#if (EMU_SYSTEM == CPS1)
	DIAL_LEFT,
	DIAL_RIGHT,
	INPUT_PAUSE,
#endif
#if (EMU_SYSTEM == CPS2)
	PADDLE_LEFT,
	PADDLE_RIGHT,
#endif
#if (EMU_SYSTEM == MVS)
	BIG,
	SMALL,
	DOUBLE_UP,
	START_COLLECT,
	PAYOUT,
	CANCEL,
	BET,
	BET_CANCEL_ALL,
	OPERATOR_MENU,
	CLEAR_CREDIT,
	HOPPER_OUT,
#endif
	SAVE_SCREENSHOT,
	SWITCH_PLAYER,
#if (EMU_SYSTEM == MVS || EMU_SYSTEM == NCDZ)
	BUTTON_LAYOUT,
	LAYOUT_TYPE1,
	LAYOUT_TYPE2,
	LAYOUT_USER,
#endif

	DIP_SWITCH_SETTINGS_MENU,
	THIS_GAME_HAS_NO_DIP_SWITCHES,

	SAVE_LOAD_STATE,
	SLOTx,
	EMPTY,
	LOAD,
	DELETE,
	SAVE,
	PLAY_DATE,
	SAVE_TIME,
	STATE_VERSION,
	FAILD_TO_DELETE_FILEx,

	MAIN_MENU,
	MENU_GAME_CONFIGURATION,
	MENUHELP_GAME_CONFIGURATION,
	MENU_KEY_CONFIGURATION,
	MENUHELP_KEY_CONFIGURATION,
#if (EMU_SYSTEM != NCDZ)
	MENU_DIP_SWITCH_SETTINGS,
	MENUHELP_DIP_SWITCH_SETTINGS,
#endif
	MENU_RESET_EMULATION,
	MENUHELP_RESET_EMULATION,
	MENU_RETURN_TO_BROWSER,
	MENUHELP_RETURN_TO_BROWSER,
	MENU_RETURN_TO_GAME,
	MENUHELP_RETURN_TO_GAME,
	MENU_EXIT_EMULATOR,
	MENUHELP_EXIT_EMULATOR,
#ifdef COMMAND_LIST
	MENU_COMMAND_LIST,
	MENUHELP_COMMAND_LIST,
#endif

#if PSP_VIDEO_32BPP
	COLOR_SETTINGS_MENU,
	BACKGROUND_IMAGE_TYPE,
	BACKGROUND_IMAGE_BLIGHTNESS,
	TITLE_BAR_TEXT,
	SELECTED_TEXT,
	NORMAL_TEXT,
	INFORMATION_MESSAGE_TEXT,
	WARNING_MESSAGE_TEXT,
	FILE_SELECT_BAR_START,
	FILE_SELECT_BAR_END,
	TITLE_BAR_MESSAGE_BOX,
	TITLE_BAR_MESSAGE_BOX_FRAME,
	BACKGROUND,
	RED,
	GREEN,
	BLUE,
	DEFAULT_IMAGE,
	USERS_IMAGE,
	LOGO_PNG_ONLY,
	FILE_SELECT_BAR,
#endif

	_COMMAND_LIST,

	/* psp/mp3.c */
#if (EMU_SYSTEM == NCDZ)
	COULD_NOT_REOPEN_MP3_FILEx,
	MP3_DECODE_ERROR,
	COULD_NOT_RESERVE_AUDIO_CHANNEL_FOR_MP3,
	COULD_NOT_START_MP3_THREAD,
#endif

	/* psp/adhoc.c*/
#ifdef ADHOC
	LOBBY,
	SERVER,
	CLIENT,
	WAITING_FOR_ANOTHER_PSP_TO_JOIN,
	CONNECTING_TO_x,
	CONNECTED,
	DISCONNECTING_FROM_x,
	DISCONNECTED,
	FAILED,
	SELECT_A_SERVER_TO_CONNECT_TO,
	WAITING_FOR_x_TO_ACCEPT_THE_CONNECTION,
	TO_CANCEL_PRESS_CROSS,
	x_HAS_REQUESTED_A_CONNECTION,
	TO_ACCEPT_THE_CONNECTION_PRESS_CIRCLE_TO_CANCEL_PRESS_CIRCLE,
	WAITING_FOR_SYNCHRONIZATION,
#endif

	/* psp/png.c */
	COULD_NOT_ALLOCATE_MEMORY_FOR_PNG,
	COULD_NOT_ENCODE_PNG_IMAGE,
#if PSP_VIDEO_32BPP || (EMU_SYSTEM == NCDZ)
	COULD_NOT_DECODE_PNG_IMAGE,
#endif
	xBIT_COLOR_PNG_IMAGE_NOT_SUPPORTED,

	/* emumain.c */
	FATAL_ERROR,
	SNAPSHOT_SAVED_AS_x_PNG,

#if USE_CACHE
	/* common/cache.c */
	COULD_NOT_OPEN_CACHE_FILE,
	MEMORY_NOT_ENOUGH,
	COULD_NOT_ALLOCATE_CACHE_MEMORY,
	xKB_CACHE_ALLOCATED,
	CACHE_LOAD_ERROR,
	LOADING_CACHE_INFORMATION_DATA,
	UNSUPPORTED_VERSION_OF_CACHE_FILE,
	CURRENT_REQUIRED_VERSION_IS_x,
	PLEASE_REBUILD_CACHE_FILE,
#if (EMU_SYSTEM == CPS2)
	COULD_NOT_OPEN_SPRITE_BLOCK_x,
#elif (EMU_SYSTEM == MVS)
	PCM_CACHE_ENABLED,
#endif
#endif

	/* common/loadrom.c */
	PRESS_ANY_BUTTON2,
	COULD_NOT_ALLOCATE_x_MEMORY,
	CRC32_NOT_CORRECT_x,
	FILE_NOT_FOUND_x,

#ifdef SAVE_STATE
	/* common/state.c */
	COULD_NOT_ALLOCATE_STATE_BUFFER,
	COULD_NOT_CREATE_STATE_FILE,
	COULD_NOT_OPEN_STATE_FILE,
	STATE_SAVING,
	STATE_LOADING,
#if (EMU_SYSTEM == MVS)
	COULD_NOT_RELOAD_BIOS,
#elif (EMU_SYSTEM == NCDZ)
	COULD_NOT_COMPRESS_STATE_DATA,
	COULD_NOT_UNCOMPRESS_STATE_DATA,
#endif
#endif

#ifdef COMMAND_LIST
	/* common/cmdlist.c */
	COMMAND_LIST_FOR_THIS_GAME_NOT_FOUND,
	COMMAND_LIST_TITLE,
	COMMAND_LIST_ITEMS,
	COMMAND_DAT_SIZE_REDUCTION,
	CMDLIST_MESSAGE1,
	CMDLIST_MESSAGE2,
	CMDLIST_MESSAGE3,
	CMDLIST_MESSAGE4,
	CHECKING_COMMAND_DAT_FORMAT,
	UNKNOWN_FORMAT,
	EMPTY_FILE,
	COULD_NOT_ALLOCATE_MEMORY,
	COULD_NOT_RENAME_FILE,
	COULD_NOT_CREATE_OUTPUT_FILE,
	COPYING_x,
	REDUCTION_RESULT,
#endif

	/* emulation core */
	DONE2,
	EXIT_EMULATION2,
	PLEASE_WAIT2,

	/* inptport.c */
	CONTROLLER_PLAYER1,
	CONTROLLER_PLAYERx,
#ifdef ADHOC
	LOST_SYNC,
	PAUSED_BY_x,
	RETURN_TO_GAME,
	DISCONNECT2,
#endif

	/* memintrf.c */
	LOADING,
	LOAD_ROM,
#if (EMU_SYSTEM != NCDZ)
	CHECKING_ROM_INFO,
	THIS_GAME_NOT_SUPPORTED,
	ROM_NOT_FOUND,
	DRIVER_FOR_x_NOT_FOUND,
	ROMSET_x_PARENT_x,
	ROMSET_x,
#endif

#if (EMU_SYSTEM == CPS1)

	/* memintrf.c */
	ROMINFO_NOT_FOUND,
	COULD_NOT_ALLOCATE_MEMORY_0x8000BYTE,

#elif (EMU_SYSTEM == CPS2)

	/* cps2crpt.c */
	DECRYPTING_x,
	DECRYPTING_100,

	/* memintrf.c */
	ROMINFO_NOT_FOUND,

#ifdef PSP_SLIM
	/* vidhrdw.c */
	DECODING_GFX,
#endif

#elif (EMU_SYSTEM == MVS)

	/* biosmenu.c */
	BIOS_SELECT_MENU,
	BIOS_NOT_FOUND,
	SELECT_BIOS_AND_PRESS_CIRCLE_BUTTON,
	ALL_NVRAM_FILES_ARE_REMOVED,

	/* memintrf.c */
	ROMINFO_NOT_FOUND,
	LOADING_BIOS,
	LOADING_DECRYPTED_GFX2_ROM,
	LOADING_DECRYPTED_SOUND1_ROM,
	COULD_NOT_ALLOCATE_MEMORY_FOR_DECRYPT_ROM,
	COULD_NOT_ALLOCATE_MEMORY_FOR_SPRITE_DATA,
	TRY_TO_USE_SPRITE_CACHE,
	CHECKING_BIOS,

#elif (EMU_SYSTEM == NCDZ)

	/* ncdz.c */
	ERROR_WHILE_PROCESSING_IPL_TXT,
	RESET_CAUSED_BY_WATCHDOG_COUNTER,

	/* cdrom.c */
	COULD_NOT_OPEN_FILE,
	COULD_NOT_INSERT_CDROM_STATE_DATA,

	/* vidhrdw.c */
	CDROM_SPEED_LIMIT_OFF,
	CDROM_SPEED_LIMIT_ON,

	/* memintrf.c */
	CHECKING_GAME_ID,

#endif
	MENU_ESPECIAL_DAVEX,
	MENUAYUDA_ESPECIAL_DAVEX,
	
	MENU_MEM_FREE_DAVEX,
	MENUAYUDA_MEM_FREE_DAVEX,
	
	END_OF_TEXT,

	UI_TEXT_MAX
};

#define TEXT(s)		ui_text[s]

extern const char *ui_text[UI_TEXT_MAX];

void ui_text_init(void);
int ui_text_get_language(void);

#endif /* UI_TEXT_H */
