#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

unordered_map<char, int> h;
 
bool compare(string x, string y)
{
    for (int i = 0; i < min(x.size(), y.size()); i++) {
        if (h[x[i]] == h[y[i]])
            continue;
        return h[x[i]] < h[y[i]];
    }
    return x.size() < y.size();
}


int main(){
    string X;
    int N;

    cin >> X;
    cin >> N;

    vector<string> v;
    string S[N];

    for (int i = 0; i < N; i++) {
        cin >> S[i];
        v.push_back(S[i]);
    }

    h.clear();
    for (int i = 0; i < X.size(); i++)
        h[X[i]] = i;   
 
    sort(v.begin(), v.end(), compare);
 
    // Print the strings after sorting
    for (auto x : v)
        cout << x << endl;
     
    return 0;

    return 0;
}