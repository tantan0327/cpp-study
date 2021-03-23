#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;


int main()
{
    ll x = 0;
    cin >> x;
    vector<ll> v  = {};
    
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (x / i == i) {
                v.push_back(i);
                continue;
            } else {
                v.push_back(i);
                v.push_back(x/i);
            }
        }
    }

    sort(v.begin(), v.end());
    
    for (ll a : v) {
        std::cout << a << std::endl;
    }
}