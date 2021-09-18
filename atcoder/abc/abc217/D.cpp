#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using ll = long long;

// template<typename T>
 
template<typename T>
void insertionSort(vector<T> &vec) {
    auto iter = vec.begin() + 1;
    while (iter != vec.end()) {
        auto key = iter;
        auto it = iter - 1;

        while (it >= vec.begin() && *it > *key) {
            std::swap(*it, *key);
            key--;
            it--;
        }
        iter++;
    }
}

int main()
{

    int L, Q;
    cin >> L >> Q;
    
    int c[Q], x[Q];

    vector<int> p;
    p.push_back(0);
    p.push_back(L);

    for (int i = 0; i < Q; i++) {
        cin >> c[i] >> x[i];
        if (c[i] == 1) {
            p.push_back(x[i]);
        }
        if (c[i] == 2) {
            insertionSort(p);
            for (int j = 0; j < p.size(); j++) {
                if (p[j] > x[i]) {
                    cout << p[j] - p[j - 1] << endl;
                    break;
                }
            }
        }
    }

    return 0;
}