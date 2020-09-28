#include <iostream>
#include <list>
using namespace std;

int main()
{
    list il = {2, 1, 4, 5, 3};

    il.sort();

    for (int e : il) {
        cout << e << endl;
    }
}