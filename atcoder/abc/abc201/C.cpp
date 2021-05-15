#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

uintmax_t combination(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

int main()
{
    string S;
    cin >> S;

	int maru = 0;
	int batsu = 0;
	int hatena = 0;

	int ans = 0;

	for (char c : S) {
		if (c == 'o') {
			maru++;
		}
		if (c == 'x') {
			batsu++;
		}
		if (c == '?') {
			hatena++;
		}
	}

	// 番号に関わらす、いずれか1個がoになった場合を逐次計算
	for (int i = 0; i <= hatena; i++) {
		if (maru + i > 4) {
			break;
		}

		if (maru + i == 4) {
			if (i == 0) {
				ans += 24;
			} else {
				ans += 24 * combination(hatena, 4 - maru);
			}
		}

		if (maru + i == 3) {
			if (i == 0) {
				ans += 36;
			} else {
				ans += 36 * combination(hatena, 3 - maru);
			}
		}

		if (maru + i == 2) {
			if (i == 0) {
				ans += 14;
			} else {
				ans += 14 * combination(hatena, 2 - maru);
			}

		}

		if (maru + i == 1) {
			if (i == 0) {
				ans += 1;
			} else {
				ans += hatena;
			}
		}				
	}
	
	cout << ans << endl;
	
}