#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;
using P = pair<int, int>;
#define rep(i,n) for (int i = 0; i < (n); ++i)


int N;
vector<vector<int>> to;

vector<int> used, col;
vector<int> vs;

// v: 今見てる頂点
void dfs(int v) {
	if (used[v]) return;
	used[v] = 1;
	vs.push_back(v);
	for (int u : to[v]) dfs(u);
}

ll now;
// i: vsの何番目を試しているか
void dfs2(int i) {
	if (i == vs.size()) { now++; return;}
	int v = vs[i];
	for (int c = 0; c < 3; ++c) {
		col[v] = c;
		bool ok = true;
		// 隣接頂点を全部見る
		for (int u : to[v]) {
			// 同じ色だったら潜らない
			if (col[u] == c) ok = false;
		}
		if (!ok) continue;
		dfs2(i+1);
	}
	col[v] = -1;
}

int main()
{
    int M;
    cin >> N >> M;
	to = vector<vector<int>>(N);

	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;
		--A;
		--B;
		to[A].push_back(B);
		to[B].push_back(A);
	}

	ll ans = 1;
	// 連結成分に含まれる頂点を列挙
	used = vector<int>(N);
	// 塗り方を試すため
	col = vector<int>(N, -1);

	for (int i = 0; i < N; ++i) {
		if (used[i]) continue;
		vs = vector<int>();
		dfs(i);
		col[vs[0]] = 0;
		now = 0;
		dfs2(1);
		ans *= now*3;
	}
	cout << ans << endl;
	return 0;
    
}