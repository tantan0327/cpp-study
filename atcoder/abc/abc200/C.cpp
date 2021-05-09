#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    ll N;
    cin >> N;

	ll ans=0;
	ll A[N];
	ll B[N];

	for (ll i = 0; i < N; i++) {
		cin >> A[i];
		B[i] = A[i] % 200;
	}

	for (ll i = 0; i < 200; i++) {
		ll c = 0;
		for (ll b : B) {
			if (b == i) {
				c++;
			}
		}
		ans += c*(c-1)/2;
	}

	cout << ans << endl;
	
}