#include <iostream>
// #include <string.h>

int main()
{
    char buffer[256];

    while (true) {
        std::cout << "> ";
        std::cin.getline(buffer, sizeof(buffer));
        if(buffer[0] == '\0') {
            break;
        }
        std::cout << buffer << std::endl;
    }
}