#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;

    cin >> S;

    reverse(S.begin(), S.end());

    for (char c : S) {
        if (c == '6') {
            cout << '9';
            continue;
        }
        if (c == '9') {
            cout << '6';
            continue;
        }
        cout << c;

    }

    cout << endl;

}