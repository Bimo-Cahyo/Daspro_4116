#include <iostream>

using namespace std;

int main()
{
    int jumlah_bilangan = 0;
    int bilangan;
    cout << "Input bil : ";
    cin >> bilangan;
    do{
        cout << bilangan << endl;
        jumlah_bilangan += 1;
        cout << "Input bil : ";
        cin >> bilangan;

    }
    while(bilangan != 9999);
    cout << "Jumlah angka = " << jumlah_bilangan << endl;
    return 0;
}
