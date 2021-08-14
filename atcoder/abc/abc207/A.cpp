#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int A, B , C;
    cin >> A >> B >> C;

    if ((A + B) >= (A + C) && (A + B) >= (B + C)) {
        cout << A + B << endl;
    } else if ((B + C) >= (A + C) && (B + C) >= (A + B)) {
        cout << B + C<< endl;
    } else {
        cout << A + C << endl;
    }

}
