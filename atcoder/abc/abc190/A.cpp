#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int  a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        if (c == 0) {
            cout <<"Aoki" << endl;
            return 0;
        } else {
            cout <<"Takahashi" << endl;
            return 0;
        }
    }
    if (a > b) {
        cout << "Takahashi"<< endl;
    }
    if (a < b) {
        cout << "Aoki" << endl;
    }
}
