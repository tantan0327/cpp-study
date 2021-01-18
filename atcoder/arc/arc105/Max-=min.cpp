#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    long a[N];
    for(int i=0; i < N; i++) {
        cin >> a[i];
        
    }
 
    long max = 0;
    long min = 10000000000;
    set<int> st;
    while (true) {
        max = 0;
        min = 10000000000;

        // neck
        for(int j = 0; j < N; j++) {
            if( a[j] >= max ) {
                if (max == a[j]) {
                    st.insert(j);
                } else {
                    max = a[j];
                    st.clear();
                    st.insert(j);
                }
            }
            if( a[j] < min ) {
                min = a[j];
            }
        }

        if (max==min) {
            break;
        }
        for(auto x : st) {
            a[x] = max-min;
        }
    }
        
    cout << max << endl;
 
    return 0;
}