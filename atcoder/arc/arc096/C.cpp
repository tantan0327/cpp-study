#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    ll sum = 0;
    ll result = 99999999999;

    for (int i = 0; i <= 100000; i++) {
        if (x >= 0 && y >= 0) {
            sum = a * max(0, x-i) + b * max(0, y-i) + 2 * c * i;
            if (result > sum) {
                result = sum;
            }
        }
    }
    
    cout << result << endl;
}