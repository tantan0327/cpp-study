#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int  A, B, C, D;
    cin >> A >> B >> C >> D;

    if (C > D) {
        cout << B - D << endl;
    } else {
        cout << B - C << endl;
    }

}
