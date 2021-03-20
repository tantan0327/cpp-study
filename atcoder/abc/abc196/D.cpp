#include <bits/stdc++.h>
#include <iostream>
#include <string>

using ll = long long;
using namespace std;

int H, W, A, B;
int ans = 0;
bool used[16][16];

// 深さ優先探索
void dfs(int i, int bit, int A, int B) {
    // 
    if (i == H * W) return (void)ans++;
    if (bit & 1 << i) return dfs(i + 1, bit, A, B);
    if (B) dfs(i + 1, bit | 1 << i, A, B - 1);
    if (A) {
        if (i % W != W - 1 && ~bit & 1 << (i + 1)) dfs(i + 1, bit | 1 << i | 1 << (i + 1), A - 1, B);
        if (i + W < H * W) dfs(i + 1, bit | 1 << i | 1 << (i + W), A - 1, B);
    }
}

ll dfs2(int i, int j, int a, int b) {
    if (a < 0 || b < 0) return 0;
    if (j == W) j = 0, ++i;
    if (i == H) return 1;
    // マスが埋まっていたらスキップ
    if (used[i][j]) return dfs2(i, j+1, a, b);
    ll res = 0;
    used[i][j] = true;
    // 1マスの畳を使う場合
    res += dfs2(i, j+1, a, b - 1);

    // 2マスの畳を横に置く
    if (j+1 < W && !used[i][j+1]) {
        used[i][j+1] = true;
        res += dfs2(i, j+1, a-1, b);

        used[i][j+1] = false;
    }

    // 2マスの畳を縦に置く
    if (i+1 < H && !used[i+1][j]) {
        used[i+1][j] = true;
        res += dfs2(i, j+1, a-1, b);

        used[i+1][j] = false;
    }

    used[i][j] = false;

    return res;
}

int main()
{
    cin >> H >> W >> A >> B;
    cout << dfs2(0, 0, A, B) << endl;
}