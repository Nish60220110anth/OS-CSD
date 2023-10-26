#include <iostream>
#include <fstream>
#include <string>
#include "../../src/core/global.h"

int main(int argc, char* argv[])
{
    std::string filename = "./../../src/core/memory.txt";

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

    char c;
    while (true)
    {

        std::cout << "Enter a character:?" << std::endl;
        std::cin >> c;

        std::ofstream ifile(filename, std::ios::in | std::ios::ate | std::ios::out);
        ifile.seekp(9 * seekto, std::ios::beg);

        if (!ifile.is_open())
        {
            return 1;
        }

        ifile << convert_to_string(c) << "\n";
        ifile.flush();
        ifile.close();
    }

}