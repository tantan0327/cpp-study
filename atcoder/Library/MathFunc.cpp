#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// int GCD
int GCD(int m, int n) {
    if (n == 0) return m;

    return GCD(n, m % n);
}

// ll gcd
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

/*  lcm2 (a, b) : 2整数版
    入力：整数 a, b
    出力：aとbの最小公倍数
*/
long long lcm2(long long a, long long b) {
    long long d = gcd(a, b);
    return a / d * b;
}

/* lcm (vec) : ベクトルでの多整数版
    入力：整数のベクトル vec
    出力：すべての要素の最小公倍数
*/
long long lcm(const vector<long long> &vec) {
    long long l = vec[0];
    for (int i = 0; i < vec.size() - 1; i++) {
        l = lcm2(l, vec[i + 1]);
    }
    return l;
}

// 桁数カウント
int cnt_digits(ll N){
    int digits=0;

    while(N>0){
        N/=10;
        digits++;
    }

    return digits;
}

template<class T> void chmin(T& a, T b) {
    if (a > b) {
        a = b;
    }
}

template<class T> void chmax(T& a, T b) {
    if (a < b) {
        a = b;
    }
}

bool isPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

bool coprime(int a, int b) { 
      
    if ( __gcd(a, b) == 1) 
        return true;
    else
        return false;      
}

// 8進数に変換
string to_oct(int n){
    string s;
    while(n){
        s = to_string(n%8) + s;
        n /= 8;
    }
    return s;
}

// 深さ優先探索
void dfs(int i, int bit, int A, int B) {
    // 
    if (i == H * W) return (void)ans++;
    if (bit & 1 << i) return dfs(i + 1, bit, A, B);
    if (B) dfs(i + 1, bit | 1 << i, A, B - 1);
    if (A) {
        if (i % W != W - 1 && ~bit & 1 << (i + 1)) dfs(i + 1, bit | 1 << i | 1 << (i + 1), A - 1, B);
        if (i + W < H * W) dfs(i + 1, bit | 1 << i | 1 << (i + W), A - 1, B);
    }
}

ll dfs2(int i, int j, int a, int b) {
    if (a < 0 || b < 0) return 0;
    if (j == W) j = 0, ++i;
    if (i == H) return 1;
    // マスが埋まっていたらスキップ
    if (used[i][j]) return dfs2(i, j+1, a, b);
    ll res = 0;
    used[i][j] = true;
    // 1マスの畳を使う場合
    res += dfs2(i, j+1, a, b - 1);

    // 2マスの畳を横に置く
    if (j+1 < W && !used[i][j+1]) {
        used[i][j+1] = true;
        res += dfs2(i, j+1, a-1, b);

        used[i][j+1] = false;
    }

    // 2マスの畳を縦に置く
    if (i+1 < H && !used[i+1][j]) {
        used[i+1][j] = true;
        res += dfs2(i, j+1, a-1, b);

        used[i+1][j] = false;
    }

    used[i][j] = false;

    return res;
}



int main() {
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}