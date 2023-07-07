#include <iostream>
using namespace std;

int main(){
    //Declarasi 
    int a[10] = {1,2,3,4,5,6};
    bool cek = false;
    int b = 3;

    //Pencarian Data
    for(int i=0;i<10;i++){
        if(b == a[i]){
            cek = true;
            break;
        }

    }

    //Cetak Hasil
    if(cek == true){
        cout << "Data ditemukan" << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    cin.get();
    return 0;
}