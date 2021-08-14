#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

ll countPairs(ll arr[], ll n)
{
    unordered_map<ll, ll> mp;
 
    // Finding frequency of each number.
    for (ll i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Calculating pairs of each value.
    ll ans = 0;
    for (auto it=mp.begin(); it!=mp.end(); it++)
    {
        ll count = it->second;
        ans += (count * (count - 1))/2;
    }
 
    return ans;
}


int main(){
	ll N;
	cin >> N;

	ll A[N];

	
	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}

	cout << ((N * (N - 1)) / 2) - countPairs(A, N) << endl;
}