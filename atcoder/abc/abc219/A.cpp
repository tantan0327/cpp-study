#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int X;
    cin >> X;

    if (X < 40) {
        cout << 40 - X << endl;
    } else if (X < 70){
        cout << 70 - X << endl;
    } else if (X < 90) {
        cout << 90 - X << endl;
    } else if (X <= 100) {
        cout << "expert" << endl;
    }

}
