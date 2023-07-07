#include <iostream>
using namespace std;


int main(){
    int array[3][3] = {{3,7,4},{6,8,2},{8,5,9}};
    int kolom;
    int baris;


    cout << "Array 2 Dimensi\n";
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            cout << array[kolom][baris] << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    cout << "Akses Array menggunakan Pointer\n";    
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            int *aPtr = &array[kolom][baris];
            cout << "Isi value dari Pointer = " << *aPtr << endl;
        }
    }


    cin.get();
    return 0;
}