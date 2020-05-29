#include <iostream>

int main()
{
    char array[] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << "hello, message" << std::endl;
    for (char i : array)
    {
        std::cout << i << std::endl;
    }
}