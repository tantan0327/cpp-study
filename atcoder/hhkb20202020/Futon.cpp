#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    string s[h];
    int result = 0;

    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w - 1 ; j++) {
            if (s[i].at(j) == '.' && s[i].at(j) == s[i].at(j+1)) {
                result++;
            }
        }
    }

    for (int i = 0; i < h-1; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i].at(j) == '.' && s[i].at(j) == s[i+1].at(j)) {
                result++;
            }
        }
    }

    cout << result << endl;

}