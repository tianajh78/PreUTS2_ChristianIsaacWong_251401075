#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int angka;
    int kuadrat, jumlah = 0;

    cout << "INPUT  : ";
    cin >> angka;

    kuadrat = angka * angka;

    while (kuadrat != 0) {
        int digit = kuadrat % 10;
        jumlah += digit;
        kuadrat /= 10;
    }

    if (jumlah == angka) {
        cout << "OUTPUT : ANGKA NEON" << endl;
    } else {
        cout << "OUTPUT : BUKAN ANGKA NEON" << endl;
    }

    return 0;
}