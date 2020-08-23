#include <iostream>
#include <string>
using namespace std;

class vector3d
{
private:
    int x;
    int y;
    int z;

public:
    int getX();
    void setX(int X);
    int getY();
    void setY(int Y);
    int getZ();
    void setZ(int Z);
    void setXYZ(int X, int Y, int Z);
};

int vector3d::getX()
{
    return x;
}

void vector3d::setX(int X)
{
    x = X;
}

int vector3d::getY()
{
    return y;
}

void vector3d::setY(int Y)
{
    y = Y;
}

int vector3d::getZ()
{
    return z;
}

void vector3d::setZ(int Z)
{
    z = Z;
}

vector3d getVector3d(int x, int y, int z = 0)
{   
    vector3d vec;
    vec.setX(x);
    vec.setY(y);
    vec.setZ(z);
    return vec;
}

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    cin >> x >> y >> z;

    vector3d vec;
    vec.setX(x);
    vec.setY(y);
    vec.setZ(z);
    cout << vec.getX() << " " << vec.getY() << " " << vec.getZ() << endl;

    vector3d vec2 = getVector3d(4, 5 ,6);
    cout << vec2.getX() << " " << vec2.getY() << " " << vec2.getZ() << endl;
}