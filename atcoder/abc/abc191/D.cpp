#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }

using ll = long long;
using namespace std;

void cf(double x, double r, long *low, long *high){
    *low = ceil(x-r);
    *high = floor(x+r);
}

int main()
{
    double x, y, r, p;
    cin >> x >> y >> r;

    long start=0;
    long end=0;
    long top=0;
    long bottom=0;
    long i = 0;
    long j = 0;
    long result=0;

    cf(x,r,&start,&end);

    for(i=start;i<=end;i++){

        p = sqrt(pow(r,2)-pow((x-(double)i),2));

        cf(y,p,&bottom,&top);

        for(j=bottom;j<=top;j++){
            result = result + 1;
        }
    }

    cout << result << endl;

}

