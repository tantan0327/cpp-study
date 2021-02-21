#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    for (int i = 0; i <  (int) S.size(); i++) {
        char c = S[i];
        if (i % 2 == 0) {
            if(islower(c)) {
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if(isupper(c)) {
                continue;
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

}