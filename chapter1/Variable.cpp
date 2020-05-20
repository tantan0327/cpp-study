#include <iostream>

void hello_world()
{
    std::cout << "Hello, world!" << std::endl;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    hello_world();
    std::cout << sum(1, 2, 3) << std::endl;
}