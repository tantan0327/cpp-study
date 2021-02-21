#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll = long long;
using namespace std;


class Radix {
    private:
    const char* s;
    int a[128];
    public:
    Radix(const char* s = "0123456789ABCDEF") : s(s) {
        int i;
        for(i = 0; s[i]; ++i)
        a[(int)s[i]] = i;
    }
    std::string to(long long p, int q) {
        int i;
        if(!p)
        return "0";
        char t[64] = { };
        for(i = 62; p; --i) {
        t[i] = s[p % q];
        p /= q;
        }
        return std::string(t + i + 1);
    }
    std::string to(const std::string& t, int p, int q) {
        return to(to(t, p), q);
    }
    long long to(const std::string& t, int p) {
        int i;
        long long sm = a[(int)t[0]];
        for(i = 1; i < (int)t.length(); ++i)
        sm = sm * p + a[(int)t[i]];
        return sm;
    }
};


int main()
{
    string X;
    ll M;
    cin >> X >> M;
    int result = 0;
    int d;

    for (int i = 0; i <  (int) X.size(); i++) {
        char c = X[i];
        d = max(d, (int)(c - '0'));
    }

    Radix r;
    ll n;
    while (true) {
        n = r.to(X, d+1);
        if (M < n) {
            break;
        }
        result++;
        d++;        
    }

    cout << result << endl;

}