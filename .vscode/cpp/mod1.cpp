#include <iostream>
using namespace std;

int main (){
    int Nilai[20];
    int i, N, Bilangan;
    bool ditemukan;

    cout<<"Masukkan Banyaknya Bilangan = ";
    cin>>N;

    for(i=0; i<N; i++)
  {
    cout<<"Masukkan elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
  }
  
  //Mencetak Elemen Array
  cout<<"\nDeretan Bilangan = ";
  for(i=0; i<N; i++)
  cout<<Nilai[i]<<" ";
  
  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;

  for(int i=0;i<N;i++){
    if(Bilangan==Nilai[i]){
        ditemukan = true;
        cout << "Bilangan ditemukan" <<endl;
        break;
    } else{
        cout << "data tidak ditemukan" << endl;
        break;
    }
  }

    cin.get();
    return 0;
}