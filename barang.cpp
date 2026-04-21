// Test perubahan
#include <iostream>
using namespace std;

// Membuat class Barang
class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    // Constructor
    Barang(string n, int j, string k, string t){
        nama = n;
        jumlah = j;
        kategori = k;
        tanggalProduksi = t;
    }

    // Method untuk menampilkan data
    void tampilkanData(){
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main(){
    // Membuat objek elektronik
    Barang elektronik("Laptop", 10, "Elektronik", "10-03-2026");

    // Membuat objek nonElektronik
    Barang nonElektronik("Buku Tulis", 50, "Non-Elektronik", "01-02-2026");

    // Menampilkan data
    cout << "Data Barang Elektronik:\n";
    elektronik.tampilkanData();

    cout << "\nData Barang Non-Elektronik:\n";
    nonElektronik.tampilkanData();

    return 0;
}