#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int n = pow(2, N);
    int A[n];
    int a_max=0;
    int a_index=0;
    int b_max=0;
    int b_index=0;


    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (i < n/2) {
            if (a_max < A[i]) {
                a_max = A[i];
                a_index = i+1;
            }
        } else {
            if (b_max < A[i]) {
                b_max = A[i];
                b_index = i+1;
            }
        }
    }

    if (a_max < b_max) {
        cout << a_index << endl;
    } else {
        cout << b_index << endl;
    }

}