#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;

    cin >> N;

    int A[N];

    unordered_set<int> us = {};

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (us.count(A[i])) {
            cout << "No" << endl;
            return 0;
        }
        us.insert(A[i]);
    }

    cout << "Yes" << endl;

}