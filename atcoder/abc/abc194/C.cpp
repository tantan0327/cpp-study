#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long result = 0;
    long A[N];
    long sum = 0;

    for (long i = 0; i < N; i++) {
        cin >> A[i];
        result += N * A[i] * A[i];
        sum += A[i];
    }

    cout << result - sum * sum << endl;

}