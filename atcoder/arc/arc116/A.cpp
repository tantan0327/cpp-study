#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int T;
    cin >> T;
    ll c[T];
    
    for (int i = 0; i < T; i++) {
        cin >> c[i];

        if (c[i] % 2 != 0) {
            cout << "Odd" << endl;
        } else if (c[i] / 2  % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Same" << endl;
        }
    }
    
}