#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using ll = long long;


vector<int> find_X(int x)
{
    vector<int> res;

    for (int i = 2; i * i <= x; i++) {
        while (x%i == 0) {
            x /= i;
            res.push_back(i);
        }
    }

    if (x != 1) {
        res.push_back(x);
    }    

 
    return res;
}

 
// Driver Code
int main()
{

    int N, M;
    cin >> N >> M;
    
    int A[N];

    vector<bool> prime(M+1,true);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (auto i : A) {
        vector<int> tmp = find_X(i);
        for(auto &nx : tmp) {
            if(prime[nx]){
                for(int j=nx;j<M+1;j+=nx){prime[j]=false;}
            }
        }
    }

    vector<int> res;
    for(int i=1;i<=M;i++){
        if(prime[i]){res.push_back(i);}
    }
    
    cout << res.size() << endl;

    for (int i : res) {
        cout << i << endl;
    }
    
}