#include "ext_adder.h"
ExtAdder::ExtAdder(int a, int b)
{
    this -> a = a;
    this -> b = b;
}
int ExtAdder::apply_add()
{
    return this -> a + this -> b;
}