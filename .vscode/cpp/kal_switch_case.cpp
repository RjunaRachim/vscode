#include <iostream>
using namespace std;

int main(){
    float x,y;
    char z;

    cout << "=============================================== \n"; 
    cout << "===== SIMPLE CALCULATOR USING SWITCH CASE ===== \n";
    cout << "=============================================== \n";
    cout << " \n";
    cout << "Tekan ENTER untuk menjalankan program...";
    cin.ignore();
    system("cls");

    cout << "SWITCH CASE CALCULATOR\n";
    cout << " \n";
    cout << "Masukan angka pertama diikuti ENTER :" << endl;
    cin >> x;
    system("cls");

    cout << "SWITCH CASE CALCULATOR\n";
    cout << " \n";
    cout << "Masukkan operator ( + | - | * | / ) diikuti ENTER :" << endl;
    cout << x << " ";
    cin >> z;  
    system("cls");

    cout << "SWITCH CASE CALCULATOR\n";
    cout << " \n";
    cout << "Masukkan angka kedua diikuti ENTER :" << endl;
    cout << x << " " << z << " ";
    cin >> y;
    system("cls");

    switch (z){
        case '+':
        cout << "SWITCH CASE CALCULATOR\n";
        cout << " \n";
        cout << x <<" + "<< y <<" = ";
        cout << (x + y) << endl;
        break;

        case '-':
        cout << "SWITCH CASE CALCULATOR\n";
        cout << " \n";
        cout << x <<" - "<< y <<" = ";
        cout << (x - y) << endl;
        break;

        case '*':
        cout << "SWITCH CASE CALCULATOR\n";
        cout << " \n";cout << x <<" * "<< y <<" = ";
        cout << (x * y) << endl;
        break;

        case '/':
        cout << "SWITCH CASE CALCULATOR\n";
        cout << " \n";
        cout << x <<" / "<< y <<" = ";
        cout << (x / y) << endl;
        break;
    }

    return 0;
}