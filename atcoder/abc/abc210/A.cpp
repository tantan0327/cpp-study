#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N, A, X , Y;
    cin >> N >> A >> X >> Y;

   if (N <= A) {
       cout << N * X << endl;
   } else {
       cout << A * X + (N - A) * Y << endl;
   }

}
