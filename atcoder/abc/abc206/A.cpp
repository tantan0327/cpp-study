#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int X;
    cin >> X;

    if (X * 1.08 < 206) {
        cout << "Yay!" << endl;
    } else if (X * 1.08 >= 206 && X * 1.08 < 207) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }

}
