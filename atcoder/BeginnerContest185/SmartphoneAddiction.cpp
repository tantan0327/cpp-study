#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N, M, T;
    cin >> N >> M >> T;
    int A[M];
    int B[M];
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    int N_default = N;
    
    int decrease_start_time = 0;
    for (int j=0; j < M; j++) {
        N -= A[j] - decrease_start_time;
        if (N <= 0) {
            cout << "No" << endl;
            return 0;
        }
        N += B[j] - A[j];
        if (N > N_default) {
            N = N_default;
        }
        decrease_start_time = B[j];
    }

    if (N - (T - decrease_start_time) <= 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

}