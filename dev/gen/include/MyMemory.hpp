#ifndef MY_MEMORY_HPP
#define MY_MEMORY_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <tuple>

class MyMemory {
public:
    MyMemory(char zero, char one, std::string filename);
    ~MyMemory();

    void init();
    std::string string_from_int(int value);
    void set_at(int addr, int value);
    std::string get_at(int addr);
    std::pair<int, int> rowcol_from_addr(int addr);

private:
    const char zero;
    const char one;
    const std::string filename;
    std::fstream memory_data;
};

#endif