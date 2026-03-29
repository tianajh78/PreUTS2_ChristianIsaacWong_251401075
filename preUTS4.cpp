#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    
    int n;
    cout << "INPUT: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char huruf = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << huruf << " ";
        }
        cout << endl;
    }

    return 0;
}