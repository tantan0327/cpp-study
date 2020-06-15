#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    int p[N];
    for(int i = 0; i < N; i++){
        cin >> p[i];
    }
    // TODO: implement algorithm
    for(int i = 0; i < N; i++) {
        cout << p[i] << endl;
    }
}