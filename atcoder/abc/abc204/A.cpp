#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int x ,y;
    cin >> x >> y;

    if (x == y) {
        cout << x << endl;
        return 0;
    } else {
        cout << 3 - x - y << endl;
    }

}
