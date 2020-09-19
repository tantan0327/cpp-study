#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int D[n][2];
    int count = 0;

    for(int i=0; i<n; i++) {
        cin >> D[i][0] >> D[i][1];
    }
    
    for(int j=0; j<n; j++) {
        if (D[j][0] == D[j][1]) {
            count++;
            if(count == 3) {
                cout << "Yes" << endl;
                return 0;
            }
        } else {
            count = 0;
        }
    }

    cout << "No" << endl;

}