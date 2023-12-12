//Nama : Fery Fadul Rahman
//Nim : 20232125013
//Kelas : S.102
#include <iostream>
using namespace std;
    const int baris = 3;
    const int kolom = 2;
      int angka[baris][kolom] =
        {
        40,10,
        10,20,
        89,90
        };
    int main(){
       
        cout << angka[0][0] << " ";
        cout << angka[0][1] << " " << endl;
        cout << angka[1][0] << " ";
        cout << angka[1][1] << " " << endl;
        cout << angka[2][0] << " ";
        cout << angka[2][1] << " ";
        
        
        return 0;
    }
    
    // 40 10 Baris Indeks Ke-0 [0][0] [0][1]
    // 10 20 Baris Indeks Ke-1 [1][0] [1][1]
    // 89 90 Baris Indeks Ke-2 [2][0] [2][1]
        