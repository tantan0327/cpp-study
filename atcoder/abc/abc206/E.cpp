#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

// function to count such possible numbers
ll Check_is_possible(ll l, ll r, ll k)
{
    ll count = 0;
 
    for (int i = l; i <= r; i++) {
 
        // if i is divisible by k
        if (i % k == 0)
            count++;
    }
 
    // if count of such numbers
    // is greater than one
    if (count > 1) {
        return((count * (count - 1)) / 2);
    }
    return(0);
}
 

int main()
{
    ll L, R;
	cin >> L >> R;

    ll result = 0;

    for (ll i = 2; i < R; i++) {
        result += Check_is_possible(L, R, i);
    }

    cout << result << endl;

}