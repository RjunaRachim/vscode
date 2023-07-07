#include <iostream>
using namespace std;

int main(){
    //Declarasi
    string a[9] = {"ahmad","budi","deny","jamal","leo","mamat","putra","vino","zeva"};
    string key = "mamat";
    int awal = 0;
    int akhir = (sizeof(a)/sizeof(a[0]));
    int tengah;
    bool hasil = false;

    //Pencarian data 
    while(awal <= akhir){
        tengah = (awal+akhir)/2;
        if(a[tengah] == key){
            hasil = true;
            break;
        } else if (a[tengah] > key){
            akhir = tengah - 1;
        } else if(a[tengah] < key){
            awal = tengah + 1;
        }
    }

    //Cetak Hasil
    if(hasil == true){
        cout << "Data " << key << " ditemukan" << endl;
    } else {
        cout << "Data " << key << " tidak ditemukan" << endl;
    }

    
    cin.get();
    return 0;
}