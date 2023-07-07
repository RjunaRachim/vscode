#include <iostream>
using namespace std;

int main(){
    cout << "===========================\n";
    cout << "PROGRAM BUAT AKUN DAN LOGIN\n";
    cout << "===========================\n";
    cout << " \n";
    cout << "Tekan ENTER untuk menjalankan program...";
    cin.ignore();
    system("cls");

    cout << "MENU\n";
    cout << "\n1. Buat Akun\n";
    cout << "2. Login\n";
    int menu;
    cout << "\n1/2 : ";
    cin >> menu;
    system("cls");

    string nama;
    string lognama;
    int sandi;
    int logsandi;

    switch (menu){
        case (1):
        cout << "BUAT AKUN\n";
        cout << "\nMasukkan Nama\n";
        cout << "Nama : ";
        cin >> nama;
        cout << " \n";
        cout << "Masukkan sandi baru\n";
        cout << "Sandi harus berupa 4 digit angka\n";
        cout << "Sandi : ";
        cin >> sandi;
        system("cls");
        cout << "AKUN BERHASIL DIBUAT\n";
        break; 

        default:
        cout << "AKUN BELUM DIBUAT\n";
        cout << " " << endl;
        cout << "Silahkan ulangi program" << endl;
        cin.get();
        cin.ignore();
        exit(0);
        break;
    } 

    cout << " \n";
    cout << "Silahkan Login...\n";
    cout << "\nNama : ";
    cin >> lognama;
    cout << "Sandi : ";
    cin >> logsandi;

    system("cls");

    bool hasil;
    hasil = (!((nama==lognama)&&(sandi==logsandi)));

    while (hasil){
        cout << "LOGIN\n";
        cout << "Nama / Sandi Salah\n";
        cout << "\nNama : ";
        cin >> lognama;
        cout << "Sandi : ";
        cin >> logsandi;
        hasil = (!((nama==lognama)&&(sandi==logsandi)));
        system("cls");
    }

    cout << "===================" << endl;
    cout << "ANDA BERHASIL LOGIN" << endl;
    cout << "===================" << endl;
    cout << " " << endl;
    cout << "Selamat datang";
    
    cin.get();
    cin.ignore();
    return 0;
}