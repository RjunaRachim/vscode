#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Masukkan pukul kedatangan (00-24) : ";
    cin >> x;
    
    if (x<=8){
        cout << "HADIR" << endl;
    } else {
        cout << "TERLAMBAT" << endl;
    }

    system("pause");
    return 0;
}