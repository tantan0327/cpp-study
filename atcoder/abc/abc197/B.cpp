#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    int ans1 = 0;
    int ans2 = 0;
    string S[H];

    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    bool a = false;
    for (int i = 0; i < W; i++) {

        if (a == true && S[X-1][i] == '#') {
            break;
        }
        if (S[X-1][i] == '#') {
            ans1 = 0;
            continue;
        } else if (S[X-1][i] == '.') {
            ans1++;
            if (i == Y - 1) {
                a = true;
            }
        }
    }

    bool b = false;
    for (int i = 0; i < H; i++) {
        if (b == true && S[i][Y - 1] == '#') {
            break;
        }
        if (S[i][Y - 1] == '#') {
            ans2 = 0;
            continue;
        } else if (S[i][Y - 1] == '.') {
            ans2++;
            if (i == X - 1) {
                b = true;
            }
        }
    }

    cout << ans1 + ans2 - 1 << endl;

}