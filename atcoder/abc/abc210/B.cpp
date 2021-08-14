#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    string S;

    cin >> N;
    cin >> S;

    long count = 0;

    for (char c : S) {
        count++;
        if (c == '1') {
            break;
        }
    }

    if (count % 2 == 0) {
        cout << "Aoki" << endl;
    } else {
        cout << "Takahashi" << endl;
    }

}