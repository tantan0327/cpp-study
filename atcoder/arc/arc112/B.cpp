#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll B, C;
    cin >> B >> C;

    if (C == 1) {
        cout << 2 << endl;
        return 0;
    }

    if (B == 0) {
        cout << C << endl;
        return 0;
    }

    if (B <= C/2) {
        cout <<  (2L * C - 1L - (2L * B)) / 2L + 3L * B << endl;
    } else {
        cout << 2 * C - 1 << endl;
    }
    
}
