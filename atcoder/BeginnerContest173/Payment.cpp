#include <iostream>

using namespace std;

int main()
{
    long N;
    cin >> N;

    long ans;

    if (N % 1000 == 0) {
        ans = 0;
    } else {
        ans = 1000 - N % 1000;
    }

    std::cout << ans << std::endl;
}