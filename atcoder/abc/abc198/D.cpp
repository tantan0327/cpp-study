#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

unsigned GetDigit(unsigned num){
    unsigned digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    // if (s1.length() + s2.length() != s3.length()) {
	// 	cout << "UNSOLVABLE" << endl;
	// 	return 0;
	// }

	map<char,int> m;

	int n = 1;

	int n1, n2 , n3 = 0;

	for (char c : s1) {
		if(m.count(c) == 0) {
			m.insert(make_pair(c, n));
			n++;
		}
	}

	int n1_digit = s1.length() - 1;

	for (char c : s1) {
		n1 += m.at(c) * pow(10, n1_digit);
		n1_digit--;
	}

	// cout << n1 << endl;

	// N2 ループ
	for (ll i = pow(10, s2.length()); i < pow(10, s2.length()+1); i++) {
		map<char,int> m2 = m;
		
		n3 = n1 + i;
		if (s3.length() != GetDigit(n3)) {
			continue;
		}

		for (int j= 0; j < s2.length(); j++) {
			if (m2.count(s2[j]) != 0) {
				if (to_string(i)[j] != m.at(s2[j])) {
					continue;
				}
			} else {
				m2.insert(make_pair(s2[j], n));
			}
		}

		for (int j= 0; j < s3.length(); j++) {
			if (m2.count(s3[j]) != 0) {
				if (to_string(n3)[j] != m.at(s3[j])) {
					continue;
				}
			} else {
				m2.insert(make_pair(s2[j], n));
			}
		}

		cout << n1 <<endl;
		cout << i <<endl;
		cout << n3 <<endl;
	}

	cout << "UNSOLVABLE" << endl;

	return 0;
    
}