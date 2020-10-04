# ifndef COMMON_LANG_IDS_HEADER
# define COMMON_LANG_IDS_HEADER

# include "..\\Params.h"

# define SOFTWARE_REG_KEY			L"SOFTWARE" L"\\" COMPANY L"\\" KEY_PATH L"\\"
# define SETTINGS_KEY				L"Settings" L"\\"

# define INC_VALUE_ID(X)			SETTINGS_ID_BASE+X
# define INC_FLOAT_ID(X)			SETTINGS_ID_BASE+SETTINGS_N_VAR+X
# define INC_STRING_ID(X)			SETTINGS_ID_BASE+SETTINGS_N_VAR+SETTINGS_N_FLOAT+X

# define SETTINGS_ID_BASE			1100

# define SETTINGS_N_VAR				25
# define SETTINGS_N_FLOAT			3
# define SETTINGS_N_STRING			3

// DWord:
# define T_FONT_SIZE				0
# define WINDOW_WIDTH				1
# define WINDOW_HEIGHT				2
# define WIDTH_BORDER				3
# define HEIGHT_BORDER				4
# define WINDOW_Y_POSITION			5
# define N_EDIT_TO_SAVE				6
# define AUTO_PLAY					7
# define PLAY_DELAY					8
# define DEFAULT_SCALE				9
# define AUTO_SCALE					10
# define SHOW_SPLASH				11
# define TEXT_MODE					12
# define BROWSE_MODE				13
# define BW_MODE					14
# define GRAY_MODE					15
# define BROWSE_X					16
# define BROWSE_Y					17
# define DRAW_EXTENTS				18
# define DRAW_RECTS					19
# define DRAW_BULLETS				20
# define DO_GRAY					21
# define I_FONT_SIZE				22
# define MARGIN_COLOUR				23
# define BULLET_COLOUR				24

// Float:
# define HEIGHT_RATIO_RECT			0
# define HEIGHT_RATIO_BROWSE		1
# define BROWSE_SCALE				2

// String:
# define T_FONT_NAME				0
# define I_FONT_NAME				1
# define IMG_D_FILE_EXTN			2

// String Table:
# define IDS_MAIN_WINDOW_CLASS		1051
# define IDS_MAIN_WINDOW_TITLE		1052
# define IDS_EDIT_WINDOW_CLASS		1053
# define IDS_EDIT_WINDOW_TITLE		1054
# define IDS_SPLASH_WINDOW_CLASS	1055
# define IDS_SPLASH_WINDOW_TITLE	1056

# define IDS_W_REG_FAIL				1003
# define IDS_W_CREATE_FAIL			1004
# define IDS_NOTIFICATION			1005
# define IDS_WARNING				1006
# define IDS_ERROR					1007
# define IDS_SAVE_Q					1008
# define IDS_W_UL_FAIL				1009
# define IDS_BM_LOAD_FAIL			1010
# define IDS_THREAD_FAIL			1011

# endif // COMMON_LANG_IDS_HEADER
