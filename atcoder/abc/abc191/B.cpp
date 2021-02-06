#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;
    bool exist = false;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (A[i] != X && exist) {
            cout << " " << A[i];
        } else if (A[i] != X) {
            cout << A[i];
            exist = true;
        }
    }
    cout << endl;

}