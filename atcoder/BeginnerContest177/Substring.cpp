#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    string p="";
    int sum = 0;
    int result = 0;
    for (int i=0; i < s.size() - t.size() + 1; i++) {
        sum = 0;
        string temp = s.substr(i, t.size());
        for (int j = 0; j < t.size(); j++) {
            if (temp[j] == t[j]) {
                sum++;
            }
        }
        if (result < sum) {
            result = sum;
        }
    }
    
    cout << t.size() - result << endl;
}