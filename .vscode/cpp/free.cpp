#include <iostream>
using namespace std;

int main(){
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int panjang = ((sizeof array) / (sizeof array[0]));

  cout << "Panjang dari array adalah ";
  cout << panjang << endl;

  cin.get();
  return 0;
}
