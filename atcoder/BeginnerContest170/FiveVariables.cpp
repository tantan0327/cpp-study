#include <iostream>

int main()
{
    long num[5];
    std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    for (int i : num) {
        if (num[i] == 0) {
            std::cout << i + 1 << std::endl;
            break;
        }
    }
}