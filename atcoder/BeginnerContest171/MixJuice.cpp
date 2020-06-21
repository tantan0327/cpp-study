#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

#define SIZE_OF_ARRAY(p) (sizeof(p)/sizeof(p[0]))

int main()
{
    // input
    int N, K;
    cin >> N >> K;
    int p[N];
    int result = 0;

    for(int i = 0; i < N; i++){
        cin >> p[i];
    }

    sort(p, p + SIZE_OF_ARRAY(p));

    // output
    for(int i = 0; i < K; i++) {
        result += p[i];
    }
    cout << result << endl;
}