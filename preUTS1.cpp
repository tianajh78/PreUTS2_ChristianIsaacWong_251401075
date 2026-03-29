#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int angka;
    int balik = 0;

    cout << "INPUT  : ";
    cin >> angka;

    while (angka != 0) {
        int digit = angka % 10;
        balik = balik * 10 + digit;
        angka = angka / 10;
    }

    cout << "OUTPUT : " << balik << endl;
    
    return 0;
}