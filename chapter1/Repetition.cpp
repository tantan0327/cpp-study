#include <iostream>

int main()
{
    int array[] = {4, 2, 1, 9, 5};

    int i = 4;
    // while (i >= 0)
    // for (int i = 4; i >= 0; i--)
    do 
    {
        std::cout << array[i] << std::endl;
        i -= 1;
    } while (i >= 0);
}