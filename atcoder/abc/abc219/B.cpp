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

    string T;

    cin >> T;
    string result = "";

    for (char c : T) {
       if (c == '1') {
           result += S[0];
       }
       if (c == '2') {
           result += S[1];
       }
       if (c == '3') {
           result += S[2];
       }
    }

    cout << result << endl;

    return 0;
}