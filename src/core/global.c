/**
 * Global variables, like IO display size, etc.
 * 
 * structure:
 * 
 * | data segment | text segment | stack segment | 
 * | io display | io keyoard | heap table | heap segment | tmp segment |
*/

#define MEM_SIZE 1024 * 64
#define IO_DISPLAY_SIZE 80
#define IO_DISPLAY_START 0x8000
#define IO_DISPLAY_END IO_DISPLAY_START + IO_DISPLAY_SIZE
#define IO_KEYBOARD_SIZE 1
#define IO_KEYBOARD_START 0x9000
#define IO_KEYBOARD_END IO_KEYBOARD_START + IO_KEYBOARD_SIZE
#define MEM_HEAP_TABLE_START 0x0000
#define MEM_HEAP_TABLE_SIZE 0x0FFF
#define MEM_HEAP_TABLE_END MEM_HEAP_TABLE_START + MEM_HEAP_TABLE_SIZE
#define MEM_HEAP_SEGMENT_START 0x1000
#define MEM_HEAP_SEGMENT_SIZE 0x0FFF
#define MEM_HEAP_SEGMENT_END MEM_HEAP_SEGMENT_START + MEM_HEAP_SEGMENT_SIZE
#define MEM_TMP_SEGMENT_START 0x1000
#define MEM_TMP_SEGMENT_END 0x1FFF

// Keyboard constants
#define KEYBOARD_WAIT_TIME 5

//Control codes

#define CTRL_CODE_BACKSPACE 0x08
#define CTRL_CODE_ENTER 0x0A

#define CTRL_CODE_CTRL 0x11
#define CTRL_CODE_ALT 0x12
#define CTRL_CODE_SHIFT 0x10
#define CTRL_CODE_CAPSLOCK 0x14