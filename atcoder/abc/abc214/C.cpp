#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }


int main(){
	int N;

	cin >> N;

	vector<int> S(N), T(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }


    vector<int> memo = T;
    
    // loop 2N 
    for(int i = 0; i < N*2; i++) memo[(i+1)%N] = min(memo[(i+1)%N], memo[i%N] + S[i%N]);


    for (int ans : memo) {
        cout << ans << endl;
    }
}