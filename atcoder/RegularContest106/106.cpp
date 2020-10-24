#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long N;
    cin >> N;
    long threes = 0;
    long fives = 0;
    long temp = 0;
    for (long i = 1; i < N; i*=5L) {
        temp = (long) N - i;
        if (temp == 1) {
            cout << 0 << " " << fives << endl;
            return 0;
        }
        while (temp != 1) {
            if (temp % 3L == 0) {
                temp /= 3L;
                threes++;
                if (temp == 1) {
                    cout << threes << " " << fives << endl;
                    return 0;
                }
            } else {
                break;
            }
        }
        threes=0;
        fives++;
    }
    cout << -1 << endl;
    return 0;
}
