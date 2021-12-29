// Exercise 02_04
// Type inference with auto

#include <iostream>
#include <typeinfo>

using namespace std;

auto a = 8; // a small integer
auto b = 12345678901; // a very large integer exceeding 32 bits
auto c = 3.14f; // a floating point number with a trailing lowercase f (constant specifier for floats)
auto d = 3.14; // floating point constants are doubles by default
auto e = true; // boolean constant true
auto f = 'd'; // single character d

int main(){
    // receives variable and access the name of its type
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    return (0);
}