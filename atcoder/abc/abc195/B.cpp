#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int A, B, W;
    cin >> A >> B >> W;

    int m = 1000000001;
    int M = 0;

    for (int n=1; n <= 1000000; n++) {
        if (A*n <= 1000 * W && B*n >= 1000 * W) {
            m = min(m, n);
            M = max(M, n);
        }
    }

    if (M == 0) cout << "UNSATISFIABLE" << endl;
    else cout << m << " " << M << endl;

}