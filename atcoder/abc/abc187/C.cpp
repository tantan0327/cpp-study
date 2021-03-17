#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string S[N];
    unordered_set<string> a_set = {};

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        a_set.insert(S[i]);
    }

    for (const auto& e1 : a_set) {
        if (a_set.count('!' + e1)) {
            cout << e1 << endl;
            return 0;
        }
    }

    cout << "satisfiable" << endl;

}