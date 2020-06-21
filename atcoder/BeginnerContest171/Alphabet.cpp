#include <iostream>

using namespace std;

int main()
{
    char s;
    cin >> s;

    if (islower(s))
    {
        cout << "a" << endl;
    }
    else if (isupper(s))
    {
        cout << "A" << endl;
    }
    return 0;
}