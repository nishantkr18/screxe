#include "schema_generated.h"
#include <iostream> // C++ header file for printing
#include <fstream>  // C++ header file for file access

int main()
{
    std::ifstream infile;
    infile.open("file.bin", std::ios::binary | std::ios::in);
    infile.seekg(0, std::ios::end);
    int length = infile.tellg();
    infile.seekg(0, std::ios::beg);
    char *data = new char[length];
    infile.read(data, length);
    infile.close();

    // Get a pointer to the root object inside the buffer.
    auto table = Geta_table(data);

    std::cout << "Name: " << table->a_name()->c_str()<<std::endl;
    std::cout << "Value: " << table->a_value()<<std::endl;
    std::cout << "Flag: " << table->a_flag()<<std::endl;
}