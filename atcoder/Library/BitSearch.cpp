#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int A[M];
    int B[M];
    int result=0;
    int temp_result=0;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }

    int d[101] = {0};

    int K;
    cin >> K;
    int CD[K][2];
    for (int i = 0; i < K; i++) {
        cin >> CD[i][0] >> CD[i][1];
    }

    int count = 0;
    // {0, 1, ..., K-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<K); ++bit) {
        count++;
        // reset dishes
        for (int i = 0; i < 101; i++) {
            d[i] = 0;
        }


        for (int j = 0; j < K; j++) {
            int n = (bit >> j) & 1;
            d[CD[j][n]]++;
        }

        temp_result = 0;
        for (int i = 0; i < M; i++) {
            if (d[A[i]] > 0 && d[B[i]] > 0) {
                temp_result++;
            }
        }

        result = max(result, temp_result);
    }

    cout << result << endl;

}