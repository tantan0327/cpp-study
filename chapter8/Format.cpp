#include <iostream>
#include <bits/stdc++.h>

int main() 
{
    std::cout.setf(std::ios::scientific);
    std::cout << M_PI << std::endl;

    std::cout.width(8);
    std::cout.fill('-');
    std::cout.setf(std::ios::oct);
    // need to unset decimal format
    std::cout.unsetf(std::ios::dec);
    std::cout << 1234 << std::endl;
}