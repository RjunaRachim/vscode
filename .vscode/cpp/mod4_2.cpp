#include <iostream>
using namespace std;

int main(){
    string huruf;

    cout << "Silahkan masukkan huruf = ";
    cin >> huruf;

    if (huruf=="a"){
        cout << "Huruf " << huruf << " adalah vocal\n"; 
    } else if (huruf=="i"){
        cout << "Huruf " << huruf << " adalah vocal\n"; 
    } else if (huruf=="u"){
        cout << "Huruf " << huruf << " adalah vocal\n"; 
    } else if (huruf=="e"){
        cout << "Huruf " << huruf << " adalah vocal\n"; 
    } else if (huruf=="o"){
        cout << "Huruf " << huruf << " adalah vocal\n"; 
    } else{
        cout << "Huruf " << huruf << " adalah konsonan\n"; 
    }


    cin.get();
    return 0;
}