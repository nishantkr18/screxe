#include "schema_generated.h"
#include <iostream>
#include <fstream>

int main()
{
    // Initializing a builder, to create our flatbuffer example.
    flatbuffers::FlatBufferBuilder builder(1024);

    std::cout << "Enter the name, value and flag:" << std::endl;

    std::string name;
    float value;
    bool flag;
    std::cin >> name >> value >> flag;

    auto table = Createa_tableDirect(builder, name.c_str(), value, flag);
    builder.Finish(table);

    uint8_t *buf = builder.GetBufferPointer();
    int size = builder.GetSize();

    // Optionally print size of buffer.
    std::cout<< "Size of buffer:" << size <<std::endl;

    std::ofstream outfile;
    outfile.open("file.bin", std::ios::binary | std::ios::out);
    builder.Clear();
    outfile.write(reinterpret_cast<char*>(buf), size);
}