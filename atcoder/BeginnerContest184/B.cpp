#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N, X;
    string S;
    cin >> N >> X;
    cin >> S;
    
    for (char& c : S) {
        if (c == 'o') {
            X++;
        } else if (c == 'x') {
            if (X > 0) {
                X--;
            }
        }
    }

    cout << X << endl;

}