#include<iostream>
using namespace std;

int main(){
    int d,p,a;
    float phi,l,t,r;
    phi = 3.14;
    d = 10;
    p = 5;
    l = 1.5;
    a = 4;
    t = 2.5;
    r = d/2;

    cout << "PRAKTIKUM PEMDAS MODULE 2\n";
    cout << "\n";
    cout << "Luas Lingkaran dengan diameter " << d << " cm adalah ";
    cout << (phi*(r*r)) << " cm kuadrat\n";

    cout << "Luas Persegi Panjang dengan ";
    cout << "panjang " << p << " cm dan lebar " << l << " cm adalah ";
    cout << (p*l) << " cm kuadrat\n";

    cout << "Luas Segitiga dengan ";
    cout << "alas " << a << " cm dan tinggi " << t << " cm adalah ";
    cout << (0.5*(a*t)) << " cm kuadrat";

    cin.get();
    return(0);
}