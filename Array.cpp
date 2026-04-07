#include <iostream>
using namespace std;

int main(){
    //Deklarasi Array dengan inisialisasi
    int dataku[5] = {10,20,30,40,50};
    //Deklarasi tanpa inisialisasi
    int datamu[5];
    int x;
    //Cara membaca array dataku
    cout << "data ke - 3 : "<< dataku[2]<<endl;
    //Cara menulis atau mengisi array
    dataku[2] = 600;
    cout << "Data ke - 3 yang baru : "<< dataku[2]<< endl;

    //Mengisi array datamu 1 by 1
    cout << "Data Index ke - 0 : ";
    cin >> datamu[0];
    cout << "Data Index ke - 1 : ";
    cin >> datamu[1];
    cout << "Data Index ke - 2 : ";
    cin >> datamu[2];
    cout << "Data Index ke - 3 : ";
    cin >> datamu[3];
    cout << "Data Index ke - 4 : ";
    cin >> datamu[4];

    cout << endl;

    //isi data dengan pengulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data Index ke - "<< i <<" : ";
        cin >> datamu[1];
    }
    cout << endl;
    //Menampilkan datamu dengan perulangan for
    for (int i = 0; i <= 4; i++)
    {
        cout << "Data ke - "<< i+1 << " : "<< datamu[i]<< endl;
    }
}