#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, D, H;
    cin >> N >> D >> H;

    int d[N];
    int h[N];

    double ans = 0.0;

    for (int i = 0; i < N; i++) {
        cin >> d[i] >> h[i];
        double temp = (D * h[i] - d[i] * H) / double((D - d[i]));
        if (ans < temp) {
            ans = temp;
        }
        
    }

    cout << fixed << setprecision(15) << ans << endl;

}