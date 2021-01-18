#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int r1,c1,r2,c2;
	cin >> r1 >> c1;
	cin >> r2 >> c2;

	if (r1 == r2 && c1 == c2) {
		cout << 0 << endl;
		return 0;
 	} else if (abs(r1 - r2) + abs(c1 - c2) <=3 || r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2) {
		cout << 1 << endl;
		return 0;
	} else if ((r1 + c1) % 2 == (r2 + c2) % 2 || (abs(r1 - r2) + abs(c1 - c2) <= 6)) {
		cout << 2 << endl;
		return 0;

	}
	for (int i = -2; i <= 2 ; i++) {
		for (int j = -2; j <= 2 ; j++) {
			int r1_temp = r1 + i;
			int c1_temp = c1 + j;
			if (r1_temp + c1_temp == r2 + c2 || r1_temp - c1_temp == r2 - c2) {
				cout << 2 << endl;
				return 0;
			}
		}
	}

	int r1_temp2, c1_temp2;
	r1_temp2 = r1 - 3;
	c1_temp2 = c1;
	if (r1_temp2 + c1_temp2 == r2 + c2 || r1_temp2 - c1_temp2 == r2 - c2) {
		cout << 2 << endl;
		return 0;
	}

	r1_temp2 = r1;
	c1_temp2 = c1 - 3;
	if (r1_temp2 + c1_temp2 == r2 + c2 || r1_temp2 - c1_temp2 == r2 - c2) {
		cout << 2 << endl;
		return 0;
	}

	r1_temp2 = r1 + 3;
	c1_temp2 = c1;
	if (r1_temp2 + c1_temp2 == r2 + c2 || r1_temp2 - c1_temp2 == r2 - c2) {
		cout << 2 << endl;
		return 0;
	}

	r1_temp2 = r1;
	c1_temp2 = c1 + 3;
	if (r1_temp2 + c1_temp2 == r2 + c2 || r1_temp2 - c1_temp2 == r2 - c2) {
		cout << 2 << endl;
		return 0;
	}

	cout << 3 << endl;
	return 0;
}