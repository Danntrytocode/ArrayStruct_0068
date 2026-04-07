#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};
struct orang{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    //Deklarasi obyek dari struct orang
    orang mhs[3];
    //Mengisi Obyek
    for (int i = 0; i <= 2; i++){
        cout << "Nama Mahasiswa:";
    getline(cin, mhs[i].nama);
    cout << "Alamat Desa:";
    getline(cin, mhs[i].alamat.desa);
    cout << "Alamat Kora:";
    getline(cin, mhs[i].alamat.kota);
    cout << "Umur:";
    cin >> mhs[i].umur;
    cout << endl;
    }
    cout << endl;
}