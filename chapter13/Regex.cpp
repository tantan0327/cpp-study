#include <iostream>
#include <string.h>
#include <regex>
using namespace std;

int main()
{
    string line, pattern;
    cout << "文字列" << endl;
    getline(cin, line);

    cout << "正規表現" << endl;
    getline(cin, pattern);

    regex re{pattern};
    smatch match;

    // if (regex_match(line, re))
    // {
    //     cout << "matched!" << endl;
    // }
    // else 
    // {
    //     cout << "unmatched..." << endl;
    // }

    if (regex_search(line, match, re))
    {
        for (size_t i = 0; i < match.size(); ++i)
        {
            cout << match.str(i) << endl;
        }
    }
    else 
    {
        cout << "unmatched..." << endl;
    }

    cout << R"(Hello, 
    world)" << endl;
}