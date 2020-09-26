#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for (int e : v) {
        cout << e << endl;
    }

    v.push_back(6);

    for (int e : v) {
        cout << e << endl;
    }
}