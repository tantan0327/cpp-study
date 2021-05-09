#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long K;
    cin >> K;
    
    if (K % 2 == 0) {
        std::cout << -1 << std::endl;
        return 0;
    }

    int a = 7 % K;
    if (a == 0) {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 2; i < 99999999; i++) {
        // 剰余の定理
        a = (a * 10 + 7) % K;
        if (a == 0) {
            std::cout << i << std::endl;
            return 0;
        }
    }

    cout << -1 << endl;
    
}