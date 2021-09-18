#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <algorithm>

using namespace std;
using ll = long long;
 
int main()
{

    ll N, K;
    cin >> N >> K;
    
    vector<int> A;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
    }

    sort(A.begin(), A.end(), std::greater<int>());

    int hist = 0;
    int hist_count = 0;

    ll ans = 0;

    ll p = 0;

    for (int i = 0; i < K; i++) {
        if (A[p] == 0) {
            break;
        }

        if (A[p] == hist && A[p] >= A[p+1]) {
            for (int j = 0; j < hist_count; j++) {
                ans += hist;
                i++;
                if (i == K) {
                    break;
                }
            }
            hist--;
            ans += A[p];
            A[p]--;
        } else if (A[p] >= A[p+1]) {
            ans += A[p];
            A[p]--;
        } else {
            hist = A[p];
            hist_count++;
            p += 1;
            ans += A[p];
            A[p]--;
        }
    }

    cout << ans << endl;
}