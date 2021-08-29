#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    float XY;
    cin >> XY;

    float integral_part = 0;
    float fractional_part = modf(XY, &integral_part);

    int ans = integral_part;

    if (fractional_part <= 0.21 ) {
        cout << to_string(ans) + "-" << endl;
    } else if (fractional_part <= 0.61) {
        cout << to_string(ans) << endl;
    } else {
        cout << to_string(ans) + "+" << endl;
    }

}
