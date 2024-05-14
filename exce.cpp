#include <iostream>
using namespace std;

string kode, nama;
int jumlah;

int main(){
    cout << "--------JUALAN MINUMAN---------" << endl;
    cout << " (KODE = 1)Cappucino : Rp. 5000" << endl;
    cout << " (KODE = 2)Teh       : Rp. 3000" << endl;
    cout << " (KODE = 3)Exit                " << endl;
    cout << " ------------------------------" << endl;

    cout << endl;
    
    cout << " Masukan Nama Anda : " << nama << endl;
    cin >> nama;
    cout << endl;

    cout << " Masukan Kode Pesanan Mu : " << kode << endl;
    cin >> kode;
    cout << endl;

    cout << " Masukan Jumlah Pesanan : " << jumlah << endl;
    cin >> jumlah;
    cout << endl;
    
    cout << " Pesanan Atas " << nama << " dengan " << jumlah << kode << endl;
    
    return 0; 
    }