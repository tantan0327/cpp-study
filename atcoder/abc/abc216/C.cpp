#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;


int main(){
	ll N;
    cin >> N;

    string ans = "";

    ll n = 0;
    n++;

    while (N != 0) {
        if (N % 2 == 0){
            N /= 2;
            ans = "B" + ans;
        } else {
            N--;
            ans = "A" + ans;
        }
    }

    cout << ans << endl;
    return 0;
}