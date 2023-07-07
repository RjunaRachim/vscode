#include <iostream>
using namespace std;

int main(){
    float phi;
    int r;
    float L;

    phi = 3.14;
    r = 7;
    L = phi * (r * r);

    cout << "================ Tugas Operator Aritmatika ================\n";
    cout << " \n";
    cout << "Rumus dari luas lingkaran adalah" << endl;
    cout << "Luas Lingkaran = ( phi x r kuadrat )" << endl;
    cout << "\n";
    cout << "Luas lingkaran dari jari-jari ";
    cout << r << " cm adalah ";
    cout << L << " cm persegi" << endl;

    cin.get();
    return 0;
}