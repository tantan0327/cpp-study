#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    ll R, X, Y;
    cin >> R >> X >> Y;

	double d = sqrt(X * X + Y * Y);

	if (d < R) {
		cout << 2 << endl;
		return 0;
	}

	ll ans = d/R + 0.999999;

    cout << ans << endl;
    
}