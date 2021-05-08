#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'Z') {
            if (s[i+1] == 'O') {
                if (s[i+2]== 'N') {
                    if (s[i+3] == 'e') {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

}
