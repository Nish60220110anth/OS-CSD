#include <MyMemory.hpp>

#include <fstream>
#include <iostream>


MyMemory::MyMemory(char zero, char one, std::string filename) : filename(filename), zero(zero), one(one) {
    memory_data = std::fstream(filename, std::ios::trunc | std::ios::in | std::ios::out);

    if (!memory_data.is_open()) {
        std::cout << "File not opened";
    }
}

MyMemory::~MyMemory() {
    memory_data.close();

    if (memory_data.fail()) {
        std::cout << "Memory not closed\n";
    }
}

void MyMemory::init() {
    for (int i = 0;i < 16384; i++) {
        std::string tmp(8, zero);
        memory_data << tmp << "\n";
    }
}

std::string MyMemory::string_from_int(int value) {
    std::string tmp(8, zero);
    for (int i = 0;i < 8;i++) {
        if ((value >> i) & 1) {
            tmp[7 - i] = one;
        }
    }

    return tmp;
}

void MyMemory::set_at(int addr, int value) {
    memory_data.seekg(0, std::ios_base::beg);
    std::string pre;
    std::string value_str = string_from_int(value);

    if (addr == 0) {
        memory_data << value_str << "\n";
    }

    int c = 0;

    while (std::getline(memory_data, pre)) {
        if (c == (addr - 1)) {
            memory_data << value_str << "\n";
            break;
        }
        c++;
    }
}

std::string MyMemory::get_at(int addr) {
    memory_data.seekg(0, std::ios_base::beg);
    std::string pre;

    if (addr == 0) {
        std::getline(memory_data, pre);
        return pre;
    }

    int c = 0;

    while (std::getline(memory_data, pre)) {
        if (c == (addr - 1)) {
            return pre;
        }
        c++;
    }

    return std::string("");
}

std::pair<int, int> MyMemory::rowcol_from_addr(int addr) {
    int row = addr / 80;
    int col = addr % 80;

    return { row,col };
}