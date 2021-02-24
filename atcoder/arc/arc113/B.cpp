#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
using ll = long long;

int main()
{
    ll A, B, C;
    cin >> A >> B >> C;

    ll BC = 0;
    if (C % 4 != 0) {
        BC = pow(B % 4, C % 4);
    } else {
        BC = pow(B % 4, 4);
    }
    
    ll ABC = 0;
    if (BC % 4 != 0) {
        ABC = pow(A % 10, BC % 4);
    } else {
        ABC = pow(A % 10, 4);
    }
    ABC = ABC % 10;

    cout << ABC << endl;
    
}
