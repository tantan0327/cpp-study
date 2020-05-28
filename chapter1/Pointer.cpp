#include <iostream>

void show_value(float f)
{
    std::cout << f << std::endl;
}

int main()
{
    float i = 42.195f;
    float f = 100.001f;
    int j = 0;
    int* j_address = &j;
    *j_address = 42;
    f -= 100;
    show_value(i);
    show_value(f);
    show_value(j);
}