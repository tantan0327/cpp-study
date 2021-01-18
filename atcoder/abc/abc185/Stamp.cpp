#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
using ll = long long;

int gcd(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

int gcd_arr(vector<int> &a){
  int n = a.size();
  for(int i=n-2; i>=0; i--){
    a[i] = gcd(a[i], a[i+1]);
  }
  return a.front();
}

int main()
{
    int N, M;
	int result = 0;
	cin >> N >> M;
	int A[M];
	for (int i = 0; i < M; i++) {
        cin >> A[i];
    }
	sort(A, A+M);
	vector<int> interval;
	interval.push_back(A[0] - 1);
	interval.push_back(N - A[M-1]);
	cout << N - A[M-1]<< endl;
	result += (A[0] - 1) + (N - A[M-1] -  1);
	for (int i = 0; i < M-1; i++) {
		int tmp = A[i+1] - A[i]-1;
		interval.push_back(tmp);
		cout << tmp << endl;
		result += tmp;
	}
	cout << result / gcd_arr(interval) << endl;
	return 0;
}