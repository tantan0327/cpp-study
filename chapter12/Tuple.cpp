#include <bits/stdc++.h>
#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main()
{
    tuple<int, std::string, char> isc{42, "tuple", 'c'};
    cout << get<0>(isc) << endl;
    cout << get<1>(isc) << endl;
    cout << get<2>(isc) << endl;

}



