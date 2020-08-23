#include <iostream>
#include <string>
using namespace std;

auto show_value = [](int v) -> void
{
    cout << v << endl;
};

int main()
{
    show_value(42);
}