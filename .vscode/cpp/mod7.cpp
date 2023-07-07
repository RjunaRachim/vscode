#include <iostream>
using namespace std;

int main (){
    int array1[3][3] = {{3,7,4},{6,8,2},{8,5,9}};
    int array2[3][3] = {{2,5,6},{9,9,4},{7,3,4}};
    int baris;
    int kolom;


    cout << "Matrik ke-1\n";
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            cout << array1[kolom][baris] << " ";
        }
        cout << "\n";
    }

    cout  << "\nMatrik ke-2\n";
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            cout << array2[kolom][baris] << " ";
        }
        cout << "\n";
    }



    cout  << "\n1. Hasil Penjumlahan Kedua Matrik\n";
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            cout << (array1[kolom][baris]) + (array2[kolom][baris]) << " "; 
        }
        cout << "\n";
    }

    cout  << "\n2. Hasil Perkalian Kedua Matrik\n";
    for (kolom=0;kolom<3;kolom++){
        for (baris=0;baris<3;baris++){
            cout << (array1[kolom][baris]) * (array2[kolom][baris]) << " "; 
        }
        cout << "\n";
    }

    cin.get();
    return 0;
}