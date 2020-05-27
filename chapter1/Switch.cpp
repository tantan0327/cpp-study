#include <iostream>

int main()
{
    int a = 0;
    switch (a + 1)
    {
        case 1:
            std::cout << "a + 1は1です" << std::endl;
            break;
        
        case 2:
            std::cout << "a + 1は2です" << std::endl;
            break;
        
        default:
            std::cout << "a + 1は1でも2でも3でもありません" << std::endl;
            break;

        case 3:
            std::cout << "a + 1は3です" << std::endl;
            break;
    }

    int b = a + 1;
    if (b == 1) {
        std::cout << "a + 1は1です" << std::endl;
    } else if (b == 2) {
        std::cout << "a + 1は2です" << std::endl;
    } else if (b == 3) {
        std::cout << "a + 1は3です" << std::endl;
    } else {
        std::cout << "a + 1は1でも2でも3でもありません" << std::endl;
    } 

}