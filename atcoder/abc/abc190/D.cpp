#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using ll = long long;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll result = 0;

    while(n % 2 == 0) n /= 2;
    ll sq = sqrt(n);

    for (ll i = 1; i <= sq; ++i) {
        if (n % i == 0) {
            result += 2;
        }
    }

    if(sq * sq == n) result--; 

    cout << result * 2 << endl;

}

