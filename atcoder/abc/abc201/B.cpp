#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    cin >> N;

    string S[N];
    int T[N];

    int max = 0;
    int max2 = 0;
    int max_i = 0;
    int max2_i = 0;

    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }

    for (int i = 0; i < N; i++) {
       if (T[i] > max) {
           max2 = max;
           max2_i = max_i;
           max = T[i];
           max_i = i;   
       } else if (T[i] > max2) {
           max2 = T[i];
           max2_i = i;
       }
    }

    cout << S[max2_i] << endl;

}