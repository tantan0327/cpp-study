#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int S, T;

    cin >> S >> T;

    long count = 0;

    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 100; k++) {
                if (i == 0 || j == 0 || k == 0) {
                    if (i + j + k <= S) {
                        count++;
                    }
                } else {
                    if (i + j + k <= S && i * j * k <= T) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;

}