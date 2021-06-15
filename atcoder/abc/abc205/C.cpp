#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;


int main(){
	ll A, B, C;
	cin >> A >> B >> C;
	
	if (A >= 0 && B >= 0) {
		if (A == B) {
			cout << "=" << endl;
			return 0;
		} else if (A > B) {
			cout << ">" << endl;
			return 0;
		} else {
			cout << "<" << endl;
			return 0;
		}
	}

	if (A >= 0 && B < 0) {
		if (C % 2 == 0) {
			if (abs(A) == abs(B)) {
				cout << "=" << endl;
				return 0;
			} else if (abs(A) > abs(B)) {
				cout << ">" << endl;
				return 0;
			} else {
				cout << "<" << endl;
				return 0;
			}
		} else {
			cout << ">" << endl;
			return 0;
		}
	}

	if (A < 0 && B >= 0) {
		if (C % 2 == 0) {
			if (abs(A) == abs(B)) {
				cout << "=" << endl;
				return 0;
			} else if (abs(A) > abs(B)) {
				cout << ">" << endl;
				return 0;
			} else {
				cout << "<" << endl;
				return 0;
			}
		} else {
			cout << "<" << endl;
			return 0;
		}
	}

	if (A < 0 && B < 0) {
		if (A == B) {
			cout << "=" << endl;
			return 0;
		}

		if (C % 2 == 0) {
			if (A > B) {
				cout << ">" << endl;
				return 0;
			} else {
				cout << "<" << endl;
				return 0;
			}
		} else {
			if (A > B) {
				cout << ">" << endl;
				return 0;
			} else {
				cout << "<" << endl;
				return 0;
			}
		}
		
	}
}