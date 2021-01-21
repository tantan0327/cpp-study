#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    ll A, B;
    int digit=0;
    int result = 100;

    for (ll i =1; i*i <= N; i++) {
        if (N % i == 0) {
            A = i;
            B = N / i;
            digit = max(to_string(A).length(), to_string(B).length());
            result = min(digit, result);
        }
    }

    cout << result << endl;
}