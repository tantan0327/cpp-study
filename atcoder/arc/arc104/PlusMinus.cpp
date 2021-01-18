#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;


    for (int i =-100; i <= 100 ; i++) {
        for(int j=-100; j<=100; j++) {
            if (i+j==a && i-j==b) {
                cout << i << " " << j << endl;
            }
        }
    }
}