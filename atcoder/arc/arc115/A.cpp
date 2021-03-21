#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N, M;
    cin >> N >> M;
    string S[N];
    ll odd = 0;
    ll even = 0;
    ll score = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> S[i];

        for (char c : S[i]) {
            if (c == '1') {
                score++;
            }
        }

        if (score % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        score = 0;
    }

    cout << even * odd << endl;
    
}