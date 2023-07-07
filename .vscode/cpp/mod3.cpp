#include<iostream>
using namespace std;

int main (){
    int harga;
    float disk;

    cout << "TUGAS MODULE 3\n";
    cout << "Input :\n";
    cout << "Harga Barang(Rp) = ";
    cin >> harga;
    cout << "Diskon Barang(%) = ";
    cin >> disk;
    cout << " \n";
    cout << "Output\n";
    cout << "Jumlah Diskon    = Rp ";
    cout << (disk/100)*harga << endl;

    system("pause");
    return(0);
}