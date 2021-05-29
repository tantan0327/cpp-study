#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

unsigned long bits_count( unsigned long v )
{
  v = (v & 0x55555555) + (v >>  1 & 0x55555555);
  v = (v & 0x33333333) + (v >>  2 & 0x33333333);
  v = (v & 0x0f0f0f0f) + (v >>  4 & 0x0f0f0f0f);
  v = (v & 0x00ff00ff) + (v >>  8 & 0x00ff00ff);
  v = (v & 0x0000ffff) + (v >> 16 & 0x0000ffff);
  return v;
}

string toBinary(long n)
{
    string r;
    while (n != 0l){
        r += ( n % 2l == 0 ? "0" : "1" );
        n /= 2l;
    }
    return r;
}

int main()
{
    ll A, B, K;
    cin >> A >> B >> K;
	ll count = 0;

	ll digit = A + B;

	for (ll bit = 0; bit < (1 << digit); bit++) {
		ll num_of_1 = bits_count(bit);
		if (num_of_1 == B) {
			count++;
			if (count == K) {
				string s = toBinary(bit);
				int count = s.size();
				while (count < A+B) {
					cout << 'a';
					count++;
				}
				for (char c : s) {
					if (c == '0') {
						cout << 'a';
						continue;
					}
					if (c == '1') {
						cout << 'b';
					}
				}
			}
		}
	}



	cout << endl;

	
}