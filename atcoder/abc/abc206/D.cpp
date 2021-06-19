#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

ll change(ll arr[], ll n)
{
  
    // To store the number of replacement operations
    ll cc = 0;

    unordered_map<ll, ll> mp;
 
    for(int i=0;i<n/2;i++)
    {
 
        // If the characters at location
        // i and n-i-1 are same then
        // no change is required
        if(arr[i]== arr[n-i-1])
            continue;
 
        // Counting one change operation
        cc+= 1;
 
        // Changing the character with higher
        // ascii value with lower ascii value
        if(arr[i]<arr[n-i-1])
            arr[n-i-1]= arr[i] ;
        else
            arr[i]= arr[n-i-1] ;
    }
    return cc;
}

int main()
{
    ll N;
	cin >> N;

	ll A[N];

    for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}

    cout << change(A, N) << endl;

}