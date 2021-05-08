#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

// void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
//   if (rest == 0) {
//     f(indexes);
//   } else {
//     if (s < 0) return;
//     recursive_comb(indexes, s - 1, rest, f);
//     indexes[rest - 1] = s;
//     recursive_comb(indexes, s - 1, rest - 1, f);
//   }
// }

// // nCkの組み合わせに対して処理を実行する
// void foreach_comb(int n, int k, std::function<void(int *)> f) {
//   int indexes[k];
//   recursive_comb(indexes, n - 1, k, f);
// }

int main()
{
    int N;
    cin >> N;

	int ans = 0;

	int A[N];
	int B[N];
	int C[N];
	int D[N];
	int E[N];
	int a_max = 0;
	int a = 0;
	int b_max = 0;
	int b = 0;
	int c_max = 0;
	int c = 0;
	int d_max = 0;
	int d = 0;
	int e_max = 0;
	int e = 0;
	
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i] >> C[i] >> D[i] >> E[i];
		if (A[i] > a_max) {
			a_max = A[i];
			a = i;
		}
		if (B[i] > b_max) {
			b_max = B[i];
			b = i;
		}
		if (C[i] > c_max) {
			c_max = C[i];
			c = i;
		}
		if (D[i] > d_max) {
			d_max = D[i];
			d = i;
		}
		if (E[i] > e_max) {
			e_max = E[i];
			e = i;
		}
	}

	vector<int> five;
	// indexをpush
	if (N < 5 ) {
		for (int i = 0; i < N; i++) {
			five.push_back(i);
		}

	} else {
		five.push_back(a);
		five.push_back(b);
		five.push_back(c);
		five.push_back(d);
		five.push_back(e);
	}
	

	for (int a1 : five) {
		for (int a2 : five) {
			if (a1 == a2) continue;
			for (int a3 : five) {
				if (a1 == a3 || a2 == a3) continue;
				a_max = max(A[a1], A[a2]);
				a_max = max(a_max, A[a3]);
				b_max = max(B[a1], B[a2]);
				b_max = max(b_max, B[a3]);
				c_max = max(C[a1], C[a2]);
				c_max = max(c_max, C[a3]);
				d_max = max(D[a1], D[a2]);
				d_max = max(d_max, D[a3]);
				e_max = max(E[a1], E[a2]);
				e_max = max(e_max, E[a3]);
				int temp = min(a_max, b_max);
				temp = min(temp, c_max);
				temp = min(temp, d_max);
				temp = min(temp, e_max);
				if (ans < temp) {
					ans = temp;
				}
			}
		}
	}

	cout << ans << endl;
	
}