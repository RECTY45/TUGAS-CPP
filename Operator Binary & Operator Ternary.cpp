#include <iostream>
using namespace std;
    int main(){
        int A,B;
        bool hasil;
        string status;
        A = 19;
        B =  70;
    hasil = A <= B;
    status = A <= B ? "Anda Benar" : "Anda Salah";
    cout << "============ Operator Binary ==============\n";
    cout << "Binary : " << hasil;
    cout << "|| Boolean : " << boolalpha << hasil << endl;
    cout << "============================================\n";
    
    cout << "============ Operator Ternary ==============\n";
    cout << "Status : " << status << endl;
    cout << "============================================";
}