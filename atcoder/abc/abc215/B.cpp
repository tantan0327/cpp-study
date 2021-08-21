#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

int main()
{
    ll N;
    cin >> N;

    ll temp = 1;

    for (ll i = 0; i < 1000; i++) {
        if (temp > N) {
            cout << i - 1 << endl;
            break;
        }
        temp *= 2L;
    }

}