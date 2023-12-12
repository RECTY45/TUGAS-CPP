#include <iostream>
using namespace std;
  enum color{
      blue,
      green,
      orange,
      red,
      white,
      black,
  };
  
  int main(){
     int Warna = static_cast<int>(color::black);
     
      for (int x = blue; x <= black; x++) {
        cout << "Data Enum Index Ke - " << x << " " <<endl << endl;
    }
       cout << "Tipe data Enum yang nama tipe datanya Color Memiliki jumlah indeksnya : " << Warna;
     
     return 0;
  }