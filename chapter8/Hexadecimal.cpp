#include <iostream>

int main()
{
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout.setf(std::ios::left, std::ios::adjustfield);

    std::cout.width(16);
    std::cout.fill('=');

    std::cout << 123456 << std::endl;
    // std::cout << 0xdeadbeef << std::endl;
}