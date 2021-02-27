#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i,a,b) for(int i=a;i<b;i++)

using ll = long long;
using namespace std;

int ctoi(const char c){
    if('0' <= c && c <= '9') return (c-'0');
    return -1;
}

int main()
{
    int K;
    cin >> K;
    string S;
    string T;
    cin >> S >> T;
    int A[10] = {0};
    int B[10] = {0};
    int C[10] = {K};
    long result = 0;
    for (int i = 0; i <  (int) S.size()-1; i++) {
        A[ctoi(S[i])]++;
        C[ctoi(S[i])]--;
        B[ctoi(T[i])]++;
        C[ctoi(T[i])]--;
    }

    int S_score = 0;
    int T_score = 0;

    // for (int i = 1; i <  10; i++) {
    //     S_score += pow(10, A[i]) * i;
    //     T_score += pow(10, A[i]) * i;
    // }

    for (int i = 1; i < 10; i++) {
        S_score = 0;
        T_score = 0;
        if (S[i] + T[i] == C[i]) {
            continue;
        }
        S[i]++;
        C[i]--;
        for (int j = 1; j < 10; j++) {
            if (S[j] + T[j] == C[j]) {
                continue;
            }
            T[j]++;
            C[j]--;
            for (int i = 1; i <  10; i++) {
                S_score += pow(10, A[i]) * i;
                T_score += pow(10, A[i]) * i;
            }
            if (S_score > T_score) {
                result += (C[i] + 1) * (C[j] + 1);
            }
            T[j]--;
            C[j]++;
        }
        S[i]--;
        C[i]++;
    }

    cout << (double) result / (double) ((9 * K - 10) * (9 * K - 11)) << endl;

}