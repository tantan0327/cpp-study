#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;

    for (char c : x) {
        if (c != '.') {
            cout << c;
        } else {
            break;
        }
    }

    cout << endl;

}