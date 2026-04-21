// Test perubahan
#include <iostream>
using namespace std;

class Mahasiswa{
public:
    int nim;
    string nama;
    float nilai;
    void printdata(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
};

int main() {
    Mahasiswa mhs;

    mhs.nim = 111;
    mhs.nama = "Joko Susilo";
    mhs.nilai = 75.5;
    mhs.printdata();
}