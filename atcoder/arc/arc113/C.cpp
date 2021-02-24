#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    ll result = 0;

    for (int i = (int)s.size() - 1; i > 0;i--) {
        if (s[i] == s[i - 1]) {
            for (int j = i+1; j < (int)s.size(); j++) {
                if (s[i] != s[j]) {
                    result++;
                    s[j] = s[i];
                }
            }
        }
    }
    
    cout << result << endl;
}
