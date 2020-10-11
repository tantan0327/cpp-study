#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    int p[N];
    for (int i = 0; i < N ; i++) {
        cin >> p[i];
    }
    int max_p = 0;
    int min_p = 2000000;
    int ans = 0;

    int result = 0;

    for (int i = 0; i < N; i++) {
        if (min_p > p[i]) {
            min_p = p[i];
        }
        if (result < p[i]) {
            cout << result << endl;
        } else {
            for (int j = 0; j < i+1 ; j++) {
                if (min_p+1 == p[j]) {
                    min_p = p[j]+1;
                }
            }
            result = ans;
            cout << result << endl;
        }
    }
 
}
