#include <bits/stdc++.h>
#include <iostream>
#include <string>
using ll = long long;
using namespace std;

// Counts distinct elements in window of size k
int countDistinct(int arr[], int k, int n)
{

    int max = 0;

    // Creates an empty hashmap hm
    unordered_map<int, int> hm;
 
    // initialize distinct element count for current window
    int dist_count = 0;
 
    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++) {
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
    }
 
    if (dist_count > max) {
        max = dist_count;
    }
    
    // Traverse through the remaining array
    for (int i = k; i < n; i++) {
        // Remove first element of previous window
        // If there was only one occurrence, then reduce distinct count.
        if (hm[arr[i - k]] == 1) {
            dist_count--;
        }
        // reduce count of the removed element
        hm[arr[i - k]] -= 1;
 
        // Add new element of current window
        // If this element appears first time,
        // increment distinct element count
 
        if (hm[arr[i]] == 0) {
            dist_count++;
        }
        hm[arr[i]] += 1;
 
        // Print count of current window
        // cout << dist_count << endl;
        if (dist_count > max) {
            max = dist_count;
        }
    }
    
    return(max);
}


int main(){
	int N, K;
	cin >> N >> K;

	int c[N];
    for (int i = 0; i < N; i++) {
        cin >> c[i];
    }

    cout << countDistinct(c, K, N) << endl;
}