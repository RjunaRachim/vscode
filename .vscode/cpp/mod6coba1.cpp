#include <iostream>
using namespace std;

void cetak(){
    cout << "Praktikum Pemrograman Dasar - UNISBA\n";
}    

int operasiPerkalian(int a,int b){
    return a*b;
}

int main(){
    cetak();

    cout << "Hasil Perkaliannya = " << operasiPerkalian(10,2);

    return 0;
}