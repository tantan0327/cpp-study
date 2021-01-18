#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, X, T;
    cin >> N >> X >> T;
    int times;
    if (N % X == 0) {
        times = N/X;
    } else {
        times = N / X + 1;
    }
    cout << times * T << endl;
}