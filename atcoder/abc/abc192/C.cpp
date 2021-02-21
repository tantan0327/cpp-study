#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int S[10];
    int g1 = 0;
    int g2 = 0;
    int digits = 0;
    
    for (int j = 0; j < K; j++) {
        digits = to_string(N).length();
        for (int i = 0; i < 10; i++) {
            S[i] = -1;
        }

        for (int i = 0; i < digits; i++) {
            S[i] = N % 10;
            N /= 10;
        }

        sort(S, S+10, greater<>());

        g1 = 0;
        g2 = 0;

        for (int i = 0; i < digits; i++) {
            if (S[i] > -1) {
                g1 += S[i] * pow(10, digits - i - 1);
            }
        }

        int  temp = g1;

        while (temp > 0) {
            g2 = g2 * 10 + temp % 10;
            temp /= 10;
        }

        N = g1 - g2;


    }

    cout << N << endl;

}