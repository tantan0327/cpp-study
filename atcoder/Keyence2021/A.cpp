#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    ll a[N], b[N];
    ll c[N] = {};
    ll max_a = 0;
    ll max_c = 0;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < N; i++) {
        if (max_a < a[i]) {
            max_a = a[i];
        }

        c[i] = max_a * b[i];

        if (max_c > c[i]) {
            c[i] = max_c;
        } else {
            max_c = c[i];
        }
        
        cout << c[i] << endl;
    }
    
}
