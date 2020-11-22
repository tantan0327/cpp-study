#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

double f(int a, int b, int c) {
	
}

int main()
{
    int A, B, C;
	cin >> A >> B >> C;

	double result = ((100 -  A) * A + (100 - B) * B + (100 - C) * C) / double((A + B + C));

	cout << fixed << setprecision(10) << result << endl;
	return 0;
}