#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;

    if ((A1 + A2 + A3) / 3 == A1 ||
        (A1 + A2 + A3) / 3 == A2 ||
        (A1 + A2 + A3) / 3 == A3) {
            if ((A1 + A2 + A3) % 3 == 0) {
                cout << "Yes" << endl;
                return 0;
            }
    }
    cout << "No" << endl;

}
