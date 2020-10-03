#include <bits/stdc++.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    string s;
    int a_count, c_count, g_count, t_count;
    int result = 0;
 
    cin >> n >> s;
    for(int i=0; i < n; i++) {
        for(int j=2; j <= n - i; j=j+2) {
            a_count, c_count, g_count, t_count = 0;
            string t = s.substr(i, j);
            for (char& c : t) {
                if (c == 'G') {
                    g_count++;
                    continue;
                }
                if (c == 'C'){
                    c_count++;
                    continue;
                }
                if (c == 'T'){
                    t_count++;
                    continue;
                }
            }
            if ((t.length() - g_count - c_count - t_count) == t_count && c_count == g_count) {
                result++;
            }
        }
    }
    cout << result << endl;
 
}