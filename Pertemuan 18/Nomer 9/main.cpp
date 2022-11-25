#include <iostream>

using namespace std;

int main()
{
    int jumlah_bilangan = 0;
    int bilangan;
    int sum = 0;
    cout << "Input bil : ";
    cin >> bilangan;
    do{
        cout << bilangan << endl;
        jumlah_bilangan += 1;
        sum += bilangan;
        cout << "Input bil : ";
        cin >> bilangan;

    }
    while(bilangan != 9999);
    cout << "Jumlah Cacah angka = " << jumlah_bilangan << endl;
    cout << "Jumlah bilangan = " << sum;
    return 0;
}
