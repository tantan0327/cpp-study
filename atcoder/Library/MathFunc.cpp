#include <iostream>

using namespace std;

int GCD(int m, int n) {
    if (n == 0) return m;

    return GCD(n, m % n);
}

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}