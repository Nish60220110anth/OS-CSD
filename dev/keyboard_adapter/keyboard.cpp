#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    std::string file = "./sample.txt";

    std::ofstream ifile(file, std::ios::in | std::ios::ate | std::ios::out);

    if (!ifile.is_open()) {
        return 1;
    }

    int seekto = 2;

    auto convert_to_string = [](char c) -> std::string {
        std::string res(8, '0');

        for (int i = 0;i < 8;i++) {
            res[7 - i] = (c & (1 << i)) ? '1' : '0';
        }

        return res;
        };

    while (true) {
        char c;
        ifile.seekp(9 * seekto, std::ios::beg);
        std::cout << "Enter a character:?" << std::endl;
        std::cin >> c;

        ifile << convert_to_string(c) << "\n";
        ifile.flush();
    }

    ifile.close();
}