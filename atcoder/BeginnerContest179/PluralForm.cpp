#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;

    if (s.substr(s.size()-1 ,1) == "s") {
        cout << s + "es" << endl;
    } else {
        cout << s + "s" << endl;
    }

}