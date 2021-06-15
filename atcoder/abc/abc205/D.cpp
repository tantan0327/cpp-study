#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;


int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for (auto& x : A) {
        cin >> x;
    }

    vector<long long> low(N);
    for (int i = 0; i < N; ++i) {
        low[i] = A[i] - (i + 1);
    }

    while (Q--) {
        long long K;
        cin >> K;
        // lower_bound: 探索したい値以上が取れる最初の位置のイテレータ
        const int idx = lower_bound(low.begin(), low.end(), K) - low.begin();
        if (idx == N) {
            // Cn < K
            cout << A[N - 1] + (K - low[N - 1]) << '\n';
        } else {
            // Cn >= K
            cout << A[idx] - (low[idx] - K + 1) << '\n';
        }
    }
    return 0;

}