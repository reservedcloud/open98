#include "../ntdef.h"


//vbe.c
typedef struct _VBE_STRUCT
{
	ULONG64 Address;
	INT	Width;
	INT	Height;
	INT	Pitch;
} KVBE_STRUCTURE, *PKVBE_STRUCTURE;

VOID
KiDisplayChar(
	CHAR  cChararcter,
	UINT  uiX,
	UINT  uiY,
	UINT  uiColor
);

VOID
KiDisplayString(
	CHAR* pcString,
	UINT  uiX,
	UINT  uiY,
	UINT  uiColor
);

ULONG64
KiReadPixel(
	UINT uiX,
	UINT uiY
);

VOID
KiDrawPixel(
	UINT uiX,
	UINT uiY,
	UINT uiColor
);

VOID
KiDrawFilled(
	UINT uiXStart,
	UINT uiXEnd,
	UINT uiYStart,
	UINT uiYEnd,
	UINT uiColor
);

VOID
KiPrintToScreen(
	PCHAR pcText
);

KVBE_STRUCTURE KiVBEData;

UCHAR
KiDisplayFont[ 4096 ];


//keyboard.c
VOID
KiInitKeyboard(

);

BOOLEAN KiKeyboardUsed;

#define KEY_A 0x1E
#define KEY_B 0x30
#define KEY_C 0x2E
#define KEY_D 0x20
#define KEY_E 0x12
#define KEY_F 0x21
#define KEY_G 0x22
#define KEY_H 0x23
#define KEY_I 0x17
#define KEY_J 0x24
#define KEY_K 0x25
#define KEY_L 0x26
#define KEY_M 0x32
#define KEY_N 0x31
#define KEY_O 0x18
#define KEY_P 0x19
#define KEY_Q 0x10
#define KEY_R 0x13
#define KEY_S 0x1F
#define KEY_T 0x14
#define KEY_U 0x16
#define KEY_V 0x2F
#define KEY_W 0x11
#define KEY_X 0x2D
#define KEY_Y 0x15
#define KEY_Z 0x2C
#define KEY_1 0x02
#define KEY_2 0x03
#define KEY_3 0x04
#define KEY_4 0x05
#define KEY_5 0x06
#define KEY_6 0x07
#define KEY_7 0x08
#define KEY_8 0x09
#define KEY_9 0x0A
#define KEY_0 0x0B
#define KEY_MINUS 0x0C
#define KEY_EQUAL 0x0D
#define KEY_SQUARE_OPEN_BRACKET 0x1A
#define KEY_SQUARE_CLOSE_BRACKET 0x1B
#define KEY_SEMICOLON 0x27
#define KEY_BACKSLASH 0x2B
#define KEY_COMMA 0x33
#define KEY_DOT 0x34
#define KEY_FORESLHASH 0x35
#define KEY_F1 0x3B
#define KEY_F2 0x3C
#define KEY_F3 0x3D
#define KEY_F4 0x3E
#define KEY_F5 0x3F
#define KEY_F6 0x40
#define KEY_F7 0x41
#define KEY_F8 0x42
#define KEY_F9 0x43
#define KEY_F10 0x44
#define KEY_F11 0x85
#define KEY_F12 0x86
#define KEY_BACKSPACE 0x0E
#define KEY_DELETE 0x53
#define KEY_DOWN 0x50
#define KEY_END 0x4F
#define KEY_ENTER 0x1C
#define KEY_ESC 0x01
#define KEY_HOME 0x47
#define KEY_INSERT 0x52
#define KEY_LEFT 0x4B
#define KEY_PAGE_DOWN 0x51
#define KEY_PAGE_UP 0x49
#define KEY_PRINT_SCREEN 0x37
#define KEY_RIGHT 0x4D
#define KEY_SPACE 0x39
#define KEY_TAB 0x0F
#define KEY_UP 0x48
#define KEY_L_SHIFT_P 0x2A
#define KEY_R_SHIFT_P 0x36
#define KEY_L_SHIFT_R 0xAA
#define KEY_R_SHIFT_R 0xB6
#define KEY_CAPS_LOCK 0x3A


//mouse.c

#define PS2Leftbutton 0b00000001
#define PS2Middlebutton 0b00000100
#define PS2Rightbutton 0b00000010
#define PS2XSign 0b00010000
#define PS2YSign 0b00100000
#define PS2XOverflow 0b01000000
#define PS2YOverflow 0b10000000

INT KiMouseState;

VOID
KiInitMouse(

);

VOID
KiHandlePS2Mouse(
	UCHAR data
);


VOID
KiProcessMouse(

);

#define MOUSE_LEFT_CLICK 1
#define MOUSE_MIDDLE_CLICK 2
#define MOUSE_RIGHT_CLICK 3

UCHAR KiMousePacket[ 4 ];


