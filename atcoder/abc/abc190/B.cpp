#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, S, D;
    cin >> N >> S >> D;
    int X[N];
    int Y[N];
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
        if (X[i] < S && Y[i] > D) {
            cout << "Yes" << endl;
            return 0;
        } 
    }

    cout << "No" << endl;

}