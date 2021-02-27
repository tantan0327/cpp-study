#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N] = {};
    int P[N] = {};
    int X[N] = {};
    int result = 1000000001;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> P[i] >> X[i];
        if (X[i] - A[i] > 0) {
            result = min(result, P[i]);
        }
    }

    if (result == 1000000001) {
        result = -1;
    }

    cout << result << endl;

}