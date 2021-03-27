#include <iostream>
#include <string>

int main()
{
    // input
    long N, D;
    std::cin >> N >> D;
    long X[N];
    long Y[N];

    long dSquare = D * D;
    long result = 0;

    for (int i = 0 ; i < N; i++) {
        std::cin >> X[i] >> Y[i];
        if (X[i] * X[i] + Y[i] * Y[i] <= dSquare) {
            result++;
        }
    }

    std::cout << result << std::endl;

}