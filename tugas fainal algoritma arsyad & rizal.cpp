#include <iostream>

using namespace std;

int x, y, noMeja = 1, noAntri = 1, pesanan;
int paket1 = 20000, tpaket1 = 20000;
int paket2 = 35000, tpaket2 = 35000;
int paket3 = 50000, tpaket3 = 50000;
int paket;
int totalBayar, kembalian, jumlahUang;
char ulang;
char pesananTambahan;
char metodPesanan;

void inputMetod(char &metodPesanan)
{
    cout << "| Masukkan Metode Pesanan : ";
    cin >> metodPesanan;
}

void tambahPesanan(char &pesananTambahan)
{
    cout << "|           Ingin memasukkan pesanan lagi? (y/n): ";
    cin >> pesananTambahan;
    switch (pesananTambahan)
    {
    case 'y':
        cout << "====================================================================" << endl;
        cout << "| Pilih Paket :                                                    |" << endl;
        cout << "| Paket 1        : 1 Nasi, 1 Ayam dan 1 es teh  Harga : Rp.20.000  |" << endl;
        cout << "| Paket 2        : 2 Nasi, 2 Ayam dan 2 es teh  Harga : Rp.35.000  |" << endl;
        cout << "| Paket 3        : 5 Nasi, 5 Ayam dan 5 es teh  Harga : Rp.50.000  |" << endl;
        cout << "====================================================================" << endl;
        cout << "Masukkan Paket Yang Dipesan : ";
        cin >> pesanan;
        if (pesanan == 1)
        {
            cout << "| Pesanan Anda :" << endl;
            cout << "| 1 Nasi " << endl;
            cout << "| 1 Ayam " << endl;
            cout << "| 1 Es teh " << endl;
            cout << "| harga paket : Rp." << paket1 << endl;
            paket = paket1;
        }
        else if (pesanan == 2)
        {
            cout << "| Pesanan Anda :" << endl;
            cout << "| 2 Nasi " << endl;
            cout << "| 2 Ayam " << endl;
            cout << "| 2 Es teh " << endl;
            cout << "| harga paket : Rp." << paket2 << endl;
            paket = paket2;
        }
        else if (pesanan == 3)
        {
            cout << "| Pesanan Anda :" << endl;
            cout << "| 5 Nasi " << endl;
            cout << "| 5 Ayam " << endl;
            cout << "| 5 Es teh " << endl;
            cout << "| harga paket : Rp." << paket3 << endl;
            paket = paket3;
        }
        totalBayar += paket;
        tambahPesanan(pesananTambahan);
        break;

    default:
        cout << "====================================================================" << endl;
        cout << "| Total Pesanan Anda : " << totalBayar << endl;
        cout << "| Masukkan Jumlah Uang : ";
        cin >> jumlahUang;
        kembalian = jumlahUang - totalBayar;
        cout << "| Kembalian Anda : " << kembalian << endl;
        break;
    }
}

