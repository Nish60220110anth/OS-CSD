#include <iostream>
#include <vector>
#include <bitset>
#include <fstream>

/**
 * This program simulates the OS with memory as single file
 * 
 * TODO: not yet completed
*/

int main(int argc, char* argv[]) {
    std::string file_name = "memory.txt";
    std::ofstream file_stream(file_name, std::ios::binary);

    int n, t = 0;
    std::cin >> n;

    while (t < n) {
        int64_t p;
        std::cin >> p;

        for (int i = 7;i >= 0;i--) {
            int8_t g = (p >> 8 * i);
            file_stream << g;
        }

        t++;
    }

    file_stream.close();
}