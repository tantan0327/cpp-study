#include <iostream>
using ll = long long;
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

// 桁数カウント
int cnt_digits(ll N){
    int digits=0;

    while(N>0){
        N/=10;
        digits++;
    }

    return digits;
}

int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}