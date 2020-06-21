#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;

int main()
{
    long N;
    cin >> N;
    string str = "";

    while (N > 0) {
        N -= 1;
        char c = N % 26 + 97;
        str += c;
        N /= 26;
    }
    
    // while (N != 0 || N >= 0) {
    //     char i = N % 26 + 96;
    //     if (i == 96) {
    //         char j = 122;
    //         str += j;
    //         N = N/26;// 27
    //         if (N == 1 && N % 26 == 1) {
    //             break;
    //         }
    //         continue;
    //     }
    //     str += i;
    //     N = N/26;
    // }

    reverse(str.begin(), str.end());
    cout << str << endl;
}