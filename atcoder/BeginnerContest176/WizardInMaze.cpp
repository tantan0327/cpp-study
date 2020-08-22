#include <bits/stdc++.h>
#include <string>
#include <cmath>
using ll = long long;

using namespace std;

struct Corr {
    ll y;
    ll x;
    ll depth;
};

ll H, W;
ll Ch, Cw;
ll Dh, Dw;
ll y, x, depth;
vector<string> vec;
queue<Corr> q;


vector<ll> y_vec = {0, 0, -1, +1};  // 進む方向の簡便化，テクニックとして覚えておく．
vector<ll> x_vec = {-1, +1, 0, 0};  // ループで回すことで上下左右に移動できるようになっている


ll bfs() {
    while (!q.empty()) {
        Corr now = q.front(); q.pop();  // キューの先頭を取り出す
        y = now.y, x = now.x, depth = now.depth;  // 行，列が y, x になっているので注意

        // 停止条件：現在の座標がゴールなら深さを返す
        if (y == Dh && x == Dw) return depth;

        // 上下左右 4 方向を探索．進むことができればキューに格納する．
        for (ll i = 0; i < 4; ++i) {
            Corr next = {y + y_vec[i], x + x_vec[i], depth + 1};
            if (0 <= next.y && next.y <= H-1 && 0 <= next.x && next.x <= W-1 && vec[next.y][next.x] == '.') {
                vec[next.y][next.x] = 'x';  // 同じ場所を探索しないようにする
                q.push(next);
            }
        }
    }
    return 0;
}

int main()
{
    // input
    cin >> H >> W;
    cin >> Ch >> Cw;
    cin >> Dh >> Dw;
    Ch--, Cw--, Dh--, Dw--;
    char S[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < H; i++) {
            cin >> S[i][j];
        }
    }

    Corr start = {Ch, Cw, 0};  // 初期位置の深さ(depth)は 0
    q.emplace(start);  // 初期位置をキューに格納

}