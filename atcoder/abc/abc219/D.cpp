#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
using ll = long long;

int binary_search(map<int, vector<int> >& m,
                  int value, int index)
{
    // Search the value in map
    auto it = m.lower_bound(value);
  
    // If all keys in the map
    // are less then value
    if (it == m.end())
        return 0;
  
    // Check if the sum is found
    // at a greater index
    auto it1
        = lower_bound(it->second.begin(),
                      it->second.end(), index);
  
    if ((it1 - it->second.begin())
        != it->second.size())
        return *it1;
  
    return 0;
}
  
// Function to find the smallest subarray
// with sum greater than equal to K
int findSubarray(int arr[], int n, int k)
{
  
    // Prefix sum array
    int pre_array[n];
  
    // Stores the hashes to prefix sum
    map<int, vector<int> > m;
  
    pre_array[0] = arr[0];
    m[pre_array[0]].push_back(0);
  
    // If any array element is
    // greater than equal to k
    if (arr[0] >= k)
        return 1;
  
    int ans = INT_MAX;
    for (int i = 1; i < n; i++) {
  
        pre_array[i]
            = arr[i] + pre_array[i - 1];
  
        // If prefix sum exceeds K
        if (pre_array[i] >= k)
  
            // Update size of subarray
            ans = min(ans, i + 1);
  
        auto it = m.rbegin();
  
        // Hash prefix sum in
        // increasing order
        if (pre_array[i] >= it->first)
            m[pre_array[i]].push_back(i);
    }
  
    for (int i = 1; i < n; i++) {
  
        int temp
            = binary_search(m,
                            pre_array[i - 1] + k,
                            i);
        if (temp == 0)
            continue;
  
        // Update size of subarray
        ans = min(ans, temp - i + 1);
    }
  
    // If any subarray is found
    if (ans <= n)
        return ans;
  
    // If no such subarray exists
    return -1;
}

int main()
{

    int N, X, Y;
    cin >> N;
    cin >> X >> Y;

    int A[N];
    int B[N];
    int total_A = 0;
    int total_B = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        total_A += A[i];
        total_B += B[i];
        if (A[i] > X && B[i] > Y) {
            cout << 1 << endl;
        }
    }

    if (total_A < X || total_B < Y) {
        cout << -1 << endl;
        return 0;
    }

    int a_min = findSubarray(A, N, X); 
    int b_min = findSubarray(B, N, Y); 

    if (a_min < b_min) {
        cout << b_min << endl;
    } else {
        cout << a_min << endl;
    }

    return 0;
}