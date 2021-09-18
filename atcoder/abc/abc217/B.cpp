#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    string S[3];
    
    for (int i = 0; i < 3; i++) {
        cin >> S[i];
    }

    string a[4] = {"ABC", "ARC", "AGC", "AHC"};

    for (int i = 0; i < 4; i++) {
        bool flag = false;
        for (int j = 0; j < 3; j++) {
            if (a[i] == S[j]) {
                flag = true;
                continue;
            }
        }
        if (flag) {
            continue;
        }
        cout << a[i] << endl;
    }

    return 0;
}