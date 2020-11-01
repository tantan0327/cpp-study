#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    long A[N];
    long B[N];
    long count = 0;

    for(int i=0; i<N; i++) {
        cin >> A[i] >> B[i];
    }
    
    for(int j=0; j<N; j++) {
        count += ((B[j] + A[j]) * (B[j] - A[j] + 1)) / 2;
    }

    cout << count << endl;

}