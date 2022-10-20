#include <iostream>

using namespace std;

int main (){

    float i;
    float v;
    float r;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C - Informatika" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    //rumus arus
    cout << "Menghitung Arus" << endl;
    cout << "Masukan Tegangan = ";
    cin >> v;
    cout << "Masukan Hambatan = ";
    cin >> r ;
    i = v/r;
    cout << "Arus nya adalah " << i;
    cout << " " << endl;
    cout << " " << endl;


    //rumus tegangan
    cout << "Menghitung Tegangan" << endl;
    cout << "Masukan Arus = ";
    cin >> i;
    cout << "Masukan Hambatan = ";
    cin >> r;
    v = i * r;
    cout << "Tegangan nya adalah " << v;
    cout << " " << endl;
    cout << " " << endl;


    //rumus hambatan
    cout << "Menghitung Hambatan" << endl;
    cout << "Masukan Tegangan = ";
    cin >> v;
    cout << "Masukan arus = ";
    cin >> i;
    r = v/i;
    cout << "Hambatan nya adalah " << r;
    cout << " " << endl;


return 0;
}
