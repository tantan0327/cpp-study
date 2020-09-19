#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;
const ll mod=1000000007;

ll powmod(ll x,ll y){
    ll res=1;
    for(ll i=0;i<y;i++){
        res=res*x%mod;
    }
    return res;
}

int main()
{
    ll N = 0;
    cin >> N;
    ll ans = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
    ans %= mod;
    ans = (ans+mod)%mod;
    cout << ans << endl;
}