#include <fstream>
#include <iostream>

int main()
{
    std::ifstream in{"hello_binary.bin", std::ios::binary};

    char buffer[100] = {};
    in.read(buffer, sizeof(buffer));
}