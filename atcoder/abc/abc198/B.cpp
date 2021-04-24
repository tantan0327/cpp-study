#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N;
    cin >> N;

    int end = N.length() - 1;

    while (N[end] == '0') {
        end--;
    }

    int start = 0;
    while (start < end) {
        if (N[start] != N[end]) {
            cout << "No" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << "Yes" << endl;

}