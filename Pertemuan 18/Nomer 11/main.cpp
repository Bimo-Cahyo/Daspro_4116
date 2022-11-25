#include <iostream>

using namespace std;

int main()
{
    int angka;
    int hasil;
    cout << "Input : ";
    cin >> angka;
    for(int i = 1; i <= 10; i++){
        hasil = angka * i;
        cout << i << " x " << angka << " = " << hasil << endl;
    }
    return 0;
}
