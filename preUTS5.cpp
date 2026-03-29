#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    
    int a, b;
    cout << "INPUT 1: ";
    cin >> a;
    cout << "INPUT 2: ";
    cin >> b;

    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }

    cout << "OUTPUT : " << a << endl;

    return 0;
}