#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string to_oct(int n){
    string s;
    while(n){
        s = to_string(n%8) + s;
        n /= 8;
    }
    return s;
}

int main()
{
    int N;
    int result = 0;
    cin >> N;
    string s1;
    string s2;
    bool b = false;
    
    for (int i = 1; i <= N; i++) {
        b = false;
        s1 = to_string(i);
        for(char c : s1) {
            if (c == '7') {
                result++;
                b = true;
                break;
            }
        }

        if (b == true) {
            continue;
        }

        s2 = to_oct(i);
        for(char c : s2) {
            if (c == '7') {
                result++;
                break;
            }
        }
    }

    cout << N - result << endl;

}