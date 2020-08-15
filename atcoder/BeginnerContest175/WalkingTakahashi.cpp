#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long X, K, D;
    cin >> X >> K >> D;
    long result;
    long minimum_candidate1;
    long minimum_candidate2;

    X = abs(X);

    // X >= K * D だとテスト失敗
    if (X / D >= K) {
        result = X - K * D;
    } else {
        minimum_candidate1 = X % D;
        minimum_candidate2 = abs(minimum_candidate1 - D);

        if ((K - (X / D)) % 2 == 0) {
            result = minimum_candidate1;
        } else {
            result = minimum_candidate2;
        }
    }

    std::cout << result << std::endl;
    
}