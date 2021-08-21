#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;


// C++ program to print nth permutation with
// using next_permute()
#include <bits/stdc++.h>
using namespace std;
  
// Function to print nth permutation
// using next_permute()
string nPermute(string str, ll n)
{
    // Sort the string in lexicographically
    // ascending order
    sort(str.begin(), str.end());
  
    // Keep iterating until
    // we reach nth position
    long int i = 1;
    do {
        // check for nth iteration
        if (i == n)
            break;
  
        i++;
    } while (next_permutation(str.begin(), str.end()));
  
    return str;
}


int main(){
	string S;
    ll K;

	cin >> S;
    cin >> K;

    cout << nPermute(S, K) << endl;
    return 0;
}