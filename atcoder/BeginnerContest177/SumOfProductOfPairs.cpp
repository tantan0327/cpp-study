#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long N = 0;
    cin >> N;
    long A[N];
    long max = 0;
    long result = 0;
    long m = 1000000000 + 7;
    for (long i = 0 ; i < N; i++) {
        std::cin >> A[i];
    }

    for (long j = 0 ; j < N; j++) {
        for (long k = 0 ; k < N; k++) {
            if (j < k) {
                result += A[j] * A[k];
            }
        }
    }

    cout << result % m << endl;
}