int main()
{
    cout << "=======================================================================================================================" << endl;
    cout << "                                               UNIVERSITAS TEKNOLOGI AKBA MAKASSAR" << endl;
    cout << "                                                    TUGAS FINAL ALGORITMA" << endl;
    cout << "=======================================================================================================================" << endl;
    cout << endl;
    cout << "====================" << endl;
    cout << "|  DISUSUN OLEH:   |" << endl;
    cout << "====================" << endl;
    cout << "| MUHAMMAD ARSYAD  |" << endl;
    cout << "| NIM:20232305011  |" << endl;
    cout << "====================" << endl;
    cout << "| KAPRIASUS RISAL  |" << endl;
    cout << "| NIM:20232305009  |" << endl;
    cout << "====================" << endl;
    cout << "=======================================================" << endl;
    cout << "|                 SISTEM PEMESANAN                    |" << endl;
    cout << "|                LAZUNA PACCERAKKANG                  |" << endl;

    do
    {
        cout << "=======================================================" << endl;
        cout << "| Pilih 1 untuk pesanan DineIN                        |" << endl;
        cout << "| Pilih 2 untuk pesanan TakeAway                      |" << endl;
        cout << "=======================================================" << endl;
        inputMetod(metodPesanan);

        switch (metodPesanan)
        {
        case '1':
            cout << "| Nomor Meja Anda adalah : " << noMeja << endl;
            noMeja++;
            cout << "====================================================================" << endl;
            cout << "| Pilih Paket :                                                    |" << endl;
            cout << "| Paket 1        : 1 Nasi, 1 Ayam dan 1 es teh  Harga : Rp.20.000  |" << endl;
            cout << "| Paket 2        : 2 Nasi, 2 Ayam dan 2 es teh  Harga : Rp.35.000  |" << endl;
            cout << "| Paket 3        : 5 Nasi, 5 Ayam dan 5 es teh  Harga : Rp.50.000  |" << endl;
            cout << "====================================================================" << endl;
            cout << "Masukkan Paket Yang Dipesan : ";
            cin >> pesanan;
            if (pesanan == 1)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 1 Nasi " << endl;
                cout << "| 1 Ayam " << endl;
                cout << "| 1 Es teh " << endl;
                cout << "| harga paket : Rp." << paket1 << endl;
                paket = paket1;
            }
            else if (pesanan == 2)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 2 Nasi " << endl;
                cout << "| 2 Ayam " << endl;
                cout << "| 2 Es teh " << endl;
                cout << "| harga paket : Rp." << paket2 << endl;
                paket = paket2;
            }
            else if (pesanan == 3)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 5 Nasi " << endl;
                cout << "| 5 Ayam " << endl;
                cout << "| 5 Es teh " << endl;
                cout << "| harga paket : Rp." << paket3 << endl;
                paket = paket3;
            }
            totalBayar = paket;
            tambahPesanan(pesananTambahan);
            break;

        case '2':
            cout << "| Nomor Antrian Anda adalah : " << noAntri << endl;
            noAntri++;
            cout << "====================================================================" << endl;
            cout << "| Pilih Paket :                                                    |" << endl;
            cout << "| Paket 1        : 1 Nasi, 1 Ayam dan 1 es teh  Harga : Rp.20.000  |" << endl;
            cout << "| Paket 2        : 2 Nasi, 2 Ayam dan 2 es teh  Harga : Rp.35.000  |" << endl;
            cout << "| Paket 3        : 5 Nasi, 5 Ayam dan 5 es teh  Harga : Rp.50.000  |" << endl;
            cout << "====================================================================" << endl;
            cout << "Masukkan Paket Yang Dipesan : ";
            cin >> pesanan;
            if (pesanan == 1)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 1 Nasi " << endl;
                cout << "| 1 Ayam " << endl;
                cout << "| 1 Es teh " << endl;
                cout << "| harga paket : Rp." << paket1 << endl;
                paket = paket1;
            }
            else if (pesanan == 2)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 2 Nasi " << endl;
                cout << "| 2 Ayam " << endl;
                cout << "| 2 Es teh " << endl;
                cout << "| harga paket : Rp." << paket2 << endl;
                paket = paket2;
            }
            else if (pesanan == 3)
            {
                cout << "| Pesanan Anda :" << endl;
                cout << "| 5 Nasi " << endl;
                cout << "| 5 Ayam " << endl;
                cout << "| 5 Es teh " << endl;
                cout << "| harga paket : Rp." << paket3 << endl;
                paket = paket3;
            }
            totalBayar = paket;
            tambahPesanan(pesananTambahan);
            break;

        default:
            cout << "|" << endl << endl;
            break;
        }
        cout << "|  Ingin memilih meja lagi? (y/n): ";
        cin >> ulang;
            system("cls");
    } while (ulang == 'y' || ulang == 'Y');
    
    return 0;
}
