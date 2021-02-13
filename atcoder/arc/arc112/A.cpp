#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow_mod(ll n, ll k, ll m) {
    if (k == 0) {
        return 1;
    } else if (k % 2 == 1) {
        return pow_mod(n, k-1, m) * n % m;
    } else {
        ll t = pow_mod(n, k/2, m);
        return t * t % m;
    }
}

int main()
{
    int T;
    cin >> T;
    int L[T];
    int R[T];
    for (int i = 0; i < T; i++) {
        cin >> L[i] >> R[i];
    }

    for (int i = 0; i < T; i++) {
        if (L[i] == 0 && R[i] == 0) {
            cout << 1 << endl;
            continue;
        }
        
        if (L[i] == R[i] || 2 * L[i] > R[i]) {
            cout << 0 << endl;
            continue;
        }

        long n = R[i] - L[i] - L[i] + 1;
        cout << n * (n+1) / 2 << endl;
    }

    
}
