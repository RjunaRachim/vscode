#include <iostream>
using namespace std;

int main(){
    unsigned int x;

    cout << "Masukkan angka : ";
    cin >> x;
    
    if (x<10){
        cout << x << " adalah satuan." << endl;
    } else if (x<100){
        cout << x << " adalah puluhan." << endl;
    } else{
        cout << x << " bukan satuan atau puluhan." << endl;
    }

    system("pause");
    return 0;
}