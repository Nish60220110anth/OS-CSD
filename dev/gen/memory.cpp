#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#include <MyMemory.hpp>

/**
 * This file creates a text file that represents the memory for size 16384.
 * Now based on the user input, we need to make appropriate chnages to the file.
 *
 * Operations that need to be done on the file is
 * 1. Set the value of a particular memory location to a particular value. (for a line)
 * 2. Get the value of a particular memory location. (for a line)
 * 3. Unset the value of a particular memory location.( making all zero in line )
 * 4. write content into the last line of the file.
 * 5. Read the content of the last line of the file.
 * 6. Write at specific row and column.
 * 7. Read at specific row and column.
 * 8. Unset at specific row and column.
*/



int main(int argc, char* argv[])
{
    std::unique_ptr<MyMemory> mem = std::make_unique<MyMemory>('.', '*', "mymemory.txt");
    mem->init();
    mem->set_at(1, -1);
    mem->set_at(2, 4);
}