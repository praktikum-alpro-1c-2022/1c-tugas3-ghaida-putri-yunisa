#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double a = 10;
    double b = 8;
    double SisiMiring;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C - Informatika" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Diketahui :" << endl;
    cout << "- Alas = 8cm" << endl;
    cout << "- Tinggi = 10cm" << endl;
    cout << " " << endl;

    cout << "Menghitung Sisi Miring" << endl;
    SisiMiring = sqrt(pow(a,2) + pow(b,2));
    cout << "Sisi Miring nya adalah " << SisiMiring << endl;


return 0;

}
