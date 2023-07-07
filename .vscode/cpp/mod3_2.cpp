#include <iostream>
#include <math.h>
using namespace std;

int main(){
    enum hari{senin,selasa,rabu};
    int alas;
    int tinggi;

    cout << "Masukkan alas = ";
    cin >> alas;
    cout << "Masukkan tinggi = ";
    cin >> tinggi;

    cout << "\nPanjang sisi miring segitiga dari ";
    cout << alas << " cm dan tinggi " << tinggi << " cm adalah ";
    cout << sqrt((alas*alas) + (tinggi*tinggi)) << " cm.\n";
    cout << "\n";



    system("pause");
    return 0;
}
