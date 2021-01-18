#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    long x[N];
    long y[N];
    long count = 0;

    for(int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }
    
    for(int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                if ((y[k] - y[i]) * (x[j] - x[i]) == (y[j] - y[i]) * (x[k] - x[i])) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;

}