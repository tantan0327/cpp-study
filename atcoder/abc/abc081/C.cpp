#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void printElems(const int* begin, const int* end)
    {
        for (const int* p = begin; p != end; ++p) {
            std::cout << *p << std::ends;
        }
        std::cout << std::endl;
    }

int main()
{
    int N, K;
    cin >> N >> K;
    int A[N];
    int m[N] = {};
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        m[A[i]-1]++;
    }
    sort(m, m+N, greater<>());

    for (int i = 0; i < K; i++) {
        sum += m[i];
    }
    
    cout << N-sum << endl;
}