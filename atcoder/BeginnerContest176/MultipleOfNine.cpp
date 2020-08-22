#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    string n;
    cin >> n;
    long sum = 0;

    for(int i = 0; i < (int)n.size(); ++i){
        sum += (int) n[i] - 48;
    }

    if (sum % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}