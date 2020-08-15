#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string S;
    cin >> S;
    if (S == "RRR") {
        std::cout << 3 << std::endl;
    } else if (S == "SSS") {
        std::cout << 0 << std::endl;
    } else if (S == "RRS" || S == "SRR") {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 1 << std::endl;
    }
}