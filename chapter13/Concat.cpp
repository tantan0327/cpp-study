#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "def";

    string s3 = "1234";

    cout << s1 + s2 << endl;
    cout << to_string(stoi(s3)) << endl;
}