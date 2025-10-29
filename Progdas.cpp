#include <iostream>
#include <cmath>   
using namespace std;

// Konstanta nilai pi
const double PI = 3.1416;

// memiliki 4 parameter formal yaitu x1,y1,x2,y2
// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // pow sebagai cara menghitung pangkat
    // sqrt sebagai cara menghitung akar kuadrat
}

// memanggil fungsi jarak untuk mencari radius (jari jari lingkaran) 
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
    // x1,y1 = titik pusat
    // x2,y2 = titik pada lingkaran
}

// Fungsi untuk menghitung keliling lingkaran dengan rumus 2*π*r
double circumference(double r) {
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran dengan rumus π*r^2
double area(double r) {
    return PI * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "Masukkan nilai x1 (titik pusat): ";
    cin >> x1;

    cout << "Masukkan nilai y1 (titik pusat): ";
    cin >> y1;

    cout << "Masukkan nilai x2 (titik pada lingkaran): ";
    cin >> x2;

    cout << "Masukkan nilai y2 (titik pada lingkaran): ";
    cin >> y2;

    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;

    cout << "distance between two point :" << distance(x1, y1, x2, y2) << endl;
    cout << "radius :" << r << endl;
    cout << "diameter :" << d << endl;
    cout << "circumference :" << circumference(r) << endl;
    cout << "area :" << area(r) << endl;

    return 0;
}


