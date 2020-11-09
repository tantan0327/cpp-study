#include <bits/stdc++.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int N;
    cin >> N;
    int A[N];
    long max = 0;
    long now = 0;
 
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
 
    for (int i = 0; i<N;i++) {
        for (int j = 0; j<=i; j++) {
            now += A[j];
            if (max < now) {
                max = now;
            } 
        }
    }
 
    cout << max << endl;
 
}