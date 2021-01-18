#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long N;
    cin >> N;
    long fives = 5;
    long threes = 3;
    for (long i = 1; i <= 37; ++i) {
        for (long j = 1; j <= 25; ++j) {
            if (threes == N - fives) {
                cout << i << " " << j << endl;
                return 0;
            }
            fives *= 5L;
        }
        fives = 5;
        threes *= 3L;
    }
    cout << -1 << endl;
    return 0;
}
