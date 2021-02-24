#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int K;
    cin >> K;
    int result = 0;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K/i; j++) {
            for (int k = 1; k <= K/i/j; k++) {
                if (i * j * k <= K) {
                    result++;
                } 
            }
        }
    }
    
    cout << result << endl;
    
}
