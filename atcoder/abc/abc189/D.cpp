#include <bits/stdc++.h>
#include <iostream>
#include <string>

using ll = long long;
using namespace std;

int main()
{
    int N;
    cin >> N;
    string S[N];
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int result = 0;

    for (int i = N-1; i >= 0; i--) {
        if (S[i] == "OR") { 
            result += pow(2, i+1);
        }
        if (S[i] == "AND") {
            continue;
        }   
    }

    cout << result+1 << endl;

}

