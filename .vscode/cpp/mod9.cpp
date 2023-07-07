#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file;
    string nama, nim, jurusan;
    nama = "Ayuna Rahim Imannur";
    nim = "22104410100";
    jurusan = "Tehnik Informatika";

    file.open("file.txt");
    file << nama << endl;
    file << nim << endl;
    file << jurusan << endl;
    cout << "File berhasil dibuat";
    file.close();

    cin.get();
    return 0;
}