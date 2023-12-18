// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
    string nama,nim;
    int usia,panjang,lebar,luas,row,col;
    char gdarah;
int main() {
    nama = "Fery Fadul Rahman";
    nim = "20232125013";
    usia = 19;
    gdarah = 'A';
    
    cout << "Nama : " << nama << endl;
    cout << "Nim  : " << nim << endl;
    cout << "Usia : " << usia << endl;
    cout << "Golongan Darah  : " << gdarah << endl << endl;
    
    cout << "Masukkan Panjang : ";
    cin >>panjang;
    cout << "Masukkan lebar   : ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luasnya Adalah : " << luas << endl << endl;
   

    for (int i = 0; i < 4; i++) {
         for (int j = 0; j < 8; j++) {
            cout << "+";
         }
     cout << endl;
    }
    
    return 0;
}