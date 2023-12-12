// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

struct Buah
{
    string jenis;
    string warna;
    string tempat;
    int harga;
}anggur; // Cara 1
    
    struct dataDiri
    {
        string Nama;
        string Alamat;
        int Umur;
        
        dataDiri(string nama,string alamat,int umur) 
        : Nama(nama),Alamat(alamat),Umur(umur){} // Konstruktor
    };
int main() {
    
    dataDiri fery("Fery Fadul Rahman","Pajjaiang", 19);
    
    //  Cara 2
    Buah strauberry,jeruk;
    
    anggur.jenis = "Anggur";
    anggur.warna = "Ungu";
    anggur.tempat = "Gor Sudiang";
    anggur.harga = 50000;
    
    strauberry.jenis = "strauberry";
    strauberry.warna = "Merah";
    strauberry.tempat = "Sudiang";
    strauberry.harga = 45000;
    
    jeruk.jenis = "jeruk";
    jeruk.warna = "Orange";
    jeruk.tempat = "Bulu-Bulu";
    jeruk.harga = 15000;
    
    cout << "============ Belajar Struct ===========\n";
    cout << "Jenis Buah : " << anggur.jenis << endl;
    cout << "Warna Buah : " << anggur.warna << endl;
    cout << "Tempat Dijual : " << anggur.jenis << endl;
    cout << "Harga Buah : Rp." << anggur.harga << endl;
    cout << "=========================================\n";
    cout << "Jenis Buah : " << strauberry.jenis << endl;
    cout << "Warna Buah : " << strauberry.warna << endl;
    cout << "Tempat Dijual : " << strauberry.jenis << endl;
    cout << "Harga Buah : Rp." << strauberry.harga << endl;
    cout << "=========================================\n";
    cout << "Jenis Buah : " << jeruk.jenis << endl;
    cout << "Warna Buah : " << jeruk.warna << endl;
    cout << "Tempat Dijual : " << jeruk.jenis << endl;
    cout << "Harga Buah : Rp." << jeruk.harga << endl;
    cout << "===============DATA DIRI==========================\n";
    cout << "Jenis Buah : " << fery.Nama << endl;
    cout << "Warna Buah : " << fery.Alamat << endl;
    cout << "Tempat Dijual : " << fery.Umur << endl;
    cout << "=========================================\n";
    return 0;
}

// // string nama;
// 	string alamat;
// 	string nim;
// 	string jurusan;
	