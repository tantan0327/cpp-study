#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i<(n); ++i)
using ll = long long;
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    ll s = 0, b = 0;
    ll max_b = 0;
    rep(i,n) {
        b += a[i];
        max_b = max(max_b, b);
        ans = max(ans, s+max_b);
        s += b;
    }
    cout << ans << endl;
    return 0;
 
}