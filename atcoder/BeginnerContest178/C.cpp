#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    vector<int> A(N);
    long m = 1000000007;
    long result = 10;
    if(N==1) {
        cout << 0 << endl;
    }

    if (N==2) {
        cout << 2 << endl;
    }
    for (int i = 2 ; i < N; i++) {
        result = result * 10;
    }


    for (int j = 0 ; j < N; j++) {
        sum -= A[j];
        if (sum < 0) sum += m;

        result += A[j] * sum; 
        result %= m;
    }

    cout << result << endl;
}