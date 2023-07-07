// logika 

#include <iostream>
using namespace std;

int main(){
    string gajah,kucing;

    gajah = "besar";
    kucing = "kecil";
    
    cout << "======= TUGAS OPERATOR LOGIKA =======\n";
    cout << " \n";
    cout << "Jika Gajah Besar = " << (gajah=="besar") << endl;
    cout << "Jika Kucing Kecil = " << (kucing=="kecil") << endl;
    cout << " \n";
    cout << "Jika Gajah Besar dan Kucing kecil = ";
    cout << ((gajah=="besar") && (kucing=="kecil")) << endl;
    

    cin.get();
    return 0;
}