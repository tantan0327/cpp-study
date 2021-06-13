#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;

    cin >> N;

    long A[N];

    long result = 0;

    for (long i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] <= 10) {
            continue;
        } else {
            result += A[i] - 10;
        }
    }

    cout << result << endl;

}