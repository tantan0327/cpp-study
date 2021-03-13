#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N] = {};
    int B[N] = {};
    int result = 1000001;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                result = min(result, A[i] + B[j]);
            } else {
                result = min(result, max(A[i], B[j]));
            }
        }
    } 

    cout << result << endl;

}