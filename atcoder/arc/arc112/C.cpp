#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 深さ優先探索
vector<bool> seen;  // 既に見たことがある頂点か記録
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for (auto next : G[v]) {
        if (!seen[next]) {  // 訪問済みでなければ探索
            dfs(G, next);
        }
    }
}

int main() {
    int n;
    int max;
    cin >> n;
    vector<vector<int>> G(n);
    for (int i = 0; i < E; i++) {
        int b;
        cin >> b;
        G[i].push_back({b});
    }

    seen.assign(V, false);  // 初期化
    dfs(G, s);
    if (seen[t]) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
