#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    int N;
	string S;
	int Q;
    cin >> N >> S >> Q;

	int T[Q];
	int A[Q];
	int B[Q];
	int flip_A;
	int flip_B;

	bool flip = false;
	
	for (int i = 0; i < Q; i++) {
		cin >> T[i] >> A[i] >> B[i];

		if (T[i] == 1) {
			if (!flip) {
				char temp = S[A[i] - 1];
				S[A[i] - 1] = S[B[i] - 1];
				S[B[i] - 1] = temp;
			} else {
				if (A[i] > N) {
					flip_A = A[i] - N;
				} else {
					flip_A = A[i] + N;
				}
				if (B[i] > N) {
					flip_B = B[i] - N;
				} else {
					flip_B = B[i] + N;
				}
				char temp_flip = S[flip_A - 1];
				S[flip_A - 1] = S[flip_B - 1];
				S[flip_B - 1] = temp_flip;
			}
		} else if (T[i] == 2) {
			if (!flip) {
				flip = true;
			} else {
				flip = false;
			}
		}
	}

	if (flip) {
		S = S.substr(N, N) + S.substr(0, N);
	}

    cout << S << endl;
    
}