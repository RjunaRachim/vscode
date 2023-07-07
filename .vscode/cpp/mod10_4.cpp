#include <iostream>
using namespace std;

int main (){
    int data[11] = { 12,17,10,5,15,25,11,7,25,16,19};
    int i, input;
    int flag;

    cout << "Masukkan bilangan integer : ";
    cin >> input;

    for (i=0;i<11;i++){
        cout << data[i] << " | ";
    }

    //cout << "\n" << endl;
    //cout << flag << endl;

    i=0;
    flag = 0;
    while (i<=10){
        //cout << i << "." << input << " = " << data[i] << endl;

        if (input == data[i]){
            flag = 1;
            //cout << flag << endl;
            break;
        }
        i++;
    }

    //cout << " \n ";

    if (flag==1){
        cout << "\n ADA";
    } else {
        cout << "\n TIDAK ADA";
    }


    cin.get();
    return 0;
}