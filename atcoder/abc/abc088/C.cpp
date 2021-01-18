// #include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    int c[3][3];
    int a[3] = {};
    int b[3] = {};
    for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
             cin >> c[i][j];
        }
    }
    a[0] = 0;
    for (int i = 0; i < 3; i++) {
        b[i] = c[0][i] - a[0];
    }
    for (int i = 0; i < 3; i++) {
        a[i] = c[i][0] - b[0];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i] + b[j] != c[i][j]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    
    cout << "Yes" << endl;
}