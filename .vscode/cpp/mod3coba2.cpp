#include <iostream>
using namespace std;

int main (){
    int a,b,n;
    cout << "Input 2 integer : ";
    cin >> a >> b;
    cout << "Anda menginput A = " << a << " dan B = " << b << endl;

    if (a%b){
        cout << "A tidak habis dibagi B" << endl;
    } else {
        cout << "A habis dibagi B" << endl;
    }

    return 0;
}