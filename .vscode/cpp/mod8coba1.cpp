#include <iostream>
using namespace std;

int main(){
    int a,b;
    int *c,*d;

    a = 2;
    b = 3;

    d = &a;
    cout << "a = " << a << endl;
    cout << "alamat a = " << &a << endl;
    cout << "d = " << *d << endl;
    cout << "alamat d = " << &d << endl;

    cout << "=======================";

    c = &b;
    cout << "b = " << b << endl;
    cout << "alamat b = " << &b << endl;
    cout << "c = " << *c << endl;
    cout << "alamat c = " << &c << endl;

    return 0;
}