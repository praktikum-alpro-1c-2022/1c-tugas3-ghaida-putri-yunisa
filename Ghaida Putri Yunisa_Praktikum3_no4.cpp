#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){

    double b = 25;
    double x = 15;
    double c = 20;
    double Y;

    cout << "Nama = Ghaida Putri Yunisa" << endl;
    cout << "Kelas = 1C" << endl;
    cout << "NPM = 2210631170022" << endl;
    cout << " " << endl;

    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;
    cout << " " << endl;

    cout << "Selesaikan persamaan berikut, jika Y = bx^2 + 0,5x - c" << endl;
    cout << "Y = 25(15)^2 + 0,5(15) - 20" << endl;
    Y = (b * x * x) + 0,5 * x - c;

    cout << "Nilai Y = " << Y << endl;

return 0;

}
