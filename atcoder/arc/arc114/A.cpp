#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool coprime(ll a, ll b) { 
      
    if ( __gcd(a, b) == 1) 
        return true;
    else
        return false;      
}

int main()
{
    ll N;
    cin >> N;
    ll X[N];

    for (ll i = 0; i < N; i++) {
        cin >> X[i];
    }

    const int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
 
	ll result = 1e18;

	for(int bit = 0; bit < (1 << 15); bit++) {
		ll p = 1;
		for(int i = 0; i < 15; i++) {
			if(bit & (1 << i)) p *= primes[i];
		}

        bool e = false;
		for (auto x : X) {
            if(coprime(x, p)) {
                e = true;
                break;
            }
        }

        if (e) {
            continue;
        }

        result = min(p, result);
	}
 
    cout << result << endl;
    
}
