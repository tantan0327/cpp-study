#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    if (N % 100 == 0) {
        cout << N / 100 << endl;
    } else {
        cout << N / 100 + 1 << endl;
    }

}
