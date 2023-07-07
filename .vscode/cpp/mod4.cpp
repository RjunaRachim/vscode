#include<iostream>
using namespace std;

int main (){
    float nilai;

    cout << "MODULE 4\n";
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    if (nilai>100){
        cout << "Masukkan angka 0 - 100\n";
    } else if (nilai<=100 && nilai>=76){
        cout << "Nilai Mutu A\n";
    } else if (nilai<76 && nilai>=70){
        cout << "Nilai Mutu B\n";
    } else if (nilai<70 && nilai>=65){
        cout << "Nilai Mutu C\n";
    } else if (nilai<65 && nilai >=50){
        cout << "Nilai Mutu D\n";
    } else {
        cout << "Nilai Mutu E\n";
    }

    cin.get();
    return(0);
}