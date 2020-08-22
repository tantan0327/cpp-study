#include <iostream>

class long_long_name_class
{
    int a;
};

using short_name = long_long_name_class;

class A
{
    using integer = int;
    integer a;
    
public:
    void setter(integer value);
    integer getter();
};

void A::setter(integer value)
{
    a = value;
}

A::integer A::getter()
{
    return a;
}