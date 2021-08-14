#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll = long long;
using namespace std;

void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

template<typename T> vector<vector<T>> rotateClockwise(vector<vector<T>> g) {
    int n = g.size();
    int m = g[0].size();
    vector<vector<T>> res(m, vector<T>(n));
    rep(i, 0, n) rep(j, 0, m) res[j][n - i - 1] = g[i][j];
    return res;
}

int H, W, C;
vector<vector<int>> A;

ll mi[1010][1010];
ll solve() {
    rep(y, 0, H) rep(x, 0, W) mi[y][x] = A[y][x] - 1LL * C * (y + x);
    rep(y, 0, H) rep(x, 0, W) {
        if (0 < y) chmin(mi[y][x], mi[y - 1][x]);
        if (0 < x) chmin(mi[y][x], mi[y][x - 1]);
    }

    ll res = infl;
    rep(y, 0, H) rep(x, 0, W) {
        ll opt = infl;
        if (0 < y) chmin(opt, mi[y - 1][x]);
        if (0 < x) chmin(opt, mi[y][x - 1]);
        chmin(res, A[y][x] + 1LL * C * (y + x) + opt);
    }

    return res;
}



void _main()
{
	cin >> H >> W >> C;
    A.resize(H);

    rep(y, 0, H) rep(x, 0, W) {
        int a; cin >> a;
        A[y].push_back(a);
    }

    ll ans = infl;
    rep(_, 0, 2) {
        chmin(ans, solve());
        A = rotateClockwise(A);
        swap(H, W);
    }
    cout << ans << endl;

}