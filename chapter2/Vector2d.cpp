#include <iostream>
#include <string>
using namespace std;

struct vector2d
{
    float x;
    float y;
};

int sub(int a, int b)
{
    return a - b;
};

vector2d sub(vector2d a, vector2d b)
{
    vector2d r = {a.x - b.x, a.y - b.y};
    return r;
};

int main()
{
    cout << sub(10, 20) << endl;
    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);
    cout << v.x << ", " << v.y << endl;
}

