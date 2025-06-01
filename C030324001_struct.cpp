#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    Mahasiswa wahyu;
    Mahasiswa *wahyudi = &wahyu;

    cout << "Masukkan NIM: ";
    cin >> wahyudi->nim;
    system("cls");
    cout << "Masukkan Nama: ";
    cin >> wahyudi->nama;
    system("cls");
    cout << "Masukkan Alamat: ";
    cin >> wahyudi->alamat;
    system("cls");
    cout << "Masukkan ipk: ";
    cin >> wahyudi->ipk;
    system("cls");
    cout << "NIM: " << wahyudi->nim << endl;
    cout << "Nama: " << wahyudi->nama << endl;
    cout << "Alamat: " << wahyudi->alamat << endl;
    cout << "IPK: " << wahyudi->ipk << endl;
    return 0;
}