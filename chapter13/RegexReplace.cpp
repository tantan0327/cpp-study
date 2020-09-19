#include <iostream>
#include <string.h>
#include <regex>
using namespace std;

int main()
{
    string line = "Hello, regex";
    regex re{"r\\w+"};

    auto s = std::regex_replace(line, re, "world");

    cout << s << endl;
}