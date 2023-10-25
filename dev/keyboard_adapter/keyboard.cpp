// take input from user and change memory.txt file
#include <iostream>
#include <ostream>
#include <string>
#include <cstdlib>
#include <fstream>

int main()
{
    std::string filename = "./../../src/core/memory.txt";
    std::fstream file(filename, std::ios::app | std::ios::out | std::ios::in);

    if (!file.is_open())
    {
        return 1;
    }

    int seekto = 16575;
    std::string line;
    int c = 0;

    file.seekp(9 * seekto, std::ios::beg);

    // while (std::getline(file, line))
    // {
    //     if (c == seekto)
    //     {
    //         break;
    //     }

    //     c++;
    // }

    char input;
    auto convert_to_str = [](char c) -> std::string
    {
        std::string str(8, '0');
        for (int i = 0; i < 8; i++)
        {
            str[i] = (c & (1 << i)) ? '1' : '0';
        }

        return str;
    };

    while (true)
    {
        std::cin >> input;
        file << convert_to_str(input) << "\n";
    }
}