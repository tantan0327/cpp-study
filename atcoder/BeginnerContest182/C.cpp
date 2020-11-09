#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long count=0;
    long sum=0;
    long digit;
    vector<int> vec;
    long result = 100000;

    while (N!=0) {
        long a = N%10;
        vec.push_back(a);
        sum += a;
        N /= 10;
        digit++;
    }

    if (sum % 3 == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (long bit = 1; bit < (1<<vec.size()); ++bit) {
        int sum2 = 0;
        vector<int> S;
        for (int i = 0; i < vec.size(); ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(vec[i]);
            }
        }
        for (int a : S) {
            sum2 += a;
        }
        if (sum2 % 3 == 0) {
            if (vec.size() - S.size() < result) {
                result = vec.size() - S.size();
            }
        }
    }

    if (result != 100000) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }

}