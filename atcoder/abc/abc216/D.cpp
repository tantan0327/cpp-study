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
    
    int k[M];

    vector<queue<int>> queues;
    bool ans = false;

    for (int i = 0; i < M; i++) {
        cin >> k[i];
        int a[k[i]];
        queue<int> q;
        for (int j = 0; j < k[i]; j++) {
            cin >> a[j];
            q.push(a[j]);
        }
        queues.push_back(q);
    }

    // execute







    cout << "ans" << endl;
}