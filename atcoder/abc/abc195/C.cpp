#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    long temp;
    long count = 1;
    long result = 0;

    cin >> N;

    if (N < 1000) {
        cout << 0 << endl;
        return 0;
    }

    temp =  N/1000;
    while (temp >= 1000) {
        count++;
        result += (pow(1000, count)  - pow(1000, count - 1)) * (count - 1);
        temp /= 1000;
    }

    result += (N - pow(1000, count) + 1) * count; 

    cout << result << endl;
}