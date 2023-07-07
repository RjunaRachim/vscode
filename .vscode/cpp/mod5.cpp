#include <iostream>
using namespace std;

int main(){
    int n = 3;
    int a;

    for (int i=0;i<=n;i++){
        for (int k=0;k<=((2*n)-(2*i));k++){
            cout << " ";
        }
        for (int j=0;j<=i;j++){
            if (j==0||i==j)
            a=1;
            else 
            a=a*(i+1-j)/j;
            cout << "  ";
            cout << a;
            cout << " ";
        }
        cout << " "<<"\n\n";
    }

    cin.get();

    return 0;
}