#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    long N;
    cin >> N;
    long temp;
    unordered_set<long> st;

    for (long i = 2; i * i <= N; i++) {
        temp = i * i;
        while (N >= temp) {

            if (st.count(temp)) {
                temp *= i;
                continue;
            }

            st.insert(temp);
            temp *= i;
        }
    }

    cout << N - st.size() << endl;

}