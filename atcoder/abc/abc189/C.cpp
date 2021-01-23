#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int seq = 0;
    int max_seq = 0;
    int result = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[j] >= A[i]) {
                seq++;
                max_seq = max(max_seq, seq);
            } else {
                seq = 0;
            }
        }
        result = max(max_seq*A[i], result);
        seq = 0;
        max_seq = 0;
    }

    cout << result << endl;

}