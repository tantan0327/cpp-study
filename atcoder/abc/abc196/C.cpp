#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    cin >> N;

    long ans = 0;

    if (N > 100) {
        ans = 9;
    } else {
        ans += N / 11;
        cout << ans << endl;
        return 0;
    }

    if (N > 10000) {
        ans = 99;
    } else if (N > 1000) {
        if (N / 100 - N % 100 > 0) {
            ans += N/100 - 10;
        } else {
            ans += N/100 - 9;
        }
        cout << ans << endl;
        return 0;
    }

    if (N > 1000000) {
        ans = 999;
    } else if (N > 100000) {
        if (N / 1000 - N % 1000 > 0) {
            ans += N/1000 - 100;
        } else {
            ans += N/1000 -99;
        }
        cout << ans << endl;
        return 0;
    }


    if (N > 100000000) {
        ans = 9999;
    } else if (N > 10000000) {
        if (N / 10000 - N % 10000 > 0) {
            ans += N/10000 - 1000;
        } else {
            ans += N/10000 - 999;
        }
        cout << ans << endl;
        return 0;
    }

    if (N > 10000000000) {
        ans = 99999;
    } else if (N > 1000000000) {
        if (N / 100000 - N % 100000 > 0) {
            ans += N/100000 - 10000;
        } else {
            ans += N/100000 - 9999;
        }
        cout << ans << endl;
        return 0;
    }

    if (N > 100000000000) {
        if (N / 1000000 - N % 1000000 > 0) {
            ans += N/1000000 - 100000;
        } else {
            ans += N/1000000 - 99999;
        }
        cout << ans << endl;
        return 0;
    }

    cout << ans << endl;
    
}