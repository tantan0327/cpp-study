#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;

vector<long long> divisor(int n) {
    vector<long long> ret;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    return ret;
}

int main()
{
    int N = 0;
    cin >> N;
    int Nsize = N;
    int ans = 0;
    for (int i = 1; i < Nsize; i++) {
        N--;
        ans += divisor(N).size();

    }
    cout << ans << endl;
}