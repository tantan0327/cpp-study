#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll = long long;
using namespace std;

ll score(string S) {
    vector<ll> cnt(10);
    iota(cnt.begin(), cnt.end(), 0);
    for (char c : S) cnt[c - '0'] *= 10;
    return accumulate(cnt.begin(), cnt.end(), 0);
}

int main()
{
    int K;
    string S, T;
    cin >> K >> S >> T;
    vector<ll> cnt(10, K);
    for (char c : S + T) cnt[c - '0']--;
    ll win = 0;
    for (ll x = 1; x<=9; x++) for (ll y = 1; y<=9; y++) {
        S.back() = '0' + x;
        T.back() = '0' + y;
        if (score(S) <= score(T)) continue;
        win += cnt[x] * (cnt[y] - (x == y));
    }

    const ll rem = 9 * K - 8;
    cout << double(win) / rem / (rem - 1) << endl;

}