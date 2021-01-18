#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
    ll temp;
    while (b != 0) {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

ll combi1(ll n, ll r){
    if (r == 0) {
        return 1;
    }
    //掛け算を先にするとオーバーフローする
    //return (n - r + 1) * combi(n, r - 1) / r;
    //と言うわけで掛ける前に割っておく
    ll n1 = n - r + 1;
    ll n2 = combi1(n, r - 1);
    ll d = r;
    //n2/d だけでは割り切れない可能性があるので、最大公約数を求める
    ll div = gcd(n2, d);
    n2 /= div;
    d /= div;
    //組み合わせは必ず整数になるからもう割り切れる
    n1 /= d;
    //割り算が終わったら掛ける
    return n1 * n2;
}

int main()
{
    long L;
	cin >> L;
	long denominator = 1;
	long numerator = 1;

	cout << combi1(L-1 , 11) << endl;
	return 0;
}