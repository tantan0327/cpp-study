#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    char S[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }
    int s_count;
    int result = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            s_count = 0;
            if (S[i][j] == '#') {
                s_count++;
            }

            if (S[i+1][j] == '#') {
                s_count++;
            }

            if (S[i][j+1] == '#') {
                s_count++;
            } 

            if (S[i+1][j+1] == '#') {
                s_count++;
            }
            
            if (s_count == 1 || s_count == 3) {
                result++;
            }


        }
    }

    cout << result << endl;

}