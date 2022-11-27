#include <iostream>

using namespace std;

int main()
{
    int x;
    bool exit = false;
    while (exit == false) {
        cout << "Masukkan Nilai Anda : ";
        cin >> x;
        if (x==-99) {
            exit = true;
        }
        if (exit) {
            cout << "" << endl;
            cout << "Keluar Karena Break" << endl;
            cout << "" << endl;
            break;
        }
    }
    return 0;
}
