int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
/* mono_repo.c */
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int proc_block_delete(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int free_block_get_used_space(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_length(struct free_block* free_head) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_alloc(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_insert(struct free_block* free_head, int size) ;
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory();
int free_block_insert(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_alloc(struct free_block* free_head, int size) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_length(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_get_used_space(struct free_block* free_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_delete(struct proc_block* proc_head, int tag) ;
void init_memory();
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
int proc_block_delete(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int free_block_get_used_space(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_length(struct free_block* free_head) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_alloc(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_insert(struct free_block* free_head, int size) ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
int free_block_insert(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_alloc(struct free_block* free_head, int size) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_length(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_get_used_space(struct free_block* free_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_delete(struct proc_block* proc_head, int tag) ;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
/* mono_repo.c */
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char *);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
/* mono_repo.c */
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
/* mono_repo.c */
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void save_memory(char* filename, int len);
int set_fontmap(char* filename, int len);
void retrieve_screen();
void save_screen();
int focus_info_panel();
void clear_screen();
int display_down();
int display_up();
void write_face(char font[128][16]);
void write_char_last_line(char c);
int write_char_at(char c, int line, int col);
int write_char(char c);
int write_zero_line();
int write_zero_line_at(int line);
int write_string_at_col(char* msg, int len, int line, int col);
void get_cursor_pos(int* vals);
int set_cursor_pos(int line, int col);
int write_string_at(char* msg, int len, int line, int col);
int write_string(char* msg, int len);
void init_memory();
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
void init_memory();
int write_string(char* msg, int len);
int write_string_at(char* msg, int len, int line, int col);
int set_cursor_pos(int line, int col);
void get_cursor_pos(int* vals);
int write_string_at_col(char* msg, int len, int line, int col);
int write_zero_line_at(int line);
int write_zero_line();
int write_char(char c);
int write_char_at(char c, int line, int col);
void write_char_last_line(char c);
void write_face(char font[128][16]);
int display_up();
int display_down();
void clear_screen();
int focus_info_panel();
void save_screen();
void retrieve_screen();
int set_fontmap(char* filename, int len);
void save_memory(char* filename, int len);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory()
{;
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int set_cursor_pos(int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
int write_zero_line_at(int line)
{;
int write_zero_line()
{;
int write_char(char c)
{;
int write_char_at(char c, int line, int col)
{;
void write_char_last_line(char c)
{;
void write_face(char font[128][16])
{;
int display_up()
{;
int display_down()
{;
void clear_screen()
{;
int focus_info_panel()
{;
void save_screen()
{;
void retrieve_screen()
{;
int set_fontmap(char* filename, int len)
{;
void save_memory(char* filename, int len)
{;
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
void init_memory()
{;
void init_memory()
{;
int write_string(char* msg, int len)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int set_cursor_pos(int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
int write_zero_line_at(int line)
{;
int write_zero_line()
{;
int write_char(char c)
{;
int write_char_at(char c, int line, int col)
{;
void write_char_last_line(char c)
{;
void write_face(char font[128][16])
{;
int display_up()
{;
int display_down()
{;
void clear_screen()
{;
int focus_info_panel()
{;
void save_screen()
{;
void retrieve_screen()
{;
int set_fontmap(char* filename, int len)
{;
void save_memory(char* filename, int len)
{;
void init_memory()
{;
int write_string(char* msg, int len)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int set_cursor_pos(int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
int write_zero_line_at(int line)
{;
int write_zero_line()
{;
int write_char(char c)
{;
int write_char_at(char c, int line, int col)
{;
void write_char_last_line(char c)
{;
void write_face(char font[128][16])
{;
int display_up()
{;
int display_down()
{;
void clear_screen()
{;
int focus_info_panel()
{;
void save_screen()
{;
void retrieve_screen()
{;
int set_fontmap(char* filename, int len)
{;
void save_memory(char* filename, int len)
{;
void init_memory()
{;
int write_string(char* msg, int len)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int set_cursor_pos(int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
int write_zero_line_at(int line)
{;
int write_zero_line()
{;
int write_char(char c)
{;
int write_char_at(char c, int line, int col)
{;
void write_char_last_line(char c)
{;
void write_face(char font[128][16])
{;
int display_up()
{;
int display_down()
{;
void clear_screen()
{;
int focus_info_panel()
{;
void save_screen()
{;
void retrieve_screen()
{;
int set_fontmap(char* filename, int len)
{;
void save_memory(char* filename, int len)
{;
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory();
int free_block_insert(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_alloc(struct free_block* free_head, int size);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_length(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_get_used_space(struct free_block* free_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_delete(struct proc_block* proc_head, int tag);
void init_memory();
void __load_char_as_bits(char c, char* out);
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();
void mclose();
void os_start();
void terminal();
void display_test();
int main();
int write_string(char* msg, int len)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int set_cursor_pos(int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
int write_zero_line_at(int line)
{;
int write_zero_line()
{;
int write_char(char c)
{;
int write_char_at(char c, int line, int col)
{;
void write_char_last_line(char c)
{;
void write_face(char font[128][16])
{;
int display_up()
{;
int display_down()
{;
void clear_screen()
{;
int focus_info_panel()
{;
void save_screen()
{;
void retrieve_screen()
{;
int set_fontmap(char* filename, int len)
{;
void save_memory(char* filename, int len)
{;
void keyboard_init();
char keyboard_get_input();
void convert_keyinput_to_string(char input, char* out);
char manipulate_input(char c);
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int minimax(char board[3][3], int depth, int isMaximizing);
void computerMove();
int main();
void initializeBoard();
void printBoard();
int isBoardFull();
int isGameOver(char player);
int makeMove(int row, int col, char player);
int computerMove();
int main();
void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();
void print_map(struct Map* map);
void set_seed(int seed);
int rand();
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len)
;
int set_fontmap(char* filename, int len)
;
void retrieve_screen()
;
void save_screen()
;
int focus_info_panel()
;
void clear_screen()
;
int display_down()
;
int display_up()
;
void write_face(char font[128][16])
;
void write_char_last_line(char c)
;
int write_char_at(char c, int line, int col)
;
int write_char(char c)
;
int write_zero_line()
;
int write_zero_line_at(int line)
;
int write_string_at_col(char* msg, int len, int line, int col)
;
void get_cursor_pos(int* vals)
;
int set_cursor_pos(int line, int col)
;
int write_string_at(char* msg, int len, int line, int col)
;
int write_string(char* msg, int len)
;
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory()
;
int proc_block_delete(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int free_block_get_used_space(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_length(struct free_block* free_head) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_alloc(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_insert(struct free_block* free_head, int size) ;
int rand() ;
void set_seed(int seed) ;
void print_map(struct Map* map) ;
int map_capacity() ;
int map_size(struct Map* map) ;
int  map_delete_at(struct Map* map, int index) ;
int map_find_at(struct Map* map, int index) ;
int map_insert_at(struct Map* map, int index, int value) ;
void map_init(struct Map* map) ;
int main() ;
int computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
int main() ;
void computerMove() ;
int makeMove(int row, int col, char player) ;
int isGameOver(char player) ;
int isBoardFull() ;
void printBoard() ;
void initializeBoard() ;
char manipulate_input(char c) ;
void convert_keyinput_to_string(char input, char* out) ;
char keyboard_get_input() ;
void keyboard_init() ;
void save_memory(char* filename, int len)
;
int set_fontmap(char* filename, int len)
;
void retrieve_screen()
;
void save_screen()
;
int focus_info_panel()
;
void clear_screen()
;
int display_down()
;
int display_up()
;
void write_face(char font[128][16])
;
void write_char_last_line(char c)
;
int write_char_at(char c, int line, int col)
;
int write_char(char c)
;
int write_zero_line()
;
int write_zero_line_at(int line)
;
int write_string_at_col(char* msg, int len, int line, int col)
;
void get_cursor_pos(int* vals)
;
int set_cursor_pos(int line, int col)
;
int write_string_at(char* msg, int len, int line, int col)
;
int write_string(char* msg, int len)
;
int main() ;
void display_test() ;
void terminal() ;
void os_start() ;
void mclose() ;
void minit() ;
void mwrite(char c, int addr) ;
char mread_char(int addr) ;
void mread(int addr, char* out) ;
void __load_char_as_bits(char c, char* out) ;
void init_memory()
;
int free_block_insert(struct free_block* free_head, int size) ;
void free_block_delete(struct free_block* free_head, int tag) ;
int free_block_alloc(struct free_block* free_head, int size) ;
int free_block_dealloc(struct free_block* free_head, int tag, int size) ;
int free_block_length(struct free_block* free_head) ;
int free_block_get_free_space(struct free_block* free_head) ;
int free_block_get_used_space(struct free_block* free_head) ;
int proc_block_init(struct proc_block* proc_head, int tag) ;
int proc_block_insert(struct proc_block* proc_head) ;
int proc_block_delete(struct proc_block* proc_head, int tag) ;
void init_memory()
;
void __load_char_as_bits(char c, char* out) ;
void mread(int addr, char* out) ;
char mread_char(int addr) ;
void mwrite(char c, int addr) ;
void minit() ;
void mclose() ;
void os_start() ;
void terminal() ;
void display_test() ;
int main() ;
int write_string(char* msg, int len)
;
int write_string_at(char* msg, int len, int line, int col)
;
int set_cursor_pos(int line, int col)
;
void get_cursor_pos(int* vals)
;
int write_string_at_col(char* msg, int len, int line, int col)
;
int write_zero_line_at(int line)
;
int write_zero_line()
;
int write_char(char c)
;
int write_char_at(char c, int line, int col)
;
void write_char_last_line(char c)
;
void write_face(char font[128][16])
;
int display_up()
;
int display_down()
;
void clear_screen()
;
int focus_info_panel()
;
void save_screen()
;
void retrieve_screen()
;
int set_fontmap(char* filename, int len)
;
void save_memory(char* filename, int len)
;
void keyboard_init() ;
char keyboard_get_input() ;
void convert_keyinput_to_string(char input, char* out) ;
char manipulate_input(char c) ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int minimax(char board[3][3], int depth, int isMaximizing) ;
void computerMove() ;
int main() ;
void initializeBoard() ;
void printBoard() ;
int isBoardFull() ;
int isGameOver(char player) ;
int makeMove(int row, int col, char player) ;
int computerMove() ;
int main() ;
void map_init(struct Map* map) ;
int map_insert_at(struct Map* map, int index, int value) ;
int map_find_at(struct Map* map, int index) ;
int  map_delete_at(struct Map* map, int index) ;
int map_size(struct Map* map) ;
int map_capacity() ;
void print_map(struct Map* map) ;
void set_seed(int seed) ;
int rand() ;
int rand();
void set_seed(int seed);
void print_map(struct Map* map);
int map_capacity();
int map_size(struct Map* map);
int  map_delete_at(struct Map* map, int index);
int map_find_at(struct Map* map, int index);
int map_insert_at(struct Map* map, int index, int value);
void map_init(struct Map* map);
int main();
int computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int minimax(char board[3][3], int depth, int isMaximizing);
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
int main();
void computerMove();
int makeMove(int row, int col, char player);
int isGameOver(char player);
int isBoardFull();
void printBoard();
void initializeBoard();
char manipulate_input(char c);
void convert_keyinput_to_string(char input, char* out);
char keyboard_get_input();
void keyboard_init();
void save_memory(char* filename, int len)
{;
int set_fontmap(char* filename, int len)
{;
void retrieve_screen()
{;
void save_screen()
{;
int focus_info_panel()
{;
void clear_screen()
{;
int display_down()
{;
int display_up()
{;
void write_face(char font[128][16])
{;
void write_char_last_line(char c)
{;
int write_char_at(char c, int line, int col)
{;
int write_char(char c)
{;
int write_zero_line()
{;
int write_zero_line_at(int line)
{;
int write_string_at_col(char* msg, int len, int line, int col)
{;
void get_cursor_pos(int* vals)
{;
int set_cursor_pos(int line, int col)
{;
int write_string_at(char* msg, int len, int line, int col)
{;
int write_string(char* msg, int len)
{;
int main();
void display_test();
void terminal();
void os_start();
void mclose();
void minit();
void mwrite(char c, int addr);
char mread_char(int addr);
void mread(int addr, char* out);
void __load_char_as_bits(char c, char* out);
void init_memory()
{;
int proc_block_delete(struct proc_block* proc_head, int tag);
int proc_block_insert(struct proc_block* proc_head);
int proc_block_init(struct proc_block* proc_head, int tag);
int free_block_get_used_space(struct free_block* free_head);
int free_block_get_free_space(struct free_block* free_head);
int free_block_length(struct free_block* free_head);
int free_block_dealloc(struct free_block* free_head, int tag, int size);
int free_block_alloc(struct free_block* free_head, int size);
void free_block_delete(struct free_block* free_head, int tag);
int free_block_insert(struct free_block* free_head, int size);

/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """""""""MEMORY_SIZE""""""""" 1024 * 256
#define """""""""OS_SIZE""""""""" 1024 * 100
#define """""""""OS_START""""""""" 0
#define """""""""OS_END""""""""" """""""""OS_START""""""""" + """""""""OS_SIZE"""""""""
#define """""""""STACK_SIZE""""""""" 1024 * 10
#define """""""""STACK_START""""""""" """""""""OS_END"""""""""
#define """""""""STACK_END""""""""" """""""""STACK_START""""""""" + """""""""STACK_SIZE"""""""""
#define """""""""HEAP_SIZE""""""""" 1024 * 50
#define """""""""HEAP_START""""""""" """""""""STACK_END"""""""""
#define """""""""HEAP_END""""""""" """""""""HEAP_START""""""""" + """""""""HEAP_SIZE"""""""""
#define """""""""IO_DISPLAY_SIZE""""""""" 1024 * 64
#define """""""""IO_DISPLAY_START""""""""" """""""""HEAP_END"""""""""
#define """""""""IO_DISPLAY_END""""""""" """""""""IO_DISPLAY_START""""""""" + """""""""IO_DISPLAY_SIZE"""""""""
#define """""""""IO_KEYBOARD_SIZE""""""""" 1

#define """""""""IO_KEYBOARD_START""""""""" """""""""IO_DISPLAY_END"""""""""
// seekto=229376 in memory.txt

#define """""""""IO_KEYBOARD_END""""""""" """""""""IO_KEYBOARD_START""""""""" + """""""""IO_KEYBOARD_SIZE"""""""""
#define """""""""FONTMAP_SIZE""""""""" 1024 * 2
#define """""""""FONTMAP_START""""""""" """""""""IO_KEYBOARD_END"""""""""
#define """""""""FONTMAP_END""""""""" """""""""FONTMAP_START""""""""" + """""""""FONTMAP_SIZE"""""""""
#define """""""""TEMP_SIZE""""""""" 1024 * 38
#define """""""""TEMP_START""""""""" """""""""FONTMAP_END"""""""""
#define """""""""TEMP_END""""""""" """""""""TEMP_START""""""""" + """""""""TEMP_SIZE"""""""""

// Keyboard constants
#define """""""""KEYBOARD_WAIT_TIME""""""""" 5

//Control codes

#define """""""""CTRL_CODE_BACKSPACE""""""""" 0x08
#define """""""""CTRL_CODE_ENTER""""""""" 0x0A

#define """""""""CTRL_CODE_CTRL""""""""" 0x11
#define """""""""CTRL_CODE_ALT""""""""" 0x12
#define """""""""CTRL_CODE_SHIFT""""""""" 0x10
#define """""""""CTRL_CODE_CAPSLOCK""""""""" 0x14
#define """""""""CTRL_CODE_BACKSPACE""""""""" 0x08
/**
 * Initialize the kernel.
*/

#ifndef """""""""INIT_H"""""""""
#define """""""""INIT_H"""""""""








void init_memory()
{
    for (int i = 0; i < """""""""MEMORY_SIZE"""""""""; i++)
    {
        mwrite(0, i);
    }
}


#endif











"""""""""FILE"""""""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """""""""MEMORY_SIZE""""""""");
    fseek(fp, addr * 9, """""""""SEEK_SET""""""""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """""""""MEMORY_SIZE""""""""");  // check if addr is valid
    fseek(fp, addr * 9, """""""""SEEK_SET""""""""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """""""""NULL""""""""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """""""""MEMORY_SIZE""""""""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """""""""MEMORY_H"""""""""
#define """""""""MEMORY_H"""""""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory["""""""""MEMORY_SIZE"""""""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """""""""MEMORY_H"""""""""
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """""""""OS_H"""""""""
#define """""""""OS_H"""""""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """""""""RISC""""""""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char("""""""""CTRL_CODE_BACKSPACE""""""""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif





/**
 * 1024 X 1024 bits
 *
 * 128 ("""""""""CHARS""""""""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """""""""IO_DISPLAY_START""""""""" = 0
 * display_start = 0
 * """""""""IO_DISPLAY_SIZE""""""""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """""""""ROW_CHAR_SIZE""""""""" 128
#define """""""""COLUMN_CHAR_SIZE""""""""" 64
#define """""""""SCREEN_LOCK""""""""" 0x00
#define """""""""MUL_CONS""""""""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """""""""LINE""""""""" = 0;   // current line (ROW)
int """""""""COLUMN""""""""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """""""""ROW_CHAR_SIZE""""""""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """""""""COLUMN_CHAR_SIZE""""""""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
        return 1;
    if (col < 0 || col >= """""""""ROW_CHAR_SIZE""""""""")
        return 1;

    """""""""LINE""""""""" = line;
    """""""""COLUMN""""""""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """""""""LINE""""""""";
    vals[1] = """""""""COLUMN""""""""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        if (line >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            return 1;
        if (col >= """""""""ROW_CHAR_SIZE""""""""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """""""""ROW_CHAR_SIZE""""""""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        if (line < 0 || line >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            return 1;

        int A = """""""""IO_DISPLAY_START""""""""" + """""""""ROW_CHAR_SIZE""""""""" * line;
        for (int i = 0; i < """""""""ROW_CHAR_SIZE""""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int A = """""""""IO_DISPLAY_START""""""""" + """""""""ROW_CHAR_SIZE""""""""" * """""""""LINE""""""""";
        for (int i = 0; i < """""""""ROW_CHAR_SIZE""""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {

        if (c == '\n')
        {
            """""""""COLUMN""""""""" = 0;
            """""""""LINE""""""""" += 8;
            if ("""""""""LINE""""""""" == 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            {
                """""""""LINE""""""""" = 0;
                """""""""COLUMN""""""""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """""""""COLUMN""""""""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """""""""LINE""""""""" += 8;
            if ("""""""""LINE""""""""" >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            {
                """""""""LINE""""""""" = 0;
                """""""""COLUMN""""""""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """""""""COLUMN""""""""" += 4;
            if ("""""""""COLUMN""""""""" >= """""""""ROW_CHAR_SIZE""""""""")
            {
                """""""""COLUMN""""""""" = 0;
                """""""""LINE""""""""" += 8;
                if ("""""""""LINE""""""""" >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
                {
                    """""""""LINE""""""""" = 0;
                    """""""""COLUMN""""""""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """""""""CTRL_CODE_BACKSPACE""""""""")
        {
            if ("""""""""COLUMN""""""""" == 0)
            {
                if ("""""""""LINE""""""""" == 0)
                {
                    return 0;
                }
                else
                {
                    """""""""COLUMN""""""""" = """""""""ROW_CHAR_SIZE""""""""" - 1;
                    """""""""LINE""""""""" -= 8;
                }
            }
            else
            {
                """""""""COLUMN"""""""""--;
            }

            int A = """""""""IO_DISPLAY_START""""""""" + """""""""ROW_CHAR_SIZE""""""""" * """""""""LINE""""""""" + """""""""COLUMN""""""""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """""""""ROW_CHAR_SIZE""""""""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """""""""IO_DISPLAY_START""""""""" + """""""""ROW_CHAR_SIZE""""""""" * """""""""LINE""""""""" + """""""""COLUMN"""""""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """""""""ROW_CHAR_SIZE""""""""" * i);
            }

            """""""""COLUMN"""""""""++;
            if ("""""""""COLUMN""""""""" == """""""""ROW_CHAR_SIZE""""""""")
            { // if the row is full
                """""""""COLUMN""""""""" = 0;
                """""""""LINE""""""""" += 8;
                return 0;
            }

            if ("""""""""LINE""""""""" == 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            { // if the screen is full
                """""""""LINE""""""""" = 0;
                """""""""COLUMN""""""""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {

        if (line < 0 || line >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
            return 1;
        if (col < 0 || col >= """""""""ROW_CHAR_SIZE""""""""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """""""""IO_DISPLAY_START""""""""" + """""""""ROW_CHAR_SIZE""""""""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """""""""ROW_CHAR_SIZE""""""""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int A = """""""""IO_DISPLAY_START""""""""" + ("""""""""COLUMN_CHAR_SIZE""""""""" - 1) * 8 * """""""""ROW_CHAR_SIZE""""""""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {

        """""""""LINE""""""""" += 8;
        """""""""COLUMN""""""""" = 0;

        int A = """""""""IO_DISPLAY_START""""""""" + """""""""LINE""""""""" * """""""""ROW_CHAR_SIZE""""""""" + """""""""COLUMN""""""""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """""""""ROW_CHAR_SIZE""""""""" + j);
            }
        }

        """""""""LINE""""""""" += 128;
        """""""""COLUMN""""""""" = 0;

        if ("""""""""LINE""""""""" >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
        {
            """""""""LINE""""""""" = 0;
            """""""""COLUMN""""""""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int A = """""""""IO_DISPLAY_START""""""""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """""""""IO_DISPLAY_SIZE""""""""" - """""""""ROW_CHAR_SIZE"""""""""; addr++) {
                char temp = mread_char(A + addr + """""""""ROW_CHAR_SIZE""""""""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """""""""ROW_CHAR_SIZE""""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""""""LINE""""""""" -= 8;
        if ("""""""""LINE""""""""" < 0)
        {
            """""""""LINE""""""""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int A = """""""""IO_DISPLAY_START""""""""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """""""""IO_DISPLAY_SIZE""""""""" - """""""""ROW_CHAR_SIZE"""""""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """""""""ROW_CHAR_SIZE""""""""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """""""""ROW_CHAR_SIZE""""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""""""LINE""""""""" += 8;
        if ("""""""""LINE""""""""" >= 8 * """""""""COLUMN_CHAR_SIZE""""""""")
        {
            """""""""LINE""""""""" = 8 * """""""""COLUMN_CHAR_SIZE""""""""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        int A = """""""""IO_DISPLAY_START""""""""" + """""""""IO_DISPLAY_SIZE""""""""" - 1;
        for (int i = A; i >= """""""""IO_DISPLAY_START"""""""""; i--)
        {
            mwrite(0, i);
        }

        """""""""LINE""""""""" = 0;
        """""""""COLUMN""""""""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if ("""""""""SCREEN_LOCK""""""""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """""""""IO_DISPLAY_START""""""""";
    int D = """""""""TEMP_START""""""""";

    for (int i = 0; i < """""""""IO_DISPLAY_SIZE"""""""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """""""""IO_DISPLAY_START""""""""";
    int D = """""""""TEMP_START""""""""";

    for (int i = 0; i < """""""""IO_DISPLAY_SIZE"""""""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """""""""FILE"""""""""* file = fopen(filename, "r");
    if (file == """""""""NULL""""""""")
    {
        return 1;
    }

    // """""""""TODO""""""""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """""""""FILE"""""""""* file = fopen(filename, "w");
    for (int i = 0; i < """""""""MEMORY_SIZE"""""""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """""""""KEYBOARD_DRIVER_H"""""""""
#define """""""""KEYBOARD_DRIVER_H"""""""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """""""""IO_KEYBOARD_START""""""""";
    int end = """""""""IO_KEYBOARD_START""""""""" + """""""""IO_KEYBOARD_SIZE""""""""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """""""""IO_KEYBOARD_START""""""""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char("""""""""IO_KEYBOARD_START""""""""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """""""""IO_KEYBOARD_START""""""""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """""""""CTRL_CODE_ENTER""""""""": {
        // """""""""ENTR"""""""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """""""""CTRL_CODE_ALT""""""""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """""""""CTRL_CODE_SHIFT""""""""": {
        // """""""""SHFT"""""""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """""""""KEYBOARD_DRIVER_H"""""""""




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time("""""""""NULL"""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time("""""""""NULL"""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time("""""""""NULL"""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """""""""_INTERNAL_MAP_SIZE""""""""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""""""_INTERNAL_MAP_SIZE""""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """""""""_INTERNAL_MAP_SIZE""""""""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""""""_INTERNAL_MAP_SIZE""""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """""""""_INTERNAL_MAP_SIZE""""""""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """""""""_INTERNAL_MAP_SIZE"""""""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
#ifndef """""""""INTERNAL_MAP"""""""""
#define """""""""INTERNAL_MAP"""""""""

#define """""""""_INTERNAL_MAP_SIZE""""""""" 30

struct Map {
    int _map["""""""""_INTERNAL_MAP_SIZE"""""""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
#ifndef """""""""RAND_GEN_H"""""""""
#define """""""""RAND_GEN_H"""""""""



void set_seed(int seed);
int rand(void);

#endif

/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """"""""MEMORY_SIZE"""""""" 1024 * 256
#define """"""""OS_SIZE"""""""" 1024 * 100
#define """"""""OS_START"""""""" 0
#define """"""""OS_END"""""""" """"""""OS_START"""""""" + """"""""OS_SIZE""""""""
#define """"""""STACK_SIZE"""""""" 1024 * 10
#define """"""""STACK_START"""""""" """"""""OS_END""""""""
#define """"""""STACK_END"""""""" """"""""STACK_START"""""""" + """"""""STACK_SIZE""""""""
#define """"""""HEAP_SIZE"""""""" 1024 * 50
#define """"""""HEAP_START"""""""" """"""""STACK_END""""""""
#define """"""""HEAP_END"""""""" """"""""HEAP_START"""""""" + """"""""HEAP_SIZE""""""""
#define """"""""IO_DISPLAY_SIZE"""""""" 1024 * 64
#define """"""""IO_DISPLAY_START"""""""" """"""""HEAP_END""""""""
#define """"""""IO_DISPLAY_END"""""""" """"""""IO_DISPLAY_START"""""""" + """"""""IO_DISPLAY_SIZE""""""""
#define """"""""IO_KEYBOARD_SIZE"""""""" 1

#define """"""""IO_KEYBOARD_START"""""""" """"""""IO_DISPLAY_END""""""""
// seekto=229376 in memory.txt

#define """"""""IO_KEYBOARD_END"""""""" """"""""IO_KEYBOARD_START"""""""" + """"""""IO_KEYBOARD_SIZE""""""""
#define """"""""FONTMAP_SIZE"""""""" 1024 * 2
#define """"""""FONTMAP_START"""""""" """"""""IO_KEYBOARD_END""""""""
#define """"""""FONTMAP_END"""""""" """"""""FONTMAP_START"""""""" + """"""""FONTMAP_SIZE""""""""
#define """"""""TEMP_SIZE"""""""" 1024 * 38
#define """"""""TEMP_START"""""""" """"""""FONTMAP_END""""""""
#define """"""""TEMP_END"""""""" """"""""TEMP_START"""""""" + """"""""TEMP_SIZE""""""""

// Keyboard constants
#define """"""""KEYBOARD_WAIT_TIME"""""""" 5

//Control codes

#define """"""""CTRL_CODE_BACKSPACE"""""""" 0x08
#define """"""""CTRL_CODE_ENTER"""""""" 0x0A

#define """"""""CTRL_CODE_CTRL"""""""" 0x11
#define """"""""CTRL_CODE_ALT"""""""" 0x12
#define """"""""CTRL_CODE_SHIFT"""""""" 0x10
#define """"""""CTRL_CODE_CAPSLOCK"""""""" 0x14
#define """"""""CTRL_CODE_BACKSPACE"""""""" 0x08
/**
 * Initialize the kernel.
*/

#ifndef """"""""INIT_H""""""""
#define """"""""INIT_H""""""""








void init_memory()
{
    for (int i = 0; i < """"""""MEMORY_SIZE""""""""; i++)
    {
        mwrite(0, i);
    }
}


#endif











""""""""FILE""""""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """"""""MEMORY_SIZE"""""""");
    fseek(fp, addr * 9, """"""""SEEK_SET"""""""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """"""""MEMORY_SIZE"""""""");  // check if addr is valid
    fseek(fp, addr * 9, """"""""SEEK_SET"""""""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """"""""NULL"""""""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """"""""MEMORY_SIZE"""""""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """"""""MEMORY_H""""""""
#define """"""""MEMORY_H""""""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory[""""""""MEMORY_SIZE""""""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """"""""MEMORY_H""""""""
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """"""""OS_H""""""""
#define """"""""OS_H""""""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """"""""RISC"""""""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char(""""""""CTRL_CODE_BACKSPACE"""""""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif





/**
 * 1024 X 1024 bits
 *
 * 128 (""""""""CHARS"""""""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """"""""IO_DISPLAY_START"""""""" = 0
 * display_start = 0
 * """"""""IO_DISPLAY_SIZE"""""""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """"""""ROW_CHAR_SIZE"""""""" 128
#define """"""""COLUMN_CHAR_SIZE"""""""" 64
#define """"""""SCREEN_LOCK"""""""" 0x00
#define """"""""MUL_CONS"""""""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """"""""LINE"""""""" = 0;   // current line (ROW)
int """"""""COLUMN"""""""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """"""""ROW_CHAR_SIZE"""""""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """"""""COLUMN_CHAR_SIZE"""""""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
        return 1;
    if (col < 0 || col >= """"""""ROW_CHAR_SIZE"""""""")
        return 1;

    """"""""LINE"""""""" = line;
    """"""""COLUMN"""""""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """"""""LINE"""""""";
    vals[1] = """"""""COLUMN"""""""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        if (line >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            return 1;
        if (col >= """"""""ROW_CHAR_SIZE"""""""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """"""""ROW_CHAR_SIZE"""""""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        if (line < 0 || line >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            return 1;

        int A = """"""""IO_DISPLAY_START"""""""" + """"""""ROW_CHAR_SIZE"""""""" * line;
        for (int i = 0; i < """"""""ROW_CHAR_SIZE"""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int A = """"""""IO_DISPLAY_START"""""""" + """"""""ROW_CHAR_SIZE"""""""" * """"""""LINE"""""""";
        for (int i = 0; i < """"""""ROW_CHAR_SIZE"""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {

        if (c == '\n')
        {
            """"""""COLUMN"""""""" = 0;
            """"""""LINE"""""""" += 8;
            if (""""""""LINE"""""""" == 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            {
                """"""""LINE"""""""" = 0;
                """"""""COLUMN"""""""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """"""""COLUMN"""""""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """"""""LINE"""""""" += 8;
            if (""""""""LINE"""""""" >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            {
                """"""""LINE"""""""" = 0;
                """"""""COLUMN"""""""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """"""""COLUMN"""""""" += 4;
            if (""""""""COLUMN"""""""" >= """"""""ROW_CHAR_SIZE"""""""")
            {
                """"""""COLUMN"""""""" = 0;
                """"""""LINE"""""""" += 8;
                if (""""""""LINE"""""""" >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
                {
                    """"""""LINE"""""""" = 0;
                    """"""""COLUMN"""""""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """"""""CTRL_CODE_BACKSPACE"""""""")
        {
            if (""""""""COLUMN"""""""" == 0)
            {
                if (""""""""LINE"""""""" == 0)
                {
                    return 0;
                }
                else
                {
                    """"""""COLUMN"""""""" = """"""""ROW_CHAR_SIZE"""""""" - 1;
                    """"""""LINE"""""""" -= 8;
                }
            }
            else
            {
                """"""""COLUMN""""""""--;
            }

            int A = """"""""IO_DISPLAY_START"""""""" + """"""""ROW_CHAR_SIZE"""""""" * """"""""LINE"""""""" + """"""""COLUMN"""""""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """"""""ROW_CHAR_SIZE"""""""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """"""""IO_DISPLAY_START"""""""" + """"""""ROW_CHAR_SIZE"""""""" * """"""""LINE"""""""" + """"""""COLUMN""""""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """"""""ROW_CHAR_SIZE"""""""" * i);
            }

            """"""""COLUMN""""""""++;
            if (""""""""COLUMN"""""""" == """"""""ROW_CHAR_SIZE"""""""")
            { // if the row is full
                """"""""COLUMN"""""""" = 0;
                """"""""LINE"""""""" += 8;
                return 0;
            }

            if (""""""""LINE"""""""" == 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            { // if the screen is full
                """"""""LINE"""""""" = 0;
                """"""""COLUMN"""""""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {

        if (line < 0 || line >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
            return 1;
        if (col < 0 || col >= """"""""ROW_CHAR_SIZE"""""""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """"""""IO_DISPLAY_START"""""""" + """"""""ROW_CHAR_SIZE"""""""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """"""""ROW_CHAR_SIZE"""""""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int A = """"""""IO_DISPLAY_START"""""""" + (""""""""COLUMN_CHAR_SIZE"""""""" - 1) * 8 * """"""""ROW_CHAR_SIZE"""""""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {

        """"""""LINE"""""""" += 8;
        """"""""COLUMN"""""""" = 0;

        int A = """"""""IO_DISPLAY_START"""""""" + """"""""LINE"""""""" * """"""""ROW_CHAR_SIZE"""""""" + """"""""COLUMN"""""""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """"""""ROW_CHAR_SIZE"""""""" + j);
            }
        }

        """"""""LINE"""""""" += 128;
        """"""""COLUMN"""""""" = 0;

        if (""""""""LINE"""""""" >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
        {
            """"""""LINE"""""""" = 0;
            """"""""COLUMN"""""""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int A = """"""""IO_DISPLAY_START"""""""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """"""""IO_DISPLAY_SIZE"""""""" - """"""""ROW_CHAR_SIZE""""""""; addr++) {
                char temp = mread_char(A + addr + """"""""ROW_CHAR_SIZE"""""""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """"""""ROW_CHAR_SIZE"""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"""""LINE"""""""" -= 8;
        if (""""""""LINE"""""""" < 0)
        {
            """"""""LINE"""""""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int A = """"""""IO_DISPLAY_START"""""""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """"""""IO_DISPLAY_SIZE"""""""" - """"""""ROW_CHAR_SIZE""""""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """"""""ROW_CHAR_SIZE"""""""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """"""""ROW_CHAR_SIZE"""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"""""LINE"""""""" += 8;
        if (""""""""LINE"""""""" >= 8 * """"""""COLUMN_CHAR_SIZE"""""""")
        {
            """"""""LINE"""""""" = 8 * """"""""COLUMN_CHAR_SIZE"""""""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        int A = """"""""IO_DISPLAY_START"""""""" + """"""""IO_DISPLAY_SIZE"""""""" - 1;
        for (int i = A; i >= """"""""IO_DISPLAY_START""""""""; i--)
        {
            mwrite(0, i);
        }

        """"""""LINE"""""""" = 0;
        """"""""COLUMN"""""""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if (""""""""SCREEN_LOCK"""""""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """"""""IO_DISPLAY_START"""""""";
    int D = """"""""TEMP_START"""""""";

    for (int i = 0; i < """"""""IO_DISPLAY_SIZE""""""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """"""""IO_DISPLAY_START"""""""";
    int D = """"""""TEMP_START"""""""";

    for (int i = 0; i < """"""""IO_DISPLAY_SIZE""""""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """"""""FILE""""""""* file = fopen(filename, "r");
    if (file == """"""""NULL"""""""")
    {
        return 1;
    }

    // """"""""TODO"""""""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """"""""FILE""""""""* file = fopen(filename, "w");
    for (int i = 0; i < """"""""MEMORY_SIZE""""""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """"""""KEYBOARD_DRIVER_H""""""""
#define """"""""KEYBOARD_DRIVER_H""""""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """"""""IO_KEYBOARD_START"""""""";
    int end = """"""""IO_KEYBOARD_START"""""""" + """"""""IO_KEYBOARD_SIZE"""""""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """"""""IO_KEYBOARD_START"""""""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char(""""""""IO_KEYBOARD_START"""""""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """"""""IO_KEYBOARD_START"""""""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """"""""CTRL_CODE_ENTER"""""""": {
        // """"""""ENTR""""""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """"""""CTRL_CODE_ALT"""""""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """"""""CTRL_CODE_SHIFT"""""""": {
        // """"""""SHFT""""""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """"""""KEYBOARD_DRIVER_H""""""""




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time(""""""""NULL""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time(""""""""NULL""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time(""""""""NULL""""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """"""""_INTERNAL_MAP_SIZE"""""""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"""""_INTERNAL_MAP_SIZE"""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """"""""_INTERNAL_MAP_SIZE"""""""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"""""_INTERNAL_MAP_SIZE"""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """"""""_INTERNAL_MAP_SIZE"""""""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """"""""_INTERNAL_MAP_SIZE""""""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
#ifndef """"""""INTERNAL_MAP""""""""
#define """"""""INTERNAL_MAP""""""""

#define """"""""_INTERNAL_MAP_SIZE"""""""" 30

struct Map {
    int _map[""""""""_INTERNAL_MAP_SIZE""""""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
#ifndef """"""""RAND_GEN_H""""""""
#define """"""""RAND_GEN_H""""""""



void set_seed(int seed);
int rand(void);

#endif

/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """""""MEMORY_SIZE""""""" 1024 * 256
#define """""""OS_SIZE""""""" 1024 * 100
#define """""""OS_START""""""" 0
#define """""""OS_END""""""" """""""OS_START""""""" + """""""OS_SIZE"""""""
#define """""""STACK_SIZE""""""" 1024 * 10
#define """""""STACK_START""""""" """""""OS_END"""""""
#define """""""STACK_END""""""" """""""STACK_START""""""" + """""""STACK_SIZE"""""""
#define """""""HEAP_SIZE""""""" 1024 * 50
#define """""""HEAP_START""""""" """""""STACK_END"""""""
#define """""""HEAP_END""""""" """""""HEAP_START""""""" + """""""HEAP_SIZE"""""""
#define """""""IO_DISPLAY_SIZE""""""" 1024 * 64
#define """""""IO_DISPLAY_START""""""" """""""HEAP_END"""""""
#define """""""IO_DISPLAY_END""""""" """""""IO_DISPLAY_START""""""" + """""""IO_DISPLAY_SIZE"""""""
#define """""""IO_KEYBOARD_SIZE""""""" 1

#define """""""IO_KEYBOARD_START""""""" """""""IO_DISPLAY_END"""""""
// seekto=229376 in memory.txt

#define """""""IO_KEYBOARD_END""""""" """""""IO_KEYBOARD_START""""""" + """""""IO_KEYBOARD_SIZE"""""""
#define """""""FONTMAP_SIZE""""""" 1024 * 2
#define """""""FONTMAP_START""""""" """""""IO_KEYBOARD_END"""""""
#define """""""FONTMAP_END""""""" """""""FONTMAP_START""""""" + """""""FONTMAP_SIZE"""""""
#define """""""TEMP_SIZE""""""" 1024 * 38
#define """""""TEMP_START""""""" """""""FONTMAP_END"""""""
#define """""""TEMP_END""""""" """""""TEMP_START""""""" + """""""TEMP_SIZE"""""""

// Keyboard constants
#define """""""KEYBOARD_WAIT_TIME""""""" 5

//Control codes

#define """""""CTRL_CODE_BACKSPACE""""""" 0x08
#define """""""CTRL_CODE_ENTER""""""" 0x0A

#define """""""CTRL_CODE_CTRL""""""" 0x11
#define """""""CTRL_CODE_ALT""""""" 0x12
#define """""""CTRL_CODE_SHIFT""""""" 0x10
#define """""""CTRL_CODE_CAPSLOCK""""""" 0x14
#define """""""CTRL_CODE_BACKSPACE""""""" 0x08
/**
 * Initialize the kernel.
*/

#ifndef """""""INIT_H"""""""
#define """""""INIT_H"""""""








void init_memory()
{
    for (int i = 0; i < """""""MEMORY_SIZE"""""""; i++)
    {
        mwrite(0, i);
    }
}


#endif











"""""""FILE"""""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """""""MEMORY_SIZE""""""");
    fseek(fp, addr * 9, """""""SEEK_SET""""""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """""""MEMORY_SIZE""""""");  // check if addr is valid
    fseek(fp, addr * 9, """""""SEEK_SET""""""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """""""NULL""""""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """""""MEMORY_SIZE""""""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """""""MEMORY_H"""""""
#define """""""MEMORY_H"""""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory["""""""MEMORY_SIZE"""""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """""""MEMORY_H"""""""
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """""""OS_H"""""""
#define """""""OS_H"""""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """""""RISC""""""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char("""""""CTRL_CODE_BACKSPACE""""""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif





/**
 * 1024 X 1024 bits
 *
 * 128 ("""""""CHARS""""""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """""""IO_DISPLAY_START""""""" = 0
 * display_start = 0
 * """""""IO_DISPLAY_SIZE""""""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """""""ROW_CHAR_SIZE""""""" 128
#define """""""COLUMN_CHAR_SIZE""""""" 64
#define """""""SCREEN_LOCK""""""" 0x00
#define """""""MUL_CONS""""""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """""""LINE""""""" = 0;   // current line (ROW)
int """""""COLUMN""""""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """""""ROW_CHAR_SIZE""""""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """""""COLUMN_CHAR_SIZE""""""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """""""COLUMN_CHAR_SIZE""""""")
        return 1;
    if (col < 0 || col >= """""""ROW_CHAR_SIZE""""""")
        return 1;

    """""""LINE""""""" = line;
    """""""COLUMN""""""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """""""LINE""""""";
    vals[1] = """""""COLUMN""""""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        if (line >= 8 * """""""COLUMN_CHAR_SIZE""""""")
            return 1;
        if (col >= """""""ROW_CHAR_SIZE""""""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """""""COLUMN_CHAR_SIZE""""""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """""""ROW_CHAR_SIZE""""""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        if (line < 0 || line >= 8 * """""""COLUMN_CHAR_SIZE""""""")
            return 1;

        int A = """""""IO_DISPLAY_START""""""" + """""""ROW_CHAR_SIZE""""""" * line;
        for (int i = 0; i < """""""ROW_CHAR_SIZE""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int A = """""""IO_DISPLAY_START""""""" + """""""ROW_CHAR_SIZE""""""" * """""""LINE""""""";
        for (int i = 0; i < """""""ROW_CHAR_SIZE""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if ("""""""SCREEN_LOCK""""""" == 0)
    {

        if (c == '\n')
        {
            """""""COLUMN""""""" = 0;
            """""""LINE""""""" += 8;
            if ("""""""LINE""""""" == 8 * """""""COLUMN_CHAR_SIZE""""""")
            {
                """""""LINE""""""" = 0;
                """""""COLUMN""""""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """""""COLUMN""""""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """""""LINE""""""" += 8;
            if ("""""""LINE""""""" >= 8 * """""""COLUMN_CHAR_SIZE""""""")
            {
                """""""LINE""""""" = 0;
                """""""COLUMN""""""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """""""COLUMN""""""" += 4;
            if ("""""""COLUMN""""""" >= """""""ROW_CHAR_SIZE""""""")
            {
                """""""COLUMN""""""" = 0;
                """""""LINE""""""" += 8;
                if ("""""""LINE""""""" >= 8 * """""""COLUMN_CHAR_SIZE""""""")
                {
                    """""""LINE""""""" = 0;
                    """""""COLUMN""""""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """""""CTRL_CODE_BACKSPACE""""""")
        {
            if ("""""""COLUMN""""""" == 0)
            {
                if ("""""""LINE""""""" == 0)
                {
                    return 0;
                }
                else
                {
                    """""""COLUMN""""""" = """""""ROW_CHAR_SIZE""""""" - 1;
                    """""""LINE""""""" -= 8;
                }
            }
            else
            {
                """""""COLUMN"""""""--;
            }

            int A = """""""IO_DISPLAY_START""""""" + """""""ROW_CHAR_SIZE""""""" * """""""LINE""""""" + """""""COLUMN""""""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """""""ROW_CHAR_SIZE""""""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """""""IO_DISPLAY_START""""""" + """""""ROW_CHAR_SIZE""""""" * """""""LINE""""""" + """""""COLUMN"""""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """""""ROW_CHAR_SIZE""""""" * i);
            }

            """""""COLUMN"""""""++;
            if ("""""""COLUMN""""""" == """""""ROW_CHAR_SIZE""""""")
            { // if the row is full
                """""""COLUMN""""""" = 0;
                """""""LINE""""""" += 8;
                return 0;
            }

            if ("""""""LINE""""""" == 8 * """""""COLUMN_CHAR_SIZE""""""")
            { // if the screen is full
                """""""LINE""""""" = 0;
                """""""COLUMN""""""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {

        if (line < 0 || line >= 8 * """""""COLUMN_CHAR_SIZE""""""")
            return 1;
        if (col < 0 || col >= """""""ROW_CHAR_SIZE""""""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """""""IO_DISPLAY_START""""""" + """""""ROW_CHAR_SIZE""""""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """""""ROW_CHAR_SIZE""""""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int A = """""""IO_DISPLAY_START""""""" + ("""""""COLUMN_CHAR_SIZE""""""" - 1) * 8 * """""""ROW_CHAR_SIZE""""""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {

        """""""LINE""""""" += 8;
        """""""COLUMN""""""" = 0;

        int A = """""""IO_DISPLAY_START""""""" + """""""LINE""""""" * """""""ROW_CHAR_SIZE""""""" + """""""COLUMN""""""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """""""ROW_CHAR_SIZE""""""" + j);
            }
        }

        """""""LINE""""""" += 128;
        """""""COLUMN""""""" = 0;

        if ("""""""LINE""""""" >= 8 * """""""COLUMN_CHAR_SIZE""""""")
        {
            """""""LINE""""""" = 0;
            """""""COLUMN""""""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int A = """""""IO_DISPLAY_START""""""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """""""IO_DISPLAY_SIZE""""""" - """""""ROW_CHAR_SIZE"""""""; addr++) {
                char temp = mread_char(A + addr + """""""ROW_CHAR_SIZE""""""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """""""ROW_CHAR_SIZE""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""""LINE""""""" -= 8;
        if ("""""""LINE""""""" < 0)
        {
            """""""LINE""""""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int A = """""""IO_DISPLAY_START""""""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """""""IO_DISPLAY_SIZE""""""" - """""""ROW_CHAR_SIZE"""""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """""""ROW_CHAR_SIZE""""""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """""""ROW_CHAR_SIZE""""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""""LINE""""""" += 8;
        if ("""""""LINE""""""" >= 8 * """""""COLUMN_CHAR_SIZE""""""")
        {
            """""""LINE""""""" = 8 * """""""COLUMN_CHAR_SIZE""""""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        int A = """""""IO_DISPLAY_START""""""" + """""""IO_DISPLAY_SIZE""""""" - 1;
        for (int i = A; i >= """""""IO_DISPLAY_START"""""""; i--)
        {
            mwrite(0, i);
        }

        """""""LINE""""""" = 0;
        """""""COLUMN""""""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if ("""""""SCREEN_LOCK""""""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """""""IO_DISPLAY_START""""""";
    int D = """""""TEMP_START""""""";

    for (int i = 0; i < """""""IO_DISPLAY_SIZE"""""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """""""IO_DISPLAY_START""""""";
    int D = """""""TEMP_START""""""";

    for (int i = 0; i < """""""IO_DISPLAY_SIZE"""""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """""""FILE"""""""* file = fopen(filename, "r");
    if (file == """""""NULL""""""")
    {
        return 1;
    }

    // """""""TODO""""""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """""""FILE"""""""* file = fopen(filename, "w");
    for (int i = 0; i < """""""MEMORY_SIZE"""""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """""""KEYBOARD_DRIVER_H"""""""
#define """""""KEYBOARD_DRIVER_H"""""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """""""IO_KEYBOARD_START""""""";
    int end = """""""IO_KEYBOARD_START""""""" + """""""IO_KEYBOARD_SIZE""""""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """""""IO_KEYBOARD_START""""""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char("""""""IO_KEYBOARD_START""""""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """""""IO_KEYBOARD_START""""""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """""""CTRL_CODE_ENTER""""""": {
        // """""""ENTR"""""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """""""CTRL_CODE_ALT""""""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """""""CTRL_CODE_SHIFT""""""": {
        // """""""SHFT"""""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """""""KEYBOARD_DRIVER_H"""""""




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time("""""""NULL"""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time("""""""NULL"""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time("""""""NULL"""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """""""_INTERNAL_MAP_SIZE""""""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""""_INTERNAL_MAP_SIZE""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """""""_INTERNAL_MAP_SIZE""""""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""""_INTERNAL_MAP_SIZE""""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """""""_INTERNAL_MAP_SIZE""""""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """""""_INTERNAL_MAP_SIZE"""""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
#ifndef """""""INTERNAL_MAP"""""""
#define """""""INTERNAL_MAP"""""""

#define """""""_INTERNAL_MAP_SIZE""""""" 30

struct Map {
    int _map["""""""_INTERNAL_MAP_SIZE"""""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
#ifndef """""""RAND_GEN_H"""""""
#define """""""RAND_GEN_H"""""""



void set_seed(int seed);
int rand(void);

#endif

/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """"""MEMORY_SIZE"""""" 1024 * 256
#define """"""OS_SIZE"""""" 1024 * 100
#define """"""OS_START"""""" 0
#define """"""OS_END"""""" """"""OS_START"""""" + """"""OS_SIZE""""""
#define """"""STACK_SIZE"""""" 1024 * 10
#define """"""STACK_START"""""" """"""OS_END""""""
#define """"""STACK_END"""""" """"""STACK_START"""""" + """"""STACK_SIZE""""""
#define """"""HEAP_SIZE"""""" 1024 * 50
#define """"""HEAP_START"""""" """"""STACK_END""""""
#define """"""HEAP_END"""""" """"""HEAP_START"""""" + """"""HEAP_SIZE""""""
#define """"""IO_DISPLAY_SIZE"""""" 1024 * 64
#define """"""IO_DISPLAY_START"""""" """"""HEAP_END""""""
#define """"""IO_DISPLAY_END"""""" """"""IO_DISPLAY_START"""""" + """"""IO_DISPLAY_SIZE""""""
#define """"""IO_KEYBOARD_SIZE"""""" 1

#define """"""IO_KEYBOARD_START"""""" """"""IO_DISPLAY_END""""""
// seekto=229376 in memory.txt

#define """"""IO_KEYBOARD_END"""""" """"""IO_KEYBOARD_START"""""" + """"""IO_KEYBOARD_SIZE""""""
#define """"""FONTMAP_SIZE"""""" 1024 * 2
#define """"""FONTMAP_START"""""" """"""IO_KEYBOARD_END""""""
#define """"""FONTMAP_END"""""" """"""FONTMAP_START"""""" + """"""FONTMAP_SIZE""""""
#define """"""TEMP_SIZE"""""" 1024 * 38
#define """"""TEMP_START"""""" """"""FONTMAP_END""""""
#define """"""TEMP_END"""""" """"""TEMP_START"""""" + """"""TEMP_SIZE""""""

// Keyboard constants
#define """"""KEYBOARD_WAIT_TIME"""""" 5

//Control codes

#define """"""CTRL_CODE_BACKSPACE"""""" 0x08
#define """"""CTRL_CODE_ENTER"""""" 0x0A

#define """"""CTRL_CODE_CTRL"""""" 0x11
#define """"""CTRL_CODE_ALT"""""" 0x12
#define """"""CTRL_CODE_SHIFT"""""" 0x10
#define """"""CTRL_CODE_CAPSLOCK"""""" 0x14
#define """"""CTRL_CODE_BACKSPACE"""""" 0x08
/**
 * Initialize the kernel.
*/

#ifndef """"""INIT_H""""""
#define """"""INIT_H""""""








void init_memory()
{
    for (int i = 0; i < """"""MEMORY_SIZE""""""; i++)
    {
        mwrite(0, i);
    }
}


#endif











""""""FILE""""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """"""MEMORY_SIZE"""""");
    fseek(fp, addr * 9, """"""SEEK_SET"""""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """"""MEMORY_SIZE"""""");  // check if addr is valid
    fseek(fp, addr * 9, """"""SEEK_SET"""""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """"""NULL"""""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """"""MEMORY_SIZE"""""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """"""MEMORY_H""""""
#define """"""MEMORY_H""""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory[""""""MEMORY_SIZE""""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """"""MEMORY_H""""""
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """"""OS_H""""""
#define """"""OS_H""""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """"""RISC"""""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char(""""""CTRL_CODE_BACKSPACE"""""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif





/**
 * 1024 X 1024 bits
 *
 * 128 (""""""CHARS"""""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """"""IO_DISPLAY_START"""""" = 0
 * display_start = 0
 * """"""IO_DISPLAY_SIZE"""""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """"""ROW_CHAR_SIZE"""""" 128
#define """"""COLUMN_CHAR_SIZE"""""" 64
#define """"""SCREEN_LOCK"""""" 0x00
#define """"""MUL_CONS"""""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """"""LINE"""""" = 0;   // current line (ROW)
int """"""COLUMN"""""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """"""ROW_CHAR_SIZE"""""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """"""COLUMN_CHAR_SIZE"""""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """"""COLUMN_CHAR_SIZE"""""")
        return 1;
    if (col < 0 || col >= """"""ROW_CHAR_SIZE"""""")
        return 1;

    """"""LINE"""""" = line;
    """"""COLUMN"""""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """"""LINE"""""";
    vals[1] = """"""COLUMN"""""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        if (line >= 8 * """"""COLUMN_CHAR_SIZE"""""")
            return 1;
        if (col >= """"""ROW_CHAR_SIZE"""""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """"""COLUMN_CHAR_SIZE"""""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """"""ROW_CHAR_SIZE"""""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        if (line < 0 || line >= 8 * """"""COLUMN_CHAR_SIZE"""""")
            return 1;

        int A = """"""IO_DISPLAY_START"""""" + """"""ROW_CHAR_SIZE"""""" * line;
        for (int i = 0; i < """"""ROW_CHAR_SIZE"""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int A = """"""IO_DISPLAY_START"""""" + """"""ROW_CHAR_SIZE"""""" * """"""LINE"""""";
        for (int i = 0; i < """"""ROW_CHAR_SIZE"""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if (""""""SCREEN_LOCK"""""" == 0)
    {

        if (c == '\n')
        {
            """"""COLUMN"""""" = 0;
            """"""LINE"""""" += 8;
            if (""""""LINE"""""" == 8 * """"""COLUMN_CHAR_SIZE"""""")
            {
                """"""LINE"""""" = 0;
                """"""COLUMN"""""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """"""COLUMN"""""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """"""LINE"""""" += 8;
            if (""""""LINE"""""" >= 8 * """"""COLUMN_CHAR_SIZE"""""")
            {
                """"""LINE"""""" = 0;
                """"""COLUMN"""""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """"""COLUMN"""""" += 4;
            if (""""""COLUMN"""""" >= """"""ROW_CHAR_SIZE"""""")
            {
                """"""COLUMN"""""" = 0;
                """"""LINE"""""" += 8;
                if (""""""LINE"""""" >= 8 * """"""COLUMN_CHAR_SIZE"""""")
                {
                    """"""LINE"""""" = 0;
                    """"""COLUMN"""""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """"""CTRL_CODE_BACKSPACE"""""")
        {
            if (""""""COLUMN"""""" == 0)
            {
                if (""""""LINE"""""" == 0)
                {
                    return 0;
                }
                else
                {
                    """"""COLUMN"""""" = """"""ROW_CHAR_SIZE"""""" - 1;
                    """"""LINE"""""" -= 8;
                }
            }
            else
            {
                """"""COLUMN""""""--;
            }

            int A = """"""IO_DISPLAY_START"""""" + """"""ROW_CHAR_SIZE"""""" * """"""LINE"""""" + """"""COLUMN"""""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """"""ROW_CHAR_SIZE"""""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """"""IO_DISPLAY_START"""""" + """"""ROW_CHAR_SIZE"""""" * """"""LINE"""""" + """"""COLUMN""""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """"""ROW_CHAR_SIZE"""""" * i);
            }

            """"""COLUMN""""""++;
            if (""""""COLUMN"""""" == """"""ROW_CHAR_SIZE"""""")
            { // if the row is full
                """"""COLUMN"""""" = 0;
                """"""LINE"""""" += 8;
                return 0;
            }

            if (""""""LINE"""""" == 8 * """"""COLUMN_CHAR_SIZE"""""")
            { // if the screen is full
                """"""LINE"""""" = 0;
                """"""COLUMN"""""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {

        if (line < 0 || line >= 8 * """"""COLUMN_CHAR_SIZE"""""")
            return 1;
        if (col < 0 || col >= """"""ROW_CHAR_SIZE"""""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """"""IO_DISPLAY_START"""""" + """"""ROW_CHAR_SIZE"""""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """"""ROW_CHAR_SIZE"""""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int A = """"""IO_DISPLAY_START"""""" + (""""""COLUMN_CHAR_SIZE"""""" - 1) * 8 * """"""ROW_CHAR_SIZE"""""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {

        """"""LINE"""""" += 8;
        """"""COLUMN"""""" = 0;

        int A = """"""IO_DISPLAY_START"""""" + """"""LINE"""""" * """"""ROW_CHAR_SIZE"""""" + """"""COLUMN"""""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """"""ROW_CHAR_SIZE"""""" + j);
            }
        }

        """"""LINE"""""" += 128;
        """"""COLUMN"""""" = 0;

        if (""""""LINE"""""" >= 8 * """"""COLUMN_CHAR_SIZE"""""")
        {
            """"""LINE"""""" = 0;
            """"""COLUMN"""""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int A = """"""IO_DISPLAY_START"""""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """"""IO_DISPLAY_SIZE"""""" - """"""ROW_CHAR_SIZE""""""; addr++) {
                char temp = mread_char(A + addr + """"""ROW_CHAR_SIZE"""""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """"""ROW_CHAR_SIZE"""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"""LINE"""""" -= 8;
        if (""""""LINE"""""" < 0)
        {
            """"""LINE"""""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int A = """"""IO_DISPLAY_START"""""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """"""IO_DISPLAY_SIZE"""""" - """"""ROW_CHAR_SIZE""""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """"""ROW_CHAR_SIZE"""""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """"""ROW_CHAR_SIZE"""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"""LINE"""""" += 8;
        if (""""""LINE"""""" >= 8 * """"""COLUMN_CHAR_SIZE"""""")
        {
            """"""LINE"""""" = 8 * """"""COLUMN_CHAR_SIZE"""""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        int A = """"""IO_DISPLAY_START"""""" + """"""IO_DISPLAY_SIZE"""""" - 1;
        for (int i = A; i >= """"""IO_DISPLAY_START""""""; i--)
        {
            mwrite(0, i);
        }

        """"""LINE"""""" = 0;
        """"""COLUMN"""""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if (""""""SCREEN_LOCK"""""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """"""IO_DISPLAY_START"""""";
    int D = """"""TEMP_START"""""";

    for (int i = 0; i < """"""IO_DISPLAY_SIZE""""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """"""IO_DISPLAY_START"""""";
    int D = """"""TEMP_START"""""";

    for (int i = 0; i < """"""IO_DISPLAY_SIZE""""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """"""FILE""""""* file = fopen(filename, "r");
    if (file == """"""NULL"""""")
    {
        return 1;
    }

    // """"""TODO"""""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """"""FILE""""""* file = fopen(filename, "w");
    for (int i = 0; i < """"""MEMORY_SIZE""""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """"""KEYBOARD_DRIVER_H""""""
#define """"""KEYBOARD_DRIVER_H""""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """"""IO_KEYBOARD_START"""""";
    int end = """"""IO_KEYBOARD_START"""""" + """"""IO_KEYBOARD_SIZE"""""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """"""IO_KEYBOARD_START"""""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char(""""""IO_KEYBOARD_START"""""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """"""IO_KEYBOARD_START"""""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """"""CTRL_CODE_ENTER"""""": {
        // """"""ENTR""""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """"""CTRL_CODE_ALT"""""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """"""CTRL_CODE_SHIFT"""""": {
        // """"""SHFT""""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """"""KEYBOARD_DRIVER_H""""""




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time(""""""NULL""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time(""""""NULL""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time(""""""NULL""""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """"""_INTERNAL_MAP_SIZE"""""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"""_INTERNAL_MAP_SIZE"""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """"""_INTERNAL_MAP_SIZE"""""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"""_INTERNAL_MAP_SIZE"""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """"""_INTERNAL_MAP_SIZE"""""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """"""_INTERNAL_MAP_SIZE""""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
#ifndef """"""INTERNAL_MAP""""""
#define """"""INTERNAL_MAP""""""

#define """"""_INTERNAL_MAP_SIZE"""""" 30

struct Map {
    int _map[""""""_INTERNAL_MAP_SIZE""""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
#ifndef """"""RAND_GEN_H""""""
#define """"""RAND_GEN_H""""""



void set_seed(int seed);
int rand(void);

#endif

/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """""MEMORY_SIZE""""" 1024 * 256
#define """""OS_SIZE""""" 1024 * 100
#define """""OS_START""""" 0
#define """""OS_END""""" """""OS_START""""" + """""OS_SIZE"""""
#define """""STACK_SIZE""""" 1024 * 10
#define """""STACK_START""""" """""OS_END"""""
#define """""STACK_END""""" """""STACK_START""""" + """""STACK_SIZE"""""
#define """""HEAP_SIZE""""" 1024 * 50
#define """""HEAP_START""""" """""STACK_END"""""
#define """""HEAP_END""""" """""HEAP_START""""" + """""HEAP_SIZE"""""
#define """""IO_DISPLAY_SIZE""""" 1024 * 64
#define """""IO_DISPLAY_START""""" """""HEAP_END"""""
#define """""IO_DISPLAY_END""""" """""IO_DISPLAY_START""""" + """""IO_DISPLAY_SIZE"""""
#define """""IO_KEYBOARD_SIZE""""" 1

#define """""IO_KEYBOARD_START""""" """""IO_DISPLAY_END"""""
// seekto=229376 in memory.txt

#define """""IO_KEYBOARD_END""""" """""IO_KEYBOARD_START""""" + """""IO_KEYBOARD_SIZE"""""
#define """""FONTMAP_SIZE""""" 1024 * 2
#define """""FONTMAP_START""""" """""IO_KEYBOARD_END"""""
#define """""FONTMAP_END""""" """""FONTMAP_START""""" + """""FONTMAP_SIZE"""""
#define """""TEMP_SIZE""""" 1024 * 38
#define """""TEMP_START""""" """""FONTMAP_END"""""
#define """""TEMP_END""""" """""TEMP_START""""" + """""TEMP_SIZE"""""

// Keyboard constants
#define """""KEYBOARD_WAIT_TIME""""" 5

//Control codes

#define """""CTRL_CODE_BACKSPACE""""" 0x08
#define """""CTRL_CODE_ENTER""""" 0x0A

#define """""CTRL_CODE_CTRL""""" 0x11
#define """""CTRL_CODE_ALT""""" 0x12
#define """""CTRL_CODE_SHIFT""""" 0x10
#define """""CTRL_CODE_CAPSLOCK""""" 0x14
#define """""CTRL_CODE_BACKSPACE""""" 0x08
/**
 * Initialize the kernel.
*/

#ifndef """""INIT_H"""""
#define """""INIT_H"""""








void init_memory()
{
    for (int i = 0; i < """""MEMORY_SIZE"""""; i++)
    {
        mwrite(0, i);
    }
}


#endif











"""""FILE"""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """""MEMORY_SIZE""""");
    fseek(fp, addr * 9, """""SEEK_SET""""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """""MEMORY_SIZE""""");  // check if addr is valid
    fseek(fp, addr * 9, """""SEEK_SET""""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """""NULL""""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """""MEMORY_SIZE""""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """""MEMORY_H"""""
#define """""MEMORY_H"""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory["""""MEMORY_SIZE"""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """""MEMORY_H"""""
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """""OS_H"""""
#define """""OS_H"""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """""RISC""""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char("""""CTRL_CODE_BACKSPACE""""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif





/**
 * 1024 X 1024 bits
 *
 * 128 ("""""CHARS""""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """""IO_DISPLAY_START""""" = 0
 * display_start = 0
 * """""IO_DISPLAY_SIZE""""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """""ROW_CHAR_SIZE""""" 128
#define """""COLUMN_CHAR_SIZE""""" 64
#define """""SCREEN_LOCK""""" 0x00
#define """""MUL_CONS""""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """""LINE""""" = 0;   // current line (ROW)
int """""COLUMN""""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """""ROW_CHAR_SIZE""""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """""COLUMN_CHAR_SIZE""""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """""COLUMN_CHAR_SIZE""""")
        return 1;
    if (col < 0 || col >= """""ROW_CHAR_SIZE""""")
        return 1;

    """""LINE""""" = line;
    """""COLUMN""""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """""LINE""""";
    vals[1] = """""COLUMN""""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        if (line >= 8 * """""COLUMN_CHAR_SIZE""""")
            return 1;
        if (col >= """""ROW_CHAR_SIZE""""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """""COLUMN_CHAR_SIZE""""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """""ROW_CHAR_SIZE""""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        if (line < 0 || line >= 8 * """""COLUMN_CHAR_SIZE""""")
            return 1;

        int A = """""IO_DISPLAY_START""""" + """""ROW_CHAR_SIZE""""" * line;
        for (int i = 0; i < """""ROW_CHAR_SIZE""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int A = """""IO_DISPLAY_START""""" + """""ROW_CHAR_SIZE""""" * """""LINE""""";
        for (int i = 0; i < """""ROW_CHAR_SIZE""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if ("""""SCREEN_LOCK""""" == 0)
    {

        if (c == '\n')
        {
            """""COLUMN""""" = 0;
            """""LINE""""" += 8;
            if ("""""LINE""""" == 8 * """""COLUMN_CHAR_SIZE""""")
            {
                """""LINE""""" = 0;
                """""COLUMN""""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """""COLUMN""""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """""LINE""""" += 8;
            if ("""""LINE""""" >= 8 * """""COLUMN_CHAR_SIZE""""")
            {
                """""LINE""""" = 0;
                """""COLUMN""""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """""COLUMN""""" += 4;
            if ("""""COLUMN""""" >= """""ROW_CHAR_SIZE""""")
            {
                """""COLUMN""""" = 0;
                """""LINE""""" += 8;
                if ("""""LINE""""" >= 8 * """""COLUMN_CHAR_SIZE""""")
                {
                    """""LINE""""" = 0;
                    """""COLUMN""""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """""CTRL_CODE_BACKSPACE""""")
        {
            if ("""""COLUMN""""" == 0)
            {
                if ("""""LINE""""" == 0)
                {
                    return 0;
                }
                else
                {
                    """""COLUMN""""" = """""ROW_CHAR_SIZE""""" - 1;
                    """""LINE""""" -= 8;
                }
            }
            else
            {
                """""COLUMN"""""--;
            }

            int A = """""IO_DISPLAY_START""""" + """""ROW_CHAR_SIZE""""" * """""LINE""""" + """""COLUMN""""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """""ROW_CHAR_SIZE""""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """""IO_DISPLAY_START""""" + """""ROW_CHAR_SIZE""""" * """""LINE""""" + """""COLUMN"""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """""ROW_CHAR_SIZE""""" * i);
            }

            """""COLUMN"""""++;
            if ("""""COLUMN""""" == """""ROW_CHAR_SIZE""""")
            { // if the row is full
                """""COLUMN""""" = 0;
                """""LINE""""" += 8;
                return 0;
            }

            if ("""""LINE""""" == 8 * """""COLUMN_CHAR_SIZE""""")
            { // if the screen is full
                """""LINE""""" = 0;
                """""COLUMN""""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if ("""""SCREEN_LOCK""""" == 0)
    {

        if (line < 0 || line >= 8 * """""COLUMN_CHAR_SIZE""""")
            return 1;
        if (col < 0 || col >= """""ROW_CHAR_SIZE""""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """""IO_DISPLAY_START""""" + """""ROW_CHAR_SIZE""""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """""ROW_CHAR_SIZE""""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int A = """""IO_DISPLAY_START""""" + ("""""COLUMN_CHAR_SIZE""""" - 1) * 8 * """""ROW_CHAR_SIZE""""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if ("""""SCREEN_LOCK""""" == 0)
    {

        """""LINE""""" += 8;
        """""COLUMN""""" = 0;

        int A = """""IO_DISPLAY_START""""" + """""LINE""""" * """""ROW_CHAR_SIZE""""" + """""COLUMN""""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """""ROW_CHAR_SIZE""""" + j);
            }
        }

        """""LINE""""" += 128;
        """""COLUMN""""" = 0;

        if ("""""LINE""""" >= 8 * """""COLUMN_CHAR_SIZE""""")
        {
            """""LINE""""" = 0;
            """""COLUMN""""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int A = """""IO_DISPLAY_START""""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """""IO_DISPLAY_SIZE""""" - """""ROW_CHAR_SIZE"""""; addr++) {
                char temp = mread_char(A + addr + """""ROW_CHAR_SIZE""""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """""ROW_CHAR_SIZE""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""LINE""""" -= 8;
        if ("""""LINE""""" < 0)
        {
            """""LINE""""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int A = """""IO_DISPLAY_START""""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """""IO_DISPLAY_SIZE""""" - """""ROW_CHAR_SIZE"""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """""ROW_CHAR_SIZE""""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """""ROW_CHAR_SIZE""""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """""LINE""""" += 8;
        if ("""""LINE""""" >= 8 * """""COLUMN_CHAR_SIZE""""")
        {
            """""LINE""""" = 8 * """""COLUMN_CHAR_SIZE""""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        int A = """""IO_DISPLAY_START""""" + """""IO_DISPLAY_SIZE""""" - 1;
        for (int i = A; i >= """""IO_DISPLAY_START"""""; i--)
        {
            mwrite(0, i);
        }

        """""LINE""""" = 0;
        """""COLUMN""""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if ("""""SCREEN_LOCK""""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """""IO_DISPLAY_START""""";
    int D = """""TEMP_START""""";

    for (int i = 0; i < """""IO_DISPLAY_SIZE"""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """""IO_DISPLAY_START""""";
    int D = """""TEMP_START""""";

    for (int i = 0; i < """""IO_DISPLAY_SIZE"""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """""FILE"""""* file = fopen(filename, "r");
    if (file == """""NULL""""")
    {
        return 1;
    }

    // """""TODO""""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """""FILE"""""* file = fopen(filename, "w");
    for (int i = 0; i < """""MEMORY_SIZE"""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """""KEYBOARD_DRIVER_H"""""
#define """""KEYBOARD_DRIVER_H"""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """""IO_KEYBOARD_START""""";
    int end = """""IO_KEYBOARD_START""""" + """""IO_KEYBOARD_SIZE""""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """""IO_KEYBOARD_START""""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char("""""IO_KEYBOARD_START""""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """""IO_KEYBOARD_START""""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """""CTRL_CODE_ENTER""""": {
        // """""ENTR"""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """""CTRL_CODE_ALT""""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """""CTRL_CODE_SHIFT""""": {
        // """""SHFT"""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """""KEYBOARD_DRIVER_H"""""




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time("""""NULL"""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time("""""NULL"""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time("""""NULL"""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}





void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """""_INTERNAL_MAP_SIZE""""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""_INTERNAL_MAP_SIZE""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """""_INTERNAL_MAP_SIZE""""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """""_INTERNAL_MAP_SIZE""""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """""_INTERNAL_MAP_SIZE""""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """""_INTERNAL_MAP_SIZE"""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
#ifndef """""INTERNAL_MAP"""""
#define """""INTERNAL_MAP"""""

#define """""_INTERNAL_MAP_SIZE""""" 30

struct Map {
    int _map["""""_INTERNAL_MAP_SIZE"""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
#ifndef """""RAND_GEN_H"""""
#define """""RAND_GEN_H"""""



void set_seed(int seed);
int rand(void);

#endif

/* a.out */
/* global.h */
/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """"MEMORY_SIZE"""" 1024 * 256
#define """"OS_SIZE"""" 1024 * 100
#define """"OS_START"""" 0
#define """"OS_END"""" """"OS_START"""" + """"OS_SIZE""""
#define """"STACK_SIZE"""" 1024 * 10
#define """"STACK_START"""" """"OS_END""""
#define """"STACK_END"""" """"STACK_START"""" + """"STACK_SIZE""""
#define """"HEAP_SIZE"""" 1024 * 50
#define """"HEAP_START"""" """"STACK_END""""
#define """"HEAP_END"""" """"HEAP_START"""" + """"HEAP_SIZE""""
#define """"IO_DISPLAY_SIZE"""" 1024 * 64
#define """"IO_DISPLAY_START"""" """"HEAP_END""""
#define """"IO_DISPLAY_END"""" """"IO_DISPLAY_START"""" + """"IO_DISPLAY_SIZE""""
#define """"IO_KEYBOARD_SIZE"""" 1

#define """"IO_KEYBOARD_START"""" """"IO_DISPLAY_END""""
// seekto=229376 in memory.txt

#define """"IO_KEYBOARD_END"""" """"IO_KEYBOARD_START"""" + """"IO_KEYBOARD_SIZE""""
#define """"FONTMAP_SIZE"""" 1024 * 2
#define """"FONTMAP_START"""" """"IO_KEYBOARD_END""""
#define """"FONTMAP_END"""" """"FONTMAP_START"""" + """"FONTMAP_SIZE""""
#define """"TEMP_SIZE"""" 1024 * 38
#define """"TEMP_START"""" """"FONTMAP_END""""
#define """"TEMP_END"""" """"TEMP_START"""" + """"TEMP_SIZE""""

// Keyboard constants
#define """"KEYBOARD_WAIT_TIME"""" 5

//Control codes

#define """"CTRL_CODE_BACKSPACE"""" 0x08
#define """"CTRL_CODE_ENTER"""" 0x0A

#define """"CTRL_CODE_CTRL"""" 0x11
#define """"CTRL_CODE_ALT"""" 0x12
#define """"CTRL_CODE_SHIFT"""" 0x10
#define """"CTRL_CODE_CAPSLOCK"""" 0x14
#define """"CTRL_CODE_BACKSPACE"""" 0x08
/* init.c */
/**
 * Initialize the kernel.
*/

#ifndef """"INIT_H""""
#define """"INIT_H""""








void init_memory()
{
    for (int i = 0; i < """"MEMORY_SIZE""""; i++)
    {
        mwrite(0, i);
    }
}


#endif
/* memory.c */











""""FILE""""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """"MEMORY_SIZE"""");
    fseek(fp, addr * 9, """"SEEK_SET"""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """"MEMORY_SIZE"""");  // check if addr is valid
    fseek(fp, addr * 9, """"SEEK_SET"""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """"NULL"""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """"MEMORY_SIZE"""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/* memory.h */
/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """"MEMORY_H""""
#define """"MEMORY_H""""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory[""""MEMORY_SIZE""""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """"MEMORY_H""""
/* memory.txt */
/* os.c */
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """"OS_H""""
#define """"OS_H""""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """"RISC"""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char(""""CTRL_CODE_BACKSPACE"""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif
/* os_senior.tmp */
/* display_driver.c */





/**
 * 1024 X 1024 bits
 *
 * 128 (""""CHARS"""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """"IO_DISPLAY_START"""" = 0
 * display_start = 0
 * """"IO_DISPLAY_SIZE"""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """"ROW_CHAR_SIZE"""" 128
#define """"COLUMN_CHAR_SIZE"""" 64
#define """"SCREEN_LOCK"""" 0x00
#define """"MUL_CONS"""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """"LINE"""" = 0;   // current line (ROW)
int """"COLUMN"""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """"ROW_CHAR_SIZE"""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """"COLUMN_CHAR_SIZE"""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """"COLUMN_CHAR_SIZE"""")
        return 1;
    if (col < 0 || col >= """"ROW_CHAR_SIZE"""")
        return 1;

    """"LINE"""" = line;
    """"COLUMN"""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """"LINE"""";
    vals[1] = """"COLUMN"""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        if (line >= 8 * """"COLUMN_CHAR_SIZE"""")
            return 1;
        if (col >= """"ROW_CHAR_SIZE"""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """"COLUMN_CHAR_SIZE"""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """"ROW_CHAR_SIZE"""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        if (line < 0 || line >= 8 * """"COLUMN_CHAR_SIZE"""")
            return 1;

        int A = """"IO_DISPLAY_START"""" + """"ROW_CHAR_SIZE"""" * line;
        for (int i = 0; i < """"ROW_CHAR_SIZE"""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int A = """"IO_DISPLAY_START"""" + """"ROW_CHAR_SIZE"""" * """"LINE"""";
        for (int i = 0; i < """"ROW_CHAR_SIZE"""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if (""""SCREEN_LOCK"""" == 0)
    {

        if (c == '\n')
        {
            """"COLUMN"""" = 0;
            """"LINE"""" += 8;
            if (""""LINE"""" == 8 * """"COLUMN_CHAR_SIZE"""")
            {
                """"LINE"""" = 0;
                """"COLUMN"""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """"COLUMN"""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """"LINE"""" += 8;
            if (""""LINE"""" >= 8 * """"COLUMN_CHAR_SIZE"""")
            {
                """"LINE"""" = 0;
                """"COLUMN"""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """"COLUMN"""" += 4;
            if (""""COLUMN"""" >= """"ROW_CHAR_SIZE"""")
            {
                """"COLUMN"""" = 0;
                """"LINE"""" += 8;
                if (""""LINE"""" >= 8 * """"COLUMN_CHAR_SIZE"""")
                {
                    """"LINE"""" = 0;
                    """"COLUMN"""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """"CTRL_CODE_BACKSPACE"""")
        {
            if (""""COLUMN"""" == 0)
            {
                if (""""LINE"""" == 0)
                {
                    return 0;
                }
                else
                {
                    """"COLUMN"""" = """"ROW_CHAR_SIZE"""" - 1;
                    """"LINE"""" -= 8;
                }
            }
            else
            {
                """"COLUMN""""--;
            }

            int A = """"IO_DISPLAY_START"""" + """"ROW_CHAR_SIZE"""" * """"LINE"""" + """"COLUMN"""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """"ROW_CHAR_SIZE"""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """"IO_DISPLAY_START"""" + """"ROW_CHAR_SIZE"""" * """"LINE"""" + """"COLUMN""""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """"ROW_CHAR_SIZE"""" * i);
            }

            """"COLUMN""""++;
            if (""""COLUMN"""" == """"ROW_CHAR_SIZE"""")
            { // if the row is full
                """"COLUMN"""" = 0;
                """"LINE"""" += 8;
                return 0;
            }

            if (""""LINE"""" == 8 * """"COLUMN_CHAR_SIZE"""")
            { // if the screen is full
                """"LINE"""" = 0;
                """"COLUMN"""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if (""""SCREEN_LOCK"""" == 0)
    {

        if (line < 0 || line >= 8 * """"COLUMN_CHAR_SIZE"""")
            return 1;
        if (col < 0 || col >= """"ROW_CHAR_SIZE"""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """"IO_DISPLAY_START"""" + """"ROW_CHAR_SIZE"""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """"ROW_CHAR_SIZE"""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int A = """"IO_DISPLAY_START"""" + (""""COLUMN_CHAR_SIZE"""" - 1) * 8 * """"ROW_CHAR_SIZE"""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if (""""SCREEN_LOCK"""" == 0)
    {

        """"LINE"""" += 8;
        """"COLUMN"""" = 0;

        int A = """"IO_DISPLAY_START"""" + """"LINE"""" * """"ROW_CHAR_SIZE"""" + """"COLUMN"""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """"ROW_CHAR_SIZE"""" + j);
            }
        }

        """"LINE"""" += 128;
        """"COLUMN"""" = 0;

        if (""""LINE"""" >= 8 * """"COLUMN_CHAR_SIZE"""")
        {
            """"LINE"""" = 0;
            """"COLUMN"""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int A = """"IO_DISPLAY_START"""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """"IO_DISPLAY_SIZE"""" - """"ROW_CHAR_SIZE""""; addr++) {
                char temp = mread_char(A + addr + """"ROW_CHAR_SIZE"""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """"ROW_CHAR_SIZE"""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"LINE"""" -= 8;
        if (""""LINE"""" < 0)
        {
            """"LINE"""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int A = """"IO_DISPLAY_START"""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """"IO_DISPLAY_SIZE"""" - """"ROW_CHAR_SIZE""""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """"ROW_CHAR_SIZE"""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """"ROW_CHAR_SIZE"""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """"LINE"""" += 8;
        if (""""LINE"""" >= 8 * """"COLUMN_CHAR_SIZE"""")
        {
            """"LINE"""" = 8 * """"COLUMN_CHAR_SIZE"""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        int A = """"IO_DISPLAY_START"""" + """"IO_DISPLAY_SIZE"""" - 1;
        for (int i = A; i >= """"IO_DISPLAY_START""""; i--)
        {
            mwrite(0, i);
        }

        """"LINE"""" = 0;
        """"COLUMN"""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if (""""SCREEN_LOCK"""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """"IO_DISPLAY_START"""";
    int D = """"TEMP_START"""";

    for (int i = 0; i < """"IO_DISPLAY_SIZE""""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """"IO_DISPLAY_START"""";
    int D = """"TEMP_START"""";

    for (int i = 0; i < """"IO_DISPLAY_SIZE""""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """"FILE""""* file = fopen(filename, "r");
    if (file == """"NULL"""")
    {
        return 1;
    }

    // """"TODO"""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """"FILE""""* file = fopen(filename, "w");
    for (int i = 0; i < """"MEMORY_SIZE""""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
/* font_map.h */
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/* keyboard_driver.c */
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """"KEYBOARD_DRIVER_H""""
#define """"KEYBOARD_DRIVER_H""""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """"IO_KEYBOARD_START"""";
    int end = """"IO_KEYBOARD_START"""" + """"IO_KEYBOARD_SIZE"""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """"IO_KEYBOARD_START"""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char(""""IO_KEYBOARD_START"""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """"IO_KEYBOARD_START"""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """"CTRL_CODE_ENTER"""": {
        // """"ENTR""""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """"CTRL_CODE_ALT"""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """"CTRL_CODE_SHIFT"""": {
        // """"SHFT""""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """"KEYBOARD_DRIVER_H""""
/* easy.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time(""""NULL""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* hard.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time(""""NULL""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* med.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time(""""NULL""""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* map.c */




void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """"_INTERNAL_MAP_SIZE"""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"_INTERNAL_MAP_SIZE"""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """"_INTERNAL_MAP_SIZE"""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """"_INTERNAL_MAP_SIZE"""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """"_INTERNAL_MAP_SIZE"""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """"_INTERNAL_MAP_SIZE""""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
/* map.h */
#ifndef """"INTERNAL_MAP""""
#define """"INTERNAL_MAP""""

#define """"_INTERNAL_MAP_SIZE"""" 30

struct Map {
    int _map[""""_INTERNAL_MAP_SIZE""""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 
/* rand_gen.c */


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
/* rand_gen.h */
#ifndef """"RAND_GEN_H""""
#define """"RAND_GEN_H""""



void set_seed(int seed);
int rand(void);

#endif

/* a.out */
/* global.h */
/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define """MEMORY_SIZE""" 1024 * 256
#define """OS_SIZE""" 1024 * 100
#define """OS_START""" 0
#define """OS_END""" """OS_START""" + """OS_SIZE"""
#define """STACK_SIZE""" 1024 * 10
#define """STACK_START""" """OS_END"""
#define """STACK_END""" """STACK_START""" + """STACK_SIZE"""
#define """HEAP_SIZE""" 1024 * 50
#define """HEAP_START""" """STACK_END"""
#define """HEAP_END""" """HEAP_START""" + """HEAP_SIZE"""
#define """IO_DISPLAY_SIZE""" 1024 * 64
#define """IO_DISPLAY_START""" """HEAP_END"""
#define """IO_DISPLAY_END""" """IO_DISPLAY_START""" + """IO_DISPLAY_SIZE"""
#define """IO_KEYBOARD_SIZE""" 1

#define """IO_KEYBOARD_START""" """IO_DISPLAY_END"""
// seekto=229376 in memory.txt

#define """IO_KEYBOARD_END""" """IO_KEYBOARD_START""" + """IO_KEYBOARD_SIZE"""
#define """FONTMAP_SIZE""" 1024 * 2
#define """FONTMAP_START""" """IO_KEYBOARD_END"""
#define """FONTMAP_END""" """FONTMAP_START""" + """FONTMAP_SIZE"""
#define """TEMP_SIZE""" 1024 * 38
#define """TEMP_START""" """FONTMAP_END"""
#define """TEMP_END""" """TEMP_START""" + """TEMP_SIZE"""

// Keyboard constants
#define """KEYBOARD_WAIT_TIME""" 5

//Control codes

#define """CTRL_CODE_BACKSPACE""" 0x08
#define """CTRL_CODE_ENTER""" 0x0A

#define """CTRL_CODE_CTRL""" 0x11
#define """CTRL_CODE_ALT""" 0x12
#define """CTRL_CODE_SHIFT""" 0x10
#define """CTRL_CODE_CAPSLOCK""" 0x14
#define """CTRL_CODE_BACKSPACE""" 0x08
/* init.c */
/**
 * Initialize the kernel.
*/

#ifndef """INIT_H"""
#define """INIT_H"""








void init_memory()
{
    for (int i = 0; i < """MEMORY_SIZE"""; i++)
    {
        mwrite(0, i);
    }
}


#endif
/* memory.c */











"""FILE"""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < """MEMORY_SIZE""");
    fseek(fp, addr * 9, """SEEK_SET""");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < """MEMORY_SIZE""");  // check if addr is valid
    fseek(fp, addr * 9, """SEEK_SET""");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == """NULL""") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < """MEMORY_SIZE""";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/* memory.h */
/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef """MEMORY_H"""
#define """MEMORY_H"""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory["""MEMORY_SIZE"""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // """MEMORY_H"""
/* memory.txt */
/* os.c */
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef """OS_H"""
#define """OS_H"""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team """RISC""" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char("""CTRL_CODE_BACKSPACE""");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif
/* os_senior.tmp */
/* display_driver.c */





/**
 * 1024 X 1024 bits
 *
 * 128 ("""CHARS""") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * """IO_DISPLAY_START""" = 0
 * display_start = 0
 * """IO_DISPLAY_SIZE""" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define """ROW_CHAR_SIZE""" 128
#define """COLUMN_CHAR_SIZE""" 64
#define """SCREEN_LOCK""" 0x00
#define """MUL_CONS""" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int """LINE""" = 0;   // current line (ROW)
int """COLUMN""" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == """ROW_CHAR_SIZE""")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * """COLUMN_CHAR_SIZE""")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * """COLUMN_CHAR_SIZE""")
        return 1;
    if (col < 0 || col >= """ROW_CHAR_SIZE""")
        return 1;

    """LINE""" = line;
    """COLUMN""" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = """LINE""";
    vals[1] = """COLUMN""";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if ("""SCREEN_LOCK""" == 0)
    {
        if (line >= 8 * """COLUMN_CHAR_SIZE""")
            return 1;
        if (col >= """ROW_CHAR_SIZE""" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * """COLUMN_CHAR_SIZE""")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == """ROW_CHAR_SIZE""")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if ("""SCREEN_LOCK""" == 0)
    {
        if (line < 0 || line >= 8 * """COLUMN_CHAR_SIZE""")
            return 1;

        int A = """IO_DISPLAY_START""" + """ROW_CHAR_SIZE""" * line;
        for (int i = 0; i < """ROW_CHAR_SIZE""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int A = """IO_DISPLAY_START""" + """ROW_CHAR_SIZE""" * """LINE""";
        for (int i = 0; i < """ROW_CHAR_SIZE""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if ("""SCREEN_LOCK""" == 0)
    {

        if (c == '\n')
        {
            """COLUMN""" = 0;
            """LINE""" += 8;
            if ("""LINE""" == 8 * """COLUMN_CHAR_SIZE""")
            {
                """LINE""" = 0;
                """COLUMN""" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            """COLUMN""" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            """LINE""" += 8;
            if ("""LINE""" >= 8 * """COLUMN_CHAR_SIZE""")
            {
                """LINE""" = 0;
                """COLUMN""" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            """COLUMN""" += 4;
            if ("""COLUMN""" >= """ROW_CHAR_SIZE""")
            {
                """COLUMN""" = 0;
                """LINE""" += 8;
                if ("""LINE""" >= 8 * """COLUMN_CHAR_SIZE""")
                {
                    """LINE""" = 0;
                    """COLUMN""" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == """CTRL_CODE_BACKSPACE""")
        {
            if ("""COLUMN""" == 0)
            {
                if ("""LINE""" == 0)
                {
                    return 0;
                }
                else
                {
                    """COLUMN""" = """ROW_CHAR_SIZE""" - 1;
                    """LINE""" -= 8;
                }
            }
            else
            {
                """COLUMN"""--;
            }

            int A = """IO_DISPLAY_START""" + """ROW_CHAR_SIZE""" * """LINE""" + """COLUMN""";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + """ROW_CHAR_SIZE""" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = """IO_DISPLAY_START""" + """ROW_CHAR_SIZE""" * """LINE""" + """COLUMN"""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + """ROW_CHAR_SIZE""" * i);
            }

            """COLUMN"""++;
            if ("""COLUMN""" == """ROW_CHAR_SIZE""")
            { // if the row is full
                """COLUMN""" = 0;
                """LINE""" += 8;
                return 0;
            }

            if ("""LINE""" == 8 * """COLUMN_CHAR_SIZE""")
            { // if the screen is full
                """LINE""" = 0;
                """COLUMN""" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if ("""SCREEN_LOCK""" == 0)
    {

        if (line < 0 || line >= 8 * """COLUMN_CHAR_SIZE""")
            return 1;
        if (col < 0 || col >= """ROW_CHAR_SIZE""")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = """IO_DISPLAY_START""" + """ROW_CHAR_SIZE""" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + """ROW_CHAR_SIZE""" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int A = """IO_DISPLAY_START""" + ("""COLUMN_CHAR_SIZE""" - 1) * 8 * """ROW_CHAR_SIZE""";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if ("""SCREEN_LOCK""" == 0)
    {

        """LINE""" += 8;
        """COLUMN""" = 0;

        int A = """IO_DISPLAY_START""" + """LINE""" * """ROW_CHAR_SIZE""" + """COLUMN""";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * """ROW_CHAR_SIZE""" + j);
            }
        }

        """LINE""" += 128;
        """COLUMN""" = 0;

        if ("""LINE""" >= 8 * """COLUMN_CHAR_SIZE""")
        {
            """LINE""" = 0;
            """COLUMN""" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int A = """IO_DISPLAY_START""";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < """IO_DISPLAY_SIZE""" - """ROW_CHAR_SIZE"""; addr++) {
                char temp = mread_char(A + addr + """ROW_CHAR_SIZE""");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < """ROW_CHAR_SIZE""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """LINE""" -= 8;
        if ("""LINE""" < 0)
        {
            """LINE""" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int A = """IO_DISPLAY_START""";

        for (int j = 0;j < 8;j++) {
            for (int addr = """IO_DISPLAY_SIZE""" - """ROW_CHAR_SIZE"""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + """ROW_CHAR_SIZE""");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < """ROW_CHAR_SIZE""" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        """LINE""" += 8;
        if ("""LINE""" >= 8 * """COLUMN_CHAR_SIZE""")
        {
            """LINE""" = 8 * """COLUMN_CHAR_SIZE""" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if ("""SCREEN_LOCK""" == 0)
    {
        int A = """IO_DISPLAY_START""" + """IO_DISPLAY_SIZE""" - 1;
        for (int i = A; i >= """IO_DISPLAY_START"""; i--)
        {
            mwrite(0, i);
        }

        """LINE""" = 0;
        """COLUMN""" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if ("""SCREEN_LOCK""" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = """IO_DISPLAY_START""";
    int D = """TEMP_START""";

    for (int i = 0; i < """IO_DISPLAY_SIZE"""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = """IO_DISPLAY_START""";
    int D = """TEMP_START""";

    for (int i = 0; i < """IO_DISPLAY_SIZE"""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    """FILE"""* file = fopen(filename, "r");
    if (file == """NULL""")
    {
        return 1;
    }

    // """TODO""": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    """FILE"""* file = fopen(filename, "w");
    for (int i = 0; i < """MEMORY_SIZE"""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
/* font_map.h */
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/* keyboard_driver.c */
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef """KEYBOARD_DRIVER_H"""
#define """KEYBOARD_DRIVER_H"""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = """IO_KEYBOARD_START""";
    int end = """IO_KEYBOARD_START""" + """IO_KEYBOARD_SIZE""";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", """IO_KEYBOARD_START""");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char("""IO_KEYBOARD_START""");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, """IO_KEYBOARD_START""");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case """CTRL_CODE_ENTER""": {
        // """ENTR"""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case """CTRL_CODE_ALT""": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case """CTRL_CODE_SHIFT""": {
        // """SHFT"""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // """KEYBOARD_DRIVER_H"""
/* easy.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time("""NULL"""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* hard.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time("""NULL"""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* med.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time("""NULL"""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* map.c */




void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < """_INTERNAL_MAP_SIZE""";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= """_INTERNAL_MAP_SIZE""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= """_INTERNAL_MAP_SIZE""") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= """_INTERNAL_MAP_SIZE""") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return """_INTERNAL_MAP_SIZE""";
}

void print_map(struct Map* map) {
    for (int index = 0;index < """_INTERNAL_MAP_SIZE"""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
/* map.h */
#ifndef """INTERNAL_MAP"""
#define """INTERNAL_MAP"""

#define """_INTERNAL_MAP_SIZE""" 30

struct Map {
    int _map["""_INTERNAL_MAP_SIZE"""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 
/* rand_gen.c */


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
/* rand_gen.h */
#ifndef """RAND_GEN_H"""
#define """RAND_GEN_H"""



void set_seed(int seed);
int rand(void);

#endif

/* a.out */
/* global.h */
/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define ""MEMORY_SIZE"" 1024 * 256
#define ""OS_SIZE"" 1024 * 100
#define ""OS_START"" 0
#define ""OS_END"" ""OS_START"" + ""OS_SIZE""
#define ""STACK_SIZE"" 1024 * 10
#define ""STACK_START"" ""OS_END""
#define ""STACK_END"" ""STACK_START"" + ""STACK_SIZE""
#define ""HEAP_SIZE"" 1024 * 50
#define ""HEAP_START"" ""STACK_END""
#define ""HEAP_END"" ""HEAP_START"" + ""HEAP_SIZE""
#define ""IO_DISPLAY_SIZE"" 1024 * 64
#define ""IO_DISPLAY_START"" ""HEAP_END""
#define ""IO_DISPLAY_END"" ""IO_DISPLAY_START"" + ""IO_DISPLAY_SIZE""
#define ""IO_KEYBOARD_SIZE"" 1

#define ""IO_KEYBOARD_START"" ""IO_DISPLAY_END""
// seekto=229376 in memory.txt

#define ""IO_KEYBOARD_END"" ""IO_KEYBOARD_START"" + ""IO_KEYBOARD_SIZE""
#define ""FONTMAP_SIZE"" 1024 * 2
#define ""FONTMAP_START"" ""IO_KEYBOARD_END""
#define ""FONTMAP_END"" ""FONTMAP_START"" + ""FONTMAP_SIZE""
#define ""TEMP_SIZE"" 1024 * 38
#define ""TEMP_START"" ""FONTMAP_END""
#define ""TEMP_END"" ""TEMP_START"" + ""TEMP_SIZE""

// Keyboard constants
#define ""KEYBOARD_WAIT_TIME"" 5

//Control codes

#define ""CTRL_CODE_BACKSPACE"" 0x08
#define ""CTRL_CODE_ENTER"" 0x0A

#define ""CTRL_CODE_CTRL"" 0x11
#define ""CTRL_CODE_ALT"" 0x12
#define ""CTRL_CODE_SHIFT"" 0x10
#define ""CTRL_CODE_CAPSLOCK"" 0x14
#define ""CTRL_CODE_BACKSPACE"" 0x08
/* init.c */
/**
 * Initialize the kernel.
*/

#ifndef ""INIT_H""
#define ""INIT_H""








void init_memory()
{
    for (int i = 0; i < ""MEMORY_SIZE""; i++)
    {
        mwrite(0, i);
    }
}


#endif
/* memory.c */











""FILE""* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < ""MEMORY_SIZE"");
    fseek(fp, addr * 9, ""SEEK_SET"");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < ""MEMORY_SIZE"");  // check if addr is valid
    fseek(fp, addr * 9, ""SEEK_SET"");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == ""NULL"") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < ""MEMORY_SIZE"";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/* memory.h */
/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef ""MEMORY_H""
#define ""MEMORY_H""





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory[""MEMORY_SIZE""];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // ""MEMORY_H""
/* memory.txt */
/* os.c */
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef ""OS_H""
#define ""OS_H""















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team ""RISC"" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char(""CTRL_CODE_BACKSPACE"");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif
/* os_senior.tmp */
/* display_driver.c */





/**
 * 1024 X 1024 bits
 *
 * 128 (""CHARS"") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * ""IO_DISPLAY_START"" = 0
 * display_start = 0
 * ""IO_DISPLAY_SIZE"" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define ""ROW_CHAR_SIZE"" 128
#define ""COLUMN_CHAR_SIZE"" 64
#define ""SCREEN_LOCK"" 0x00
#define ""MUL_CONS"" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int ""LINE"" = 0;   // current line (ROW)
int ""COLUMN"" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if (""SCREEN_LOCK"" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == ""ROW_CHAR_SIZE"")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * ""COLUMN_CHAR_SIZE"")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * ""COLUMN_CHAR_SIZE"")
        return 1;
    if (col < 0 || col >= ""ROW_CHAR_SIZE"")
        return 1;

    ""LINE"" = line;
    ""COLUMN"" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = ""LINE"";
    vals[1] = ""COLUMN"";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if (""SCREEN_LOCK"" == 0)
    {
        if (line >= 8 * ""COLUMN_CHAR_SIZE"")
            return 1;
        if (col >= ""ROW_CHAR_SIZE"" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * ""COLUMN_CHAR_SIZE"")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == ""ROW_CHAR_SIZE"")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if (""SCREEN_LOCK"" == 0)
    {
        if (line < 0 || line >= 8 * ""COLUMN_CHAR_SIZE"")
            return 1;

        int A = ""IO_DISPLAY_START"" + ""ROW_CHAR_SIZE"" * line;
        for (int i = 0; i < ""ROW_CHAR_SIZE"" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if (""SCREEN_LOCK"" == 0)
    {
        int A = ""IO_DISPLAY_START"" + ""ROW_CHAR_SIZE"" * ""LINE"";
        for (int i = 0; i < ""ROW_CHAR_SIZE"" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if (""SCREEN_LOCK"" == 0)
    {

        if (c == '\n')
        {
            ""COLUMN"" = 0;
            ""LINE"" += 8;
            if (""LINE"" == 8 * ""COLUMN_CHAR_SIZE"")
            {
                ""LINE"" = 0;
                ""COLUMN"" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            ""COLUMN"" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            ""LINE"" += 8;
            if (""LINE"" >= 8 * ""COLUMN_CHAR_SIZE"")
            {
                ""LINE"" = 0;
                ""COLUMN"" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            ""COLUMN"" += 4;
            if (""COLUMN"" >= ""ROW_CHAR_SIZE"")
            {
                ""COLUMN"" = 0;
                ""LINE"" += 8;
                if (""LINE"" >= 8 * ""COLUMN_CHAR_SIZE"")
                {
                    ""LINE"" = 0;
                    ""COLUMN"" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == ""CTRL_CODE_BACKSPACE"")
        {
            if (""COLUMN"" == 0)
            {
                if (""LINE"" == 0)
                {
                    return 0;
                }
                else
                {
                    ""COLUMN"" = ""ROW_CHAR_SIZE"" - 1;
                    ""LINE"" -= 8;
                }
            }
            else
            {
                ""COLUMN""--;
            }

            int A = ""IO_DISPLAY_START"" + ""ROW_CHAR_SIZE"" * ""LINE"" + ""COLUMN"";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + ""ROW_CHAR_SIZE"" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = ""IO_DISPLAY_START"" + ""ROW_CHAR_SIZE"" * ""LINE"" + ""COLUMN""; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + ""ROW_CHAR_SIZE"" * i);
            }

            ""COLUMN""++;
            if (""COLUMN"" == ""ROW_CHAR_SIZE"")
            { // if the row is full
                ""COLUMN"" = 0;
                ""LINE"" += 8;
                return 0;
            }

            if (""LINE"" == 8 * ""COLUMN_CHAR_SIZE"")
            { // if the screen is full
                ""LINE"" = 0;
                ""COLUMN"" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if (""SCREEN_LOCK"" == 0)
    {

        if (line < 0 || line >= 8 * ""COLUMN_CHAR_SIZE"")
            return 1;
        if (col < 0 || col >= ""ROW_CHAR_SIZE"")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = ""IO_DISPLAY_START"" + ""ROW_CHAR_SIZE"" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + ""ROW_CHAR_SIZE"" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if (""SCREEN_LOCK"" == 0)
    {
        int A = ""IO_DISPLAY_START"" + (""COLUMN_CHAR_SIZE"" - 1) * 8 * ""ROW_CHAR_SIZE"";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if (""SCREEN_LOCK"" == 0)
    {

        ""LINE"" += 8;
        ""COLUMN"" = 0;

        int A = ""IO_DISPLAY_START"" + ""LINE"" * ""ROW_CHAR_SIZE"" + ""COLUMN"";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * ""ROW_CHAR_SIZE"" + j);
            }
        }

        ""LINE"" += 128;
        ""COLUMN"" = 0;

        if (""LINE"" >= 8 * ""COLUMN_CHAR_SIZE"")
        {
            ""LINE"" = 0;
            ""COLUMN"" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if (""SCREEN_LOCK"" == 0)
    {
        int A = ""IO_DISPLAY_START"";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < ""IO_DISPLAY_SIZE"" - ""ROW_CHAR_SIZE""; addr++) {
                char temp = mread_char(A + addr + ""ROW_CHAR_SIZE"");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < ""ROW_CHAR_SIZE"" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        ""LINE"" -= 8;
        if (""LINE"" < 0)
        {
            ""LINE"" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if (""SCREEN_LOCK"" == 0)
    {
        int A = ""IO_DISPLAY_START"";

        for (int j = 0;j < 8;j++) {
            for (int addr = ""IO_DISPLAY_SIZE"" - ""ROW_CHAR_SIZE""; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + ""ROW_CHAR_SIZE"");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < ""ROW_CHAR_SIZE"" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        ""LINE"" += 8;
        if (""LINE"" >= 8 * ""COLUMN_CHAR_SIZE"")
        {
            ""LINE"" = 8 * ""COLUMN_CHAR_SIZE"" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if (""SCREEN_LOCK"" == 0)
    {
        int A = ""IO_DISPLAY_START"" + ""IO_DISPLAY_SIZE"" - 1;
        for (int i = A; i >= ""IO_DISPLAY_START""; i--)
        {
            mwrite(0, i);
        }

        ""LINE"" = 0;
        ""COLUMN"" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if (""SCREEN_LOCK"" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = ""IO_DISPLAY_START"";
    int D = ""TEMP_START"";

    for (int i = 0; i < ""IO_DISPLAY_SIZE""; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = ""IO_DISPLAY_START"";
    int D = ""TEMP_START"";

    for (int i = 0; i < ""IO_DISPLAY_SIZE""; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    ""FILE""* file = fopen(filename, "r");
    if (file == ""NULL"")
    {
        return 1;
    }

    // ""TODO"": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    ""FILE""* file = fopen(filename, "w");
    for (int i = 0; i < ""MEMORY_SIZE""; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
/* font_map.h */
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/* keyboard_driver.c */
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef ""KEYBOARD_DRIVER_H""
#define ""KEYBOARD_DRIVER_H""







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = ""IO_KEYBOARD_START"";
    int end = ""IO_KEYBOARD_START"" + ""IO_KEYBOARD_SIZE"";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", ""IO_KEYBOARD_START"");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char(""IO_KEYBOARD_START"");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, ""IO_KEYBOARD_START"");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case ""CTRL_CODE_ENTER"": {
        // ""ENTR""
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case ""CTRL_CODE_ALT"": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case ""CTRL_CODE_SHIFT"": {
        // ""SHFT""
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // ""KEYBOARD_DRIVER_H""
/* easy.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time(""NULL""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* hard.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time(""NULL""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* med.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time(""NULL""));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* map.c */




void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < ""_INTERNAL_MAP_SIZE"";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= ""_INTERNAL_MAP_SIZE"") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= ""_INTERNAL_MAP_SIZE"") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= ""_INTERNAL_MAP_SIZE"") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return ""_INTERNAL_MAP_SIZE"";
}

void print_map(struct Map* map) {
    for (int index = 0;index < ""_INTERNAL_MAP_SIZE""; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
/* map.h */
#ifndef ""INTERNAL_MAP""
#define ""INTERNAL_MAP""

#define ""_INTERNAL_MAP_SIZE"" 30

struct Map {
    int _map[""_INTERNAL_MAP_SIZE""];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 
/* rand_gen.c */


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
/* rand_gen.h */
#ifndef ""RAND_GEN_H""
#define ""RAND_GEN_H""



void set_seed(int seed);
int rand(void);

#endif

/* a.out */
/* global.h */
/**
 * Global variables, like IO display size, etc.
 * 
 * | OS | stack | heap | display io map | keyboard io map | font map | temp |
 * 
 * Total: 256KB
 * 
 * OS : 100KB
 * stack: 10KB 
 * heap: 50KB
 * Display io map: 64KB
 * keyboard io map: 1B
 * fontmap: 2KB
 * temp: 38KB
*/

#define "MEMORY_SIZE" 1024 * 256
#define "OS_SIZE" 1024 * 100
#define "OS_START" 0
#define "OS_END" "OS_START" + "OS_SIZE"
#define "STACK_SIZE" 1024 * 10
#define "STACK_START" "OS_END"
#define "STACK_END" "STACK_START" + "STACK_SIZE"
#define "HEAP_SIZE" 1024 * 50
#define "HEAP_START" "STACK_END"
#define "HEAP_END" "HEAP_START" + "HEAP_SIZE"
#define "IO_DISPLAY_SIZE" 1024 * 64
#define "IO_DISPLAY_START" "HEAP_END"
#define "IO_DISPLAY_END" "IO_DISPLAY_START" + "IO_DISPLAY_SIZE"
#define "IO_KEYBOARD_SIZE" 1

#define "IO_KEYBOARD_START" "IO_DISPLAY_END"
// seekto=229376 in memory.txt

#define "IO_KEYBOARD_END" "IO_KEYBOARD_START" + "IO_KEYBOARD_SIZE"
#define "FONTMAP_SIZE" 1024 * 2
#define "FONTMAP_START" "IO_KEYBOARD_END"
#define "FONTMAP_END" "FONTMAP_START" + "FONTMAP_SIZE"
#define "TEMP_SIZE" 1024 * 38
#define "TEMP_START" "FONTMAP_END"
#define "TEMP_END" "TEMP_START" + "TEMP_SIZE"

// Keyboard constants
#define "KEYBOARD_WAIT_TIME" 5

//Control codes

#define "CTRL_CODE_BACKSPACE" 0x08
#define "CTRL_CODE_ENTER" 0x0A

#define "CTRL_CODE_CTRL" 0x11
#define "CTRL_CODE_ALT" 0x12
#define "CTRL_CODE_SHIFT" 0x10
#define "CTRL_CODE_CAPSLOCK" 0x14
#define "CTRL_CODE_BACKSPACE" 0x08
/* init.c */
/**
 * Initialize the kernel.
*/

#ifndef "INIT_H"
#define "INIT_H"








void init_memory()
{
    for (int i = 0; i < "MEMORY_SIZE"; i++)
    {
        mwrite(0, i);
    }
}


#endif
/* memory.c */











"FILE"* fp;

// char => to bits 
void __load_char_as_bits(char c, char* out) {
    int g = c;
    for (int i = 0; i < 8;i++) {
        out[i] = (g & 1) + '0';
        g >>= 1;
    }
}

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out) {

    assert(addr >= 0 && addr < "MEMORY_SIZE");
    fseek(fp, addr * 9, "SEEK_SET");
    fread(out, sizeof(char), 9, fp);

    // assert(out[8] == '\n');
}

char mread_char(int addr) {
    char out[9];
    mread(addr, out);

    char g;
    for (int i = 0;i < 8;i++) {
        g <<= 1;
        g |= out[i] - '0';
    }

    return g;
}

void mwrite(char c, int addr) {
    assert(addr >= 0 && addr < "MEMORY_SIZE");  // check if addr is valid
    fseek(fp, addr * 9, "SEEK_SET");
    char line[9];
    line[8] = '\n';
    __load_char_as_bits(c, line);
    fwrite(line, sizeof(char), 9, fp);
    fflush(fp);
}

/**
 * @brief initialize the memory. just create a memory file filled with zeroes
 *
*/
void minit() {
    fp = fopen(filename, "r+");
    if (fp == "NULL") {
        fp = fopen(filename, "w+");

        for (int i = 0;i < "MEMORY_SIZE";i++) {
            char line[9];
            line[8] = '\n';
            __load_char_as_bits(0, line);

            fwrite(line, sizeof(char), 9, fp);
        }
    }
}

void mclose() {
    fclose(fp);
}

/* memory.h */
/**
 * \brief Memory module consists of functions for memory management.
 * Functiolaity includes memory initialization, copying, setting, allocation and freeing.
*/

#ifndef "MEMORY_H"
#define "MEMORY_H"





char* filename = "memory.txt";
// don't use this directly, use the macros below
char memory["MEMORY_SIZE"];

/**
 * @brief write into file at specific col, row
 *  read from file at specific row, col
*/

// char => to bits 
void __load_char_as_bits(char c, char* out);

// read a single character from file
// note: the file is a text file, so we need to convert the char to bits in out
void mread(int addr, char* out);
char mread_char(int addr);
void mwrite(char c, int addr);
void minit();

#endif // "MEMORY_H"
/* memory.txt */
/* os.c */
/**
 * OS: Operating System which can execute the a terminal based user program
 *
*/

#ifndef "OS_H"
#define "OS_H"















/**
 * Start the OS
*/

void os_start() {
    // initialize the kernel
    minit();
}

// function to capture data from memory and update the display
void terminal() {
    // init_memory();
    clear_screen();
    while (true) {
        // get input from keyboard
        char input = keyboard_get_input();
        printf("got input: %c\n", input);

        write_char(input);
    }
}

void display_test() {
    clear_screen();
    write_string("Team "RISC" V1\n\n\n", 16);
    write_string_at("Welcome to Flex OS\n\n", 20, 24, 0);

    set_cursor_pos(32, 0);
    write_char('\n');
    write_string("Namo 2024!\n\n", 12);
    write_string("India lifts the World Cup after 28 years!", 42);

    int val[2];

    write_char('\n');
    write_face(font_2);

    get_cursor_pos(val);

    int line = val[0];
    int col = val[1];

    write_string_at("Hindu", 5, line - 104, col + 20);
    write_string_at_col("Bharat", 6, line - 112, col + 35);

    get_cursor_pos(val);
    line = val[0];

    set_cursor_pos(line - 8, 0);

    write_char('\n');
    write_face(font_0);
    write_char('\n');
    write_face(font_1);
    write_char('\n');

    write_string("Kakkos: \f", 9);
    get_cursor_pos(val);
    line = val[0];
    write_char('\r');
    write_zero_line(line);
    write_string("CS 342", 6);
    write_char("CTRL_CODE_BACKSPACE");

    write_char('\t');
    write_string("After Tah", 9);

    // display_down();
    // display_down();
    // display_down();
    display_up();
}



int main() {
    os_start();
    // display_test();
    terminal();
    return 0;
}

#endif
/* os_senior.tmp */
/* display_driver.c */





/**
 * 1024 X 1024 bits
 *
 * 128 ("CHARS") X 64
 *
 * 128 characters row wise
 * 64 characters column wise
 *
 * "IO_DISPLAY_START" = 0
 * display_start = 0
 * "IO_DISPLAY_SIZE" = 65536 lines (size of display io in bits map divided by 8)
 * display_end = 65536
 * keyboard_start = 65537
 *
 * 128 X 64 X 8 bits = 65536 bits
 *
 * Memory size: 256 kB
 *
 *  display => 64kB
 *  fontmap => 2kB
 *  temp    => 25kB
 *
 * Fontmap:
 *  128 -> 1kilo byte
 *  256 -> 2kilo bytes
 *
 *  presently we have support for 128 ascii codes, but we have reserved other 128 for future purpose.
 *
 */






#define "ROW_CHAR_SIZE" 128
#define "COLUMN_CHAR_SIZE" 64
#define "SCREEN_LOCK" 0x00
#define "MUL_CONS" 9

const int max_com_len = 10; // max command length

// current path in the OS
char path[128];

int "LINE" = 0;   // current line (ROW)
int "COLUMN" = 0; // current column

int focus_mode = 0;
int focus_mode_col = 0;

// prototypes
int write_char(char c);
int write_char_at(char c, int line, int col);
void save_screen();

/**
 * @brief write string array in to the display location currently at.
 * @returns returns 0 on success, otherwise failure. Failure occurs when the fontmap doesn't exist
 * @note supports word wrapping
 */
int write_string(char* msg, int len)
{
    if ("SCREEN_LOCK" == 0)
    {
        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char(msg[i]);

            if (g != 0)
            {
                return g;
            }
        }
        return 0;
    }
}

int write_string_at(char* msg, int len, int line, int col)
{
    int g = 0;
    for (int i = 0; i < len; i++)
    {
        g = write_char_at(msg[i], line, col);
        if (g != 0)
        {
            return g;
        }

        col++;
        if (col == "ROW_CHAR_SIZE")
        {
            col = 0;
            line += 8;
        }

        if (line == 8 * "COLUMN_CHAR_SIZE")
        {
            line = 0;
            col = 0;

            return 1;
        }
    }
    return 0;
}

int set_cursor_pos(int line, int col)
{
    if (line < 0 || line >= 8 * "COLUMN_CHAR_SIZE")
        return 1;
    if (col < 0 || col >= "ROW_CHAR_SIZE")
        return 1;

    "LINE" = line;
    "COLUMN" = col;

    return 0;
}

void get_cursor_pos(int* vals)
{
    vals[0] = "LINE";
    vals[1] = "COLUMN";
}

int write_string_at_col(char* msg, int len, int line, int col)
{
    if ("SCREEN_LOCK" == 0)
    {
        if (line >= 8 * "COLUMN_CHAR_SIZE")
            return 1;
        if (col >= "ROW_CHAR_SIZE" || col < 0)
            return 1;

        int g = 0;
        for (int i = 0; i < len; i++)
        {
            g = write_char_at(msg[i], line, col);
            if (g != 0)
            {
                return g;
            }

            line += 8;

            if (line == 8 * "COLUMN_CHAR_SIZE")
            {
                line = 0;
                col = 0;

                return 1;
            }

            if (col == "ROW_CHAR_SIZE")
            {
                col = 0;
                line += 8;
            }
        }
    }

    return 1;
}

int write_zero_line_at(int line)
{
    if ("SCREEN_LOCK" == 0)
    {
        if (line < 0 || line >= 8 * "COLUMN_CHAR_SIZE")
            return 1;

        int A = "IO_DISPLAY_START" + "ROW_CHAR_SIZE" * line;
        for (int i = 0; i < "ROW_CHAR_SIZE" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

int write_zero_line()
{
    if ("SCREEN_LOCK" == 0)
    {
        int A = "IO_DISPLAY_START" + "ROW_CHAR_SIZE" * "LINE";
        for (int i = 0; i < "ROW_CHAR_SIZE" * 8; i++)
        {
            mwrite(0, A + i);
        }

        return 0;
    }

    return 1;
}

/**
 * @brief write_char writes a character included in fontmap at the last location
 * @note takes care of word wrapping
 * @returns 1 if not able to write else 0
 */
int write_char(char c)
{
    // use write and read from mem.c
    if ("SCREEN_LOCK" == 0)
    {

        if (c == '\n')
        {
            "COLUMN" = 0;
            "LINE" += 8;
            if ("LINE" == 8 * "COLUMN_CHAR_SIZE")
            {
                "LINE" = 0;
                "COLUMN" = 0;

                return 1;
            }

            return 0;
        }
        else if (c == '\r')
        {
            "COLUMN" = 0;
            return 0;
        }
        else if (c == '\f')
        {
            "LINE" += 8;
            if ("LINE" >= 8 * "COLUMN_CHAR_SIZE")
            {
                "LINE" = 0;
                "COLUMN" = 0;
                return 1;
            }

            return 0;
        }
        else if (c == '\t')
        {
            "COLUMN" += 4;
            if ("COLUMN" >= "ROW_CHAR_SIZE")
            {
                "COLUMN" = 0;
                "LINE" += 8;
                if ("LINE" >= 8 * "COLUMN_CHAR_SIZE")
                {
                    "LINE" = 0;
                    "COLUMN" = 0;
                    return 1;
                }
            }

            return 0;
        }
        else if (c == "CTRL_CODE_BACKSPACE")
        {
            if ("COLUMN" == 0)
            {
                if ("LINE" == 0)
                {
                    return 0;
                }
                else
                {
                    "COLUMN" = "ROW_CHAR_SIZE" - 1;
                    "LINE" -= 8;
                }
            }
            else
            {
                "COLUMN"--;
            }

            int A = "IO_DISPLAY_START" + "ROW_CHAR_SIZE" * "LINE" + "COLUMN";
            for (int i = 0; i < 8; i++)
            {
                mwrite(0, A + "ROW_CHAR_SIZE" * i);
            }

            return 0;
        }
        else
        {
            char font[8];
            for (int i = 0; i < 8; i++)
            {
                font[i] = font_map[c][i];
            }

            int A = "IO_DISPLAY_START" + "ROW_CHAR_SIZE" * "LINE" + "COLUMN"; // location of the first character in the line
            for (int i = 0; i < 8; i++)
            {
                mwrite(font[i], A + "ROW_CHAR_SIZE" * i);
            }

            "COLUMN"++;
            if ("COLUMN" == "ROW_CHAR_SIZE")
            { // if the row is full
                "COLUMN" = 0;
                "LINE" += 8;
                return 0;
            }

            if ("LINE" == 8 * "COLUMN_CHAR_SIZE")
            { // if the screen is full
                "LINE" = 0;
                "COLUMN" = 0;

                return 1;
            }

            return 0;
        }
    }

    return 1;
}

int write_char_at(char c, int line, int col)
{
    if ("SCREEN_LOCK" == 0)
    {

        if (line < 0 || line >= 8 * "COLUMN_CHAR_SIZE")
            return 1;
        if (col < 0 || col >= "ROW_CHAR_SIZE")
            return 1;

        char font[8];
        for (int i = 0; i < 8; i++)
        {
            font[i] = font_map[c][i];
        }

        int A = "IO_DISPLAY_START" + "ROW_CHAR_SIZE" * line + col; // location of the first character in the line
        for (int i = 0; i < 8; i++)
        {
            mwrite(font[i], A + "ROW_CHAR_SIZE" * i);
        }

        return 0;
    }

    return 1;
}

void write_char_last_line(char c)
{
    if ("SCREEN_LOCK" == 0)
    {
        int A = "IO_DISPLAY_START" + ("COLUMN_CHAR_SIZE" - 1) * 8 * "ROW_CHAR_SIZE";

        // todo: write the character at the last line
    }
}

void write_face(char font[128][16])
{
    if ("SCREEN_LOCK" == 0)
    {

        "LINE" += 8;
        "COLUMN" = 0;

        int A = "IO_DISPLAY_START" + "LINE" * "ROW_CHAR_SIZE" + "COLUMN";

        for (int i = 0; i < 128; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                mwrite(font[i][j], A + i * "ROW_CHAR_SIZE" + j);
            }
        }

        "LINE" += 128;
        "COLUMN" = 0;

        if ("LINE" >= 8 * "COLUMN_CHAR_SIZE")
        {
            "LINE" = 0;
            "COLUMN" = 0;
        }
    }
}

/**
 * \brief Shifts the entire display map by one 1 unit upwards
 */
int display_up()
{
    if ("SCREEN_LOCK" == 0)
    {
        int A = "IO_DISPLAY_START";
        for (int j = 0;j < 8;j++) {
            for (int addr = 0; addr < "IO_DISPLAY_SIZE" - "ROW_CHAR_SIZE"; addr++) {
                char temp = mread_char(A + addr + "ROW_CHAR_SIZE");
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr);
            }
        }

        // clear the last line (A)
        for (int i = 0; i < "ROW_CHAR_SIZE" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        "LINE" -= 8;
        if ("LINE" < 0)
        {
            "LINE" = 0;
        }

        return 0;
    }

    return 1;
}

/**
 * \brief Shifts the entire display map by one 1 unit downwards
 *
 */
int display_down()
{
    if ("SCREEN_LOCK" == 0)
    {
        int A = "IO_DISPLAY_START";

        for (int j = 0;j < 8;j++) {
            for (int addr = "IO_DISPLAY_SIZE" - "ROW_CHAR_SIZE"; addr >= 0; addr--) {
                char temp = mread_char(A + addr);
                // reverse temp 
                char temp2 = 0;

                for (int i = 0; i < 8; i++) {
                    if ((temp >> i) & 1) {
                        temp2 |= (1 << (7 - i));
                    }
                }

                mwrite(temp2, A + addr + "ROW_CHAR_SIZE");
            }
        }
        // clear the first line (A)
        for (int i = 0; i < "ROW_CHAR_SIZE" * 8; i++)
        {
            mwrite(0, A + i);
        }

        // update the current line
        "LINE" += 8;
        if ("LINE" >= 8 * "COLUMN_CHAR_SIZE")
        {
            "LINE" = 8 * "COLUMN_CHAR_SIZE" - 1;
        }

        return 0;
    }

    return 1;
}

// reset the entire display
void clear_screen()
{
    if ("SCREEN_LOCK" == 0)
    {
        int A = "IO_DISPLAY_START" + "IO_DISPLAY_SIZE" - 1;
        for (int i = A; i >= "IO_DISPLAY_START"; i--)
        {
            mwrite(0, i);
        }

        "LINE" = 0;
        "COLUMN" = 0;
    }
}

/**
 * commands supported:
 * :xx => not supported becoz we need directory structures
 *
 *
 * 1. q --> exit focus mode
 * 2. w --> save the file
 * 3. wq --> save and exit
 * 4. x --> save and exit
 * 5. i --> insert mode
 * 6. v --> visual mode
 * 7. r --> read mode
 */

 // @brief: display info panel during focus mode (as seen in vim)
 // enable vim like functionality
 // store all the present content and show vim like functionality
int focus_info_panel()
{
    if ("SCREEN_LOCK" == 0)
    {
        save_screen();
        clear_screen();
        focus_mode = 1;
        focus_mode_col = 0;

        int command_mode = 0;

        int visual_mode = 1;
        int edit_mode = 0;

        while (true)
        {
            char input = keyboard_get_input();
            input = manipulate_input(input);

            if (command_mode == 0)
            {
                if (isEscape(input))
                {
                    command_mode = 1;
                }

                if (visual_mode == 1)
                {
                    if (input == 'i')
                    {
                        visual_mode = 0;
                        edit_mode = 1;
                    }
                }
                else if (edit_mode == 1)
                {
                    // non command mode and write to the display edit screen
                    char content_to_write[4];
                    convert_keyinput_to_string(input, content_to_write);
                    for (int i = 0; i < 4; i++)
                    {
                        if (content_to_write[i] != '\0')
                        {
                            write_char(content_to_write[i]);
                        }
                    }
                }
            }
            else
            {
                // qf: exit focus mode
                // qc: exit command mode and return to visual mode
                // w: save the file
                // wq: save and exit focus mode
            }
        }
    }

    return 1;
}

// save only the visible content of the display while switching to focus mode
void save_screen()
{
    int A = "IO_DISPLAY_START";
    int D = "TEMP_START";

    for (int i = 0; i < "IO_DISPLAY_SIZE"; i++)
    {
        char temp = mread_char(A + i);
        mwrite(D + i, temp);
    }
}

// retrieve the saved screen from the memory after exiting focus mode
void retrieve_screen()
{
    int A = "IO_DISPLAY_START";
    int D = "TEMP_START";

    for (int i = 0; i < "IO_DISPLAY_SIZE"; i++)
    {
        char temp = mread_char(D + i);
        mwrite(A + i, temp);
    }
}

int set_fontmap(char* filename, int len)
{
    "FILE"* file = fopen(filename, "r");
    if (file == "NULL")
    {
        return 1;
    }

    // "TODO": check if the file is valid and set the fontmap accordingly
    return 0;
}

void save_memory(char* filename, int len)
{
    "FILE"* file = fopen(filename, "w");
    for (int i = 0; i < "MEMORY_SIZE"; i++)
    {
        char temp[9];

        // Initialize the temp array to 0.
        for (int j = 0; j < 8; j++)
        {
            temp[j] = 0;
        }

        for (int j = 0; j < 8; j++)
        {
            if ((memory[i] >> j) & 1)
            {
                temp[7 - j] = '1';
            }
            else
            {
                temp[7 - j] = '0';
            }
        }

        fwrite(temp, sizeof(char), strlen(temp), file);
        char* newline = "\n";
        fwrite(newline, sizeof(char), strlen(newline), file);
    }

    fclose(file);
}

// int main()
// {
//     init_memory();
//     char* mem_file = "some.txt";
//     save_memory(mem_file, sizeof(mem_file));
//     return 0;
// }
/* font_map.h */
char font_map[128][8] = {
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0000 (nul)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0001
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0002
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0003
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0004
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0005
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0006
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0007
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0008
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0009
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+000F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0010
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0011
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0012
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0013
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0014
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0015
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0016
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0017
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0018
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0019
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001A
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001B
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001C
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001D
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001E
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+001F
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0020 (space)
    {0x18, 0x3C, 0x3C, 0x18, 0x18, 0x00, 0x18, 0x00}, // U+0021 (!)
    {0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0022 (")
    {0x36, 0x36, 0x7F, 0x36, 0x7F, 0x36, 0x36, 0x00}, // U+0023 (#)
    {0x0C, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x0C, 0x00}, // U+0024 ($)
    {0x00, 0x63, 0x33, 0x18, 0x0C, 0x66, 0x63, 0x00}, // U+0025 (%)
    {0x1C, 0x36, 0x1C, 0x6E, 0x3B, 0x33, 0x6E, 0x00}, // U+0026 (&)
    {0x06, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0027 (')
    {0x18, 0x0C, 0x06, 0x06, 0x06, 0x0C, 0x18, 0x00}, // U+0028 (()
    {0x06, 0x0C, 0x18, 0x18, 0x18, 0x0C, 0x06, 0x00}, // U+0029 ())
    {0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00}, // U+002A (*)
    {0x00, 0x0C, 0x0C, 0x3F, 0x0C, 0x0C, 0x00, 0x00}, // U+002B (+)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+002C (,)
    {0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00}, // U+002D (-)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+002E (.)
    {0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00}, // U+002F (/)
    {0x3E, 0x63, 0x73, 0x7B, 0x6F, 0x67, 0x3E, 0x00}, // U+0030 (0)
    {0x0C, 0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00}, // U+0031 (1)
    {0x1E, 0x33, 0x30, 0x1C, 0x06, 0x33, 0x3F, 0x00}, // U+0032 (2)
    {0x1E, 0x33, 0x30, 0x1C, 0x30, 0x33, 0x1E, 0x00}, // U+0033 (3)
    {0x38, 0x3C, 0x36, 0x33, 0x7F, 0x30, 0x78, 0x00}, // U+0034 (4)
    {0x3F, 0x03, 0x1F, 0x30, 0x30, 0x33, 0x1E, 0x00}, // U+0035 (5)
    {0x1C, 0x06, 0x03, 0x1F, 0x33, 0x33, 0x1E, 0x00}, // U+0036 (6)
    {0x3F, 0x33, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x00}, // U+0037 (7)
    {0x1E, 0x33, 0x33, 0x1E, 0x33, 0x33, 0x1E, 0x00}, // U+0038 (8)
    {0x1E, 0x33, 0x33, 0x3E, 0x30, 0x18, 0x0E, 0x00}, // U+0039 (9)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x00}, // U+003A (:)
    {0x00, 0x0C, 0x0C, 0x00, 0x00, 0x0C, 0x0C, 0x06}, // U+003B (;)
    {0x18, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x18, 0x00}, // U+003C (<)
    {0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00}, // U+003D (=)
    {0x06, 0x0C, 0x18, 0x30, 0x18, 0x0C, 0x06, 0x00}, // U+003E (>)
    {0x1E, 0x33, 0x30, 0x18, 0x0C, 0x00, 0x0C, 0x00}, // U+003F (?)
    {0x3E, 0x63, 0x7B, 0x7B, 0x7B, 0x03, 0x1E, 0x00}, // U+0040 (@)
    {0x0C, 0x1E, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x00}, // U+0041 (A)
    {0x3F, 0x66, 0x66, 0x3E, 0x66, 0x66, 0x3F, 0x00}, // U+0042 (B)
    {0x3C, 0x66, 0x03, 0x03, 0x03, 0x66, 0x3C, 0x00}, // U+0043 (C)
    {0x1F, 0x36, 0x66, 0x66, 0x66, 0x36, 0x1F, 0x00}, // U+0044 (D)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x46, 0x7F, 0x00}, // U+0045 (E)
    {0x7F, 0x46, 0x16, 0x1E, 0x16, 0x06, 0x0F, 0x00}, // U+0046 (F)
    {0x3C, 0x66, 0x03, 0x03, 0x73, 0x66, 0x7C, 0x00}, // U+0047 (G)
    {0x33, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x00}, // U+0048 (H)
    {0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0049 (I)
    {0x78, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E, 0x00}, // U+004A (J)
    {0x67, 0x66, 0x36, 0x1E, 0x36, 0x66, 0x67, 0x00}, // U+004B (K)
    {0x0F, 0x06, 0x06, 0x06, 0x46, 0x66, 0x7F, 0x00}, // U+004C (L)
    {0x63, 0x77, 0x7F, 0x7F, 0x6B, 0x63, 0x63, 0x00}, // U+004D (M)
    {0x63, 0x67, 0x6F, 0x7B, 0x73, 0x63, 0x63, 0x00}, // U+004E (N)
    {0x1C, 0x36, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00}, // U+004F (O)
    {0x3F, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00}, // U+0050 (P)
    {0x1E, 0x33, 0x33, 0x33, 0x3B, 0x1E, 0x38, 0x00}, // U+0051 (Q)
    {0x3F, 0x66, 0x66, 0x3E, 0x36, 0x66, 0x67, 0x00}, // U+0052 (R)
    {0x1E, 0x33, 0x07, 0x0E, 0x38, 0x33, 0x1E, 0x00}, // U+0053 (S)
    {0x3F, 0x2D, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0054 (T)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0x00}, // U+0055 (U)
    {0x33, 0x33, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0056 (V)
    {0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00}, // U+0057 (W)
    {0x63, 0x63, 0x36, 0x1C, 0x1C, 0x36, 0x63, 0x00}, // U+0058 (X)
    {0x33, 0x33, 0x33, 0x1E, 0x0C, 0x0C, 0x1E, 0x00}, // U+0059 (Y)
    {0x7F, 0x63, 0x31, 0x18, 0x4C, 0x66, 0x7F, 0x00}, // U+005A (Z)
    {0x1E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x1E, 0x00}, // U+005B ([)
    {0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x40, 0x00}, // U+005C (\)
    {0x1E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x1E, 0x00}, // U+005D (])
    {0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00}, // U+005E (^)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF}, // U+005F (_)
    {0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+0060 (`)
    {0x00, 0x00, 0x1E, 0x30, 0x3E, 0x33, 0x6E, 0x00}, // U+0061 (a)
    {0x07, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00}, // U+0062 (b)
    {0x00, 0x00, 0x1E, 0x33, 0x03, 0x33, 0x1E, 0x00}, // U+0063 (c)
    {0x38, 0x30, 0x30, 0x3e, 0x33, 0x33, 0x6E, 0x00}, // U+0064 (d)
    {0x00, 0x00, 0x1E, 0x33, 0x3f, 0x03, 0x1E, 0x00}, // U+0065 (e)
    {0x1C, 0x36, 0x06, 0x0f, 0x06, 0x06, 0x0F, 0x00}, // U+0066 (f)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0067 (g)
    {0x07, 0x06, 0x36, 0x6E, 0x66, 0x66, 0x67, 0x00}, // U+0068 (h)
    {0x0C, 0x00, 0x0E, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+0069 (i)
    {0x30, 0x00, 0x30, 0x30, 0x30, 0x33, 0x33, 0x1E}, // U+006A (j)
    {0x07, 0x06, 0x66, 0x36, 0x1E, 0x36, 0x67, 0x00}, // U+006B (k)
    {0x0E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00}, // U+006C (l)
    {0x00, 0x00, 0x33, 0x7F, 0x7F, 0x6B, 0x63, 0x00}, // U+006D (m)
    {0x00, 0x00, 0x1F, 0x33, 0x33, 0x33, 0x33, 0x00}, // U+006E (n)
    {0x00, 0x00, 0x1E, 0x33, 0x33, 0x33, 0x1E, 0x00}, // U+006F (o)
    {0x00, 0x00, 0x3B, 0x66, 0x66, 0x3E, 0x06, 0x0F}, // U+0070 (p)
    {0x00, 0x00, 0x6E, 0x33, 0x33, 0x3E, 0x30, 0x78}, // U+0071 (q)
    {0x00, 0x00, 0x3B, 0x6E, 0x66, 0x06, 0x0F, 0x00}, // U+0072 (r)
    {0x00, 0x00, 0x3E, 0x03, 0x1E, 0x30, 0x1F, 0x00}, // U+0073 (s)
    {0x08, 0x0C, 0x3E, 0x0C, 0x0C, 0x2C, 0x18, 0x00}, // U+0074 (t)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00}, // U+0075 (u)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x1E, 0x0C, 0x00}, // U+0076 (v)
    {0x00, 0x00, 0x63, 0x6B, 0x7F, 0x7F, 0x36, 0x00}, // U+0077 (w)
    {0x00, 0x00, 0x63, 0x36, 0x1C, 0x36, 0x63, 0x00}, // U+0078 (x)
    {0x00, 0x00, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x1F}, // U+0079 (y)
    {0x00, 0x00, 0x3F, 0x19, 0x0C, 0x26, 0x3F, 0x00}, // U+007A (z)
    {0x38, 0x0C, 0x0C, 0x07, 0x0C, 0x0C, 0x38, 0x00}, // U+007B ({)
    {0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x00}, // U+007C (|)
    {0x07, 0x0C, 0x0C, 0x38, 0x0C, 0x0C, 0x07, 0x00}, // U+007D (})
    {0x6E, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // U+007E (~)
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // U+007F
};
/* keyboard_driver.c */
/**
 * Keyboard driver: Keyboard driver for the OS has only  one function,
 * that is to get the input from the keyboard.
 *
 * Presently, the keyboard driver is not capable of handling meta keys like capslock, numlock, etc.
 * but it can handle ctrl, alt, shift, etc.
 *
*/

#ifndef "KEYBOARD_DRIVER_H"
#define "KEYBOARD_DRIVER_H"







/**
 * \brief Initializes keyboard
*/
void keyboard_init() {
    int start = "IO_KEYBOARD_START";
    int end = "IO_KEYBOARD_START" + "IO_KEYBOARD_SIZE";
    for (int i = start;i < end;i++) {
        mwrite('\0', i);
    }
}

char keyboard_get_input() {
    char input = 0;
    bool can_break = false;

    // printf("Keyboard start: %d\n", "IO_KEYBOARD_START");

    while (true) {
        can_break = false;

        mclose();
        minit();
        char f = mread_char("IO_KEYBOARD_START");
        // printf("Keyboard input: %c\n", f);
        if (f != 0) {
            input = f;
            mwrite(0, "IO_KEYBOARD_START");
            can_break = true;

            // removed every logic for meta keys because 
            // i highly doubt that it will work due to continuous key press
            // generated by the keyboard

            if (can_break) break;
        }
    }

    // mclose();
    return input;
}

void convert_keyinput_to_string(char input, char* out) {
    switch (input) {
    case "CTRL_CODE_ENTER": {
        // "ENTR"
        out[0] = 'E';
        out[1] = 'N';
        out[2] = 'T';
        out[3] = 'R';
    }

    case "CTRL_CODE_ALT": {
        // ALT
        out[0] = 'A';
        out[1] = 'L';
        out[2] = 'T';
        out[3] = '\0';
    }

    case "CTRL_CODE_SHIFT": {
        // "SHFT"
        out[0] = 'S';
        out[1] = 'H';
        out[2] = 'F';
        out[3] = 'T';
    }

    default: {
        out[0] = input;
        out[1] = '\0';
    }
    }
}

char manipulate_input(char c) {
    return c;
}

bool isEscape(char input) {
    return input == 0x1B;
}

#endif // "KEYBOARD_DRIVER_H"
/* easy.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (!makeMove(row, col, computer));
}

int main() {
    srand(time("NULL"));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* hard.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int minimax(char board[3][3], int depth, int isMaximizing) {
    char result = isGameOver(computer) ? 1 : isGameOver(player) ? -1 : isBoardFull() ? 0 : 2;
    if (result != 2) return result;

    int bestScore = isMaximizing ? -1000 : 1000;
    char currentPlayer = isMaximizing ? computer : player;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = currentPlayer;
                int score = minimax(board, depth + 1, !isMaximizing);
                board[i][j] = ' ';
                if (isMaximizing) {
                    if (score > bestScore) bestScore = score;
                } else {
                    if (score < bestScore) bestScore = score;
                }
            }
        }
    }

    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove[2] = {-1, -1};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                int score = minimax(board, 0, 0);
                board[i][j] = ' ';
                if (score > bestScore) {
                    bestScore = score;
                    bestMove[0] = i;
                    bestMove[1] = j;
                }
            }
        }
    }

    makeMove(bestMove[0], bestMove[1], computer);
}

int main() {
    srand(time("NULL"));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        computerMove();

        if (isGameOver(computer)) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* med.c */




char board[3][3];
char player = 'X', computer = 'O';

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("  1 2 3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  -----\n");
    }
    printf("\n");
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int isGameOver(char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;
    return 0;
}

int makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        return 0;
    board[row][col] = player;
    return 1;
}

int computerMove() {
    // Check for a win or block the player from winning
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = computer;
                if (isGameOver(computer)) {
                    return 1; // Computer wins
                }
                board[i][j] = ' '; // Undo the move
            }
        }
    }

    // Try to take the center if it's available
    if (board[1][1] == ' ') {
        board[1][1] = computer;
        return 0; // No win yet
    }

    // Try to take a corner
    const int corners[4][2] = {{0, 0}, {0, 2}, {2, 0}, {2, 2}};
    for (int i = 0; i < 4; i++) {
        int row = corners[i][0];
        int col = corners[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    // Take any available edge
    const int edges[4][2] = {{0, 1}, {1, 0}, {1, 2}, {2, 1}};
    for (int i = 0; i < 4; i++) {
        int row = edges[i][0];
        int col = edges[i][1];
        if (board[row][col] == ' ') {
            board[row][col] = computer;
            return 0; // No win yet
        }
    }

    return 0; // No moves left (shouldn't reach this point)
}

int main() {
    srand(time("NULL"));
    initializeBoard();
    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        printBoard();
        int row, col;

        printf("Enter your move (row and column, e.g., 1 2): ");
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;

        if (!makeMove(row, col, player)) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (isGameOver(player)) {
            printBoard();
            printf("Congratulations! You win!\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        if (computerMove()) {
            printBoard();
            printf("Computer wins! You lose.\n");
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}

/* map.c */




void map_init(struct Map* map) {

    if (map == 0) return;

    for (int i = 0;i < "_INTERNAL_MAP_SIZE";i++) {
        map->_map[i] = -1;
    }

    map->_size = 0;
}

int map_insert_at(struct Map* map, int index, int value) {
    if (map == 0) return 1;

    if (index < 0 || index >= "_INTERNAL_MAP_SIZE") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = value;
    if (prev == -1) map->_size++;

    return 0;
}
/**
 * \brief to find value at index
 * \note returns >=0 value if no error , else it returns -1
*/
int map_find_at(struct Map* map, int index) {
    if (map == 0) return -1;

    if (index < 0 || index >= "_INTERNAL_MAP_SIZE") {
        return -1;
    }

    return map->_map[index];
}

int  map_delete_at(struct Map* map, int index) {
    if (map == 0) return 1;

    if (index < 0 || index >= "_INTERNAL_MAP_SIZE") {
        return 1;
    }

    int prev = map->_map[index];
    map->_map[index] = -1;

    if (prev != -1) map->_size--;
    return 0;
}

int map_size(struct Map* map) {
    if (map == 0) return 1;

    return map->_size;
}

int map_capacity() {
    return "_INTERNAL_MAP_SIZE";
}

void print_map(struct Map* map) {
    for (int index = 0;index < "_INTERNAL_MAP_SIZE"; index++) {
        printf("index: %d value: %d\n", index, map->_map[index]);
    }
}
/* map.h */
#ifndef "INTERNAL_MAP"
#define "INTERNAL_MAP"

#define "_INTERNAL_MAP_SIZE" 30

struct Map {
    int _map["_INTERNAL_MAP_SIZE"];
    int _size;
};

void map_init(struct Map* map);
int map_insert_at(struct Map* map, int index, int value);
int map_find_at(struct Map* map, int index);
int  map_delete_at(struct Map* map, int index);
int map_size(struct Map* map);
int map_capacity();


#endif 
/* rand_gen.c */


int rand_lfsr;
int rand_bit;

int rand_engine = 0xACE1u;

void set_seed(int seed) {
    rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
    rand_lfsr = rand_engine;
}

int rand() {
    rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
    rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

    return rand_lfsr%100;
}
/* rand_gen.h */
#ifndef "RAND_GEN_H"
#define "RAND_GEN_H"



void set_seed(int seed);
int rand(void);

#endif
