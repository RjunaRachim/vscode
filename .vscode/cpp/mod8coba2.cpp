#include <iostream>
using namespace std;

int main(){
    int a[5] = {19,2,10,1,7};
    int *b;
    int i;

    b=a;
    for (i=0;i<5;i++){
        cout << "Alamat array pointer = " << &b[i] << endl;;
    }

    cout << "===============================" << endl;

    for (i=0;i<5;i++){
        cout << "Isi value array pointer  = " << *(b+i) << endl;
    }
    return 0;
}