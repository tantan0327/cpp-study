#include <iostream>
#include <string>

int main()
{
    int array[] = {4, 2, 1, 9, 5};
    char string[] = {'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o', 'r', 'l', 'd'};
    std::string string2 = {'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o', 'r', 'l', 'd'};


    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
    std::cout << string << std::endl;
    std::cout << string2 << std::endl;

}