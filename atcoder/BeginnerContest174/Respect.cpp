#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long K;
    cin >> K;
    long sevens = 7;
    long tens = 1;
    
    if (K % 2 == 0) {
        std::cout << -1 << std::endl;
        return 0;
    }

    for (int i = 0; i < 10000; i++) {
        if (sevens % K == 0) {
            std::cout << i + 1 <<std::endl;
            return 0;
        }
        tens *= 10l;
        sevens += 7l * tens;
    }
    
}