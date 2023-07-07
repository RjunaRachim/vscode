#include <iostream>
using namespace std;

int input = 0;
int jumlah = 0;
int banyakData = 0;
double rata;

double rata2(double x,double y){
    double z;
    z = x/y;
    return z;
}

void hitungAverage(int jumlah,int banyakData){
    cout << "Jumlah Angka = " << jumlah << endl;
    cout << "Banyak Data = " << banyakData << endl;
    rata = rata2(jumlah,banyakData);
    cout << "Rata-ratanya = "<< rata << endl;
}

int main(){

    cout << "Masukkan data\n";
    cin >> input;
    jumlah = input;
    banyakData++;

    cin >> input;
    jumlah = jumlah+input;
    banyakData++;

    cin >> input;
    jumlah = jumlah+input;
    banyakData++;

    hitungAverage(jumlah,banyakData);

    system("pause");
    return 0;
}