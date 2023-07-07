#include <iostream>
using namespace std;

int main(){
    int  bilangan;
    cout << "Masukkan bilangan : ";
    cin >> bilangan;

    if(bilangan%2==1){
        cout << "Ganjil" << endl;

        if(bilangan>10){
            cout << "diatas 10";
        } else {
            cout << "dibawah 10";
        }
    }
}