//CATATAN LENGKAP


#include <iostream>
using namespace std;

// satu baris dinamakan statment dan harus diakgiri titik koma

// << ini adalah operator insertion

int main(){
    int a;
    a=1;    // a = 1 adalah variabel 

    int b; //ini adalah sebuah deklarasi, karena kita tidak tahu nilai b berapa 

    cout << a << endl;
    /* Tipe data
    Bilangan Bulat
    int untuk yang sering digunakan 32 bit
    long untuk yang lebih panjang 64 bit
    short untuk data yang lebih pendek 8 bit

    Bilangan Desimal
    float
    double

    Charakter
    char untuk huruf
    string untuk kata
    
    Boolean
    bool menghasilkan 1/0 (true atau false)

    unsigned
    jika ingin tidak memberikan tanda positif atau negatif kita bisa menggunakan 
    
    Operasi Aritmatika
    */
    int c;
    int d;

    c = 9;
    d = 4;
    cout << c % d << endl; 
    //jika kita menginginkan hasil ada desimal maka salah satu deklarasi harus float
    //dan float tidak bisa digunakan untuk modulus
    // urutan eksekusi adalah * dan / dijalankan dulu lalu + - 
    // jika kita ingin memberikan prioritas terhadap aritmatika maka kita harus memberikan ()  

    // operator perbandinngan hasilnya nanti true/false 
    // sebanding ==
    // tidak sebanding !=
    // kurang dari <
    // lebih dari > 
    // kurang dari sama dengan <=
    // lebih dari sama dengan >=

    // operator logika
    // not 
    // and
    // or

    //if
    if (kondisi){
        aksi pertama
    } 

    //ifelse
    if (kondisi){
        aksi  pertama
    } else {
        aksi kedua
    }

    //ifelseif
    if (kondisi){
        aksi pertama
    } else if (kondisi 2 ){
        aksi 2
    } else if (kondisi 3){
        aksi 3
    } else {
        aksi 4 jika kondisi 123 tidak terpenuhi
    }

    //switch case 1 tingkat
    switch (variabel){
        case kondisi_var:
        action
    }

    //switch case lebih dari 1 tingkat
    switch (variabel){
        case kondisi_var:
        action
        case kondisi_var2:
        action_2
        case kondisi_var3:
        action_3
        default: //jika var tidak sama dengan case diatas maka def ini yng akan dijalankan
        action_def
    }
    //kelemahan dari switch case ini adalah jika kondisi pertama sukses, maka kondisi dibawahnya juga ikut dieksekusi. agar tidak terjadi hal tersebut kita bisa menggunakan fungsi break dibawah ini

    switch (variabel){
        case  kondisi:
        action;
        break;

    }

    // increment decrement 
    // kita bisa memanipulasi data dengan menambahkan atau mengurangi data
    // macammya ada 2 yaitu pre dan post
    // pre didepan dan post dibelakang
    int x = 5;
    x++ /*untuk post increment*/ 
    ++x /*untuk pre increment*/
    x-- /*untuk post decrement*/
    --x /*untuk pre decrement*/

    //while loop 
    //syarat jika true maka loop
    //jika false maka selesai
    while (syarat){
        aksi;
    }
    
    //do while loop
    //aksi dilakukan minimal 1 kali karena aksi dieksekusi duluan
    //setelah itu baru dicek apakah syarat true atau false
    //jika true maka akan melakukan loop
    do{
        aksi;
    }while (syarat)
    
    //for loop
    
    
    cin.get();
    return 0;
}