#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    do {
        cout << ">";
        getline(cin, s);
        cout << s << endl;
    } while (s != "");
    cout << "end" << endl;
}