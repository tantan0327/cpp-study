#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    int V[N];
    int P[N];
    for (int i = 0; i < N; i++) {
        cin >> V[i] >> P[i];
    }

    int d = 0;

    for (int i = 0; i < N; i++) {
        d += V[i] * P[i];
        if (X * 100 < d) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

}