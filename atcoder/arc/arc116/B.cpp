#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    ll A[N];
    ll ans = 0L;
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];        
    }

    sort(A, A+N);

    for (ll i = 0; i < N; i++) {

        ans += A[i] * A[i];

        for (ll j = i + 1; j < N; j++) {
            ans += A[i] * (A[j] * pow(2L, (j - i - 1)));
        }

        ans %= 998244353;
    }

    cout << ans << endl;
    
}