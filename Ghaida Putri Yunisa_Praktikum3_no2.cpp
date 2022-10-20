#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){

    double praktikum = 75;
    double uts = 70;
    double uas = 88;
    double NilaiAkhir;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Nilai Praktikum = " << praktikum << endl;
    cout << "Nilai UTS = " << uts << endl;
    cout << "Nilai UAS = " << uas << endl;
    cout << " " << endl;

    NilaiAkhir = (praktikum * 20/100) + (uts * 30/100) + (uas * 50/100);

    cout << "Nilai Akhirnya adalah = " << NilaiAkhir << endl;

return 0;

}
