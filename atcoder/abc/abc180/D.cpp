#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;
 
ll x, y, a, b, s;
 
int main()
{
    cin >> x >> y >> a >> b;
    ll ans=0;
    while((double) a*x<=2e18 && a*x<=x+b && a*x<y) {
        x*=a;
        ans++;
    }
    cout << ans+(y-1-x)/b << endl;
}