#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s = "test";
    string s2 = "Test";
    const char* data = s.data();
    cout << s.substr(2, 2) << endl;

    int i = 0;
    while (true)
    {
        if (data[i] == '\0')
        {
            cout << "[\\0]]" << endl;
            break;
        }
        else
        {
            cout << data[i] << endl;
        }
        i++;
    }

    // returns number
    cout << s2.compare(s) << endl;
}