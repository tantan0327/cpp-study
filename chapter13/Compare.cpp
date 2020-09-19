#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a = 123;
    string s = "3.14159265";

    cout << to_string(a) << endl;
    cout << stof(s) << endl;
}