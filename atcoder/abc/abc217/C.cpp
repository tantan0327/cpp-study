#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;


int main(){
	int N;
    cin >> N;

    int p[N];
    int q[N];

    for (int i = 0; i < N; i++) {
        cin >> p[i];
        q[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            cout << q[i] << endl;
            break;
        }
        cout << to_string(q[i]) + " ";
    }

    return 0;
}