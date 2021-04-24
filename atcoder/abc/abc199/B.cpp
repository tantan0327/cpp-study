#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];
    int B[N];
    int max_A = 0;
    int min_B = 1001;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (max_A < A[i]) {
            max_A = A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
        if (min_B > B[i]) {
            min_B = B[i];
        }
    }

    if (min_B - max_A + 1 > 0) {
        cout << min_B - max_A + 1 << endl;
    } else {
        cout << 0 << endl;
    }

}