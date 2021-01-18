#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long Sx, Sy, Gx, Gy;
    cin >> Sx >> Sy >> Gx >> Gy;
    double a = Gy + Sy;
    long b = (Gx - Sx) * Gy - (Gy + Sy) * Gx;
    double result = -b/a;
    cout << fixed << setprecision(10) << result << endl;

}