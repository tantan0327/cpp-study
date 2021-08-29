#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using ll = long long;
 
int main()
{

    int N, M;
    cin >> N >> M;
    
    // colors of ball which is able to be removed
    queue<int> que;

    vector<queue<int>> A(M);

    // note each ball is in which queue(max size of each vector should be 2)
    vector<vector<int>> mem(N);

    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int a;
            cin >> a;
            A[i].push(a - 1);
        }
        mem[A[i].front()].push_back(i);
    }

    for (int i = 0; i < N; i++) {
        if (mem[i].size() == 2) {
            que.push(i);
        }
    }

    while(!que.empty()) {
        int now = que.front();
        que.pop();
        for (auto p : mem[now]) {
            A[p].pop();
            if (!A[p].empty()) {
                mem[A[p].front()].push_back(p);
                if (mem[A[p].front()].size() == 2) {
                    que.push(A[p].front());
                }
            }
        }
    }

    for (auto p : A) {
        if (!p.empty()) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}