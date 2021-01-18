#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long n[4];
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    long p[4] = {n[0] * n[2], n[1] * n[2], n[0] * n[3], n[1] * n[3]};
    sort(p, p+4);

    cout << p[3] << endl;

}