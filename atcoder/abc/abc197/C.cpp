#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    int N;
    cin >> N;
    int result = 2000000000;

    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 1 << (N - 1); i++) {
		int xored = 0;
		int ored = 0;
		for (int j = 0; j <= N; j++) {
			if (j < N) ored |= A[j];
			if (j == N || (i >> j & 1)) xored ^= ored, ored = 0;
		}
		result = std::min(result, xored);
	}

    // for (int i = 0; i < 1 << (N - 1); i++) {
	// 	bitset<32> ored = bitset<32>(0);
    //     bitset<32> xored = bitset<32>(0);
	// 	for (int j = 0; j <= N; j++) {
	// 		if (j < N) ored |= A[j];
	// 		if (j == N || (i >> j & 1)) xored ^= ored, ored = 0;
	// 	}
	// 	result = std::min(result, xored.to_ulong());
	// }

    cout << result << endl;
    
}