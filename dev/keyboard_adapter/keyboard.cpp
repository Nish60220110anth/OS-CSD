#include <iostream>
#include <fstream>
#include <string>
#include "../../src/core/global.h"

int main(int argc, char *argv[])
{
    std::string filename = "./../../src/core/memory.txt";

    std::ofstream ifile(filename, std::ios::in | std::ios::ate | std::ios::out);

    if (!ifile.is_open())
    {
        return 1;
    }

    int seekto = IO_KEYBOARD_START;
    // 229376

    auto convert_to_string = [](char c) -> std::string
    {
        std::string res(8, '0');

        for (int i = 0; i < 8; i++)
        {
            res[7 - i] = (c & (1 << i)) ? '1' : '0';
        }

        return res;
    };

    while (true)
    {
        char c;
        ifile.seekp(9 * seekto, std::ios::beg);
        std::cout << "Enter a character:?" << std::endl;
        std::cin >> c;

        ifile << convert_to_string(c) << "\n";
        ifile.flush();
    }

    ifile.close();
}