#include <iostream>
using namespace std;

int main (){
    int data[11] = { 12,17,10,5,15,25,11,7,25,16,19};
    int i, input;

    cout << "Masukkan bilangan integer : ";
    cin >> input;

    for (i=0;i<11;i++){
        cout << data[i] << " | ";
    }

    i=0;
    while (i<=10){
        if (input == data[i]){
            cout << "\n ADA";
        } else {
            cout << "\n TIDAK ADA";
        }
        i++;
    }

    cin.get();
    return 0;
}