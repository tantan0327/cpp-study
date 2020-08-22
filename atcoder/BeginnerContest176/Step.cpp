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

    for (int i = 0 ; i < N; i++) {
        std::cin >> A[i];
    }

    max = A[0];

    for (int i = 1 ; i < N; i++) {
        if (max < A[i]) {
            max = A[i];
        } else {
            result += max - A[i];
        }
    }
    cout << result << endl;
}