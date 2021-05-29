#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    ll N;
    cin >> N;

	ll A[N + 1];
	ll B[N + 1];
	ll C[N + 1];

	ll s[N + 1] = {0};

	ll ans = 0;

	for (ll i = 1; i <= N; i++) {
		cin >> A[i];
		s[A[i]]++;
	}

	for (ll i = 1; i <= N; i++) {
		cin >> B[i];
	}

	for (ll i = 1; i <= N; i++) {
		cin >> C[i];
	}

	for (ll i = 1; i <= N; i++) {
		ans += s[B[C[i]]];
	}

	cout << ans << endl;
	
}