#include <iostream>
using namespace std;

int main(){
    float r;
    int menu;

    cout << "Masukkan jari-jari : ";
    cin >> r;
    cout << " " << endl;

    cout << "Pilih jenis Operasi" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Keliling Lingkaran" << endl;
    cout << "3. Volume Bola" << endl;
    cout << "(1/2/3) : ";
    cin >> menu;
    cout << " " << endl;

    switch (menu){
        case 1:
        cout << "Luas Lingkaran dari r = ";
        cout << r << " adalah ";
        cout << (3.14 * (r*r));
        cout << " satuan" << endl;
        break;
        case 2:
        cout << "Keliling Lingkaran dari r = ";
        cout << r << " adalah ";
        cout << (3.14 * (r*2));
        cout << " satuan persegi" << endl;
        break;
        case 3:
        cout << "Volume Bola dari r = ";
        cout << r << " adalah ";
        cout << ((4*3.14*(r*r*r))/3);
        cout << " satuan kubik" << endl;
    }

    return 0;
}