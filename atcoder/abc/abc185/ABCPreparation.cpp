#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];


    cout << *min_element(a, a + 4) << endl;

}
