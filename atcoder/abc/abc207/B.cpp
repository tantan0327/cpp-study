#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;

    cin >> N;

    long total = 0;

    for (long i = 1; i <= N; i++) {
        total += i;
        if (total >= N) {
            cout << i << endl;
            return(0);
        }
    }

}