#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    int count = 0;
    int max_count = 0;
    int result = 0;

    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    int max = *max_element(A, A+N); 
    
    for (int i = 2; i <= max; i++) {
        count = 0;
        for(int a : A) {
            if (a % i == 0) {
                count++;
            }
        }
        if (max_count < count) {
            max_count = count;
            result = i;
        }
    }

    cout << result << endl;

}