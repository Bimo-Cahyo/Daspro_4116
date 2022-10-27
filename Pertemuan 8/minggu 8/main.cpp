#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a;
    int hari;
    int bulan;
    cout << "masukkan hari :/n";
    cin >> hari;
    cout << "masukkan bulan :/n";
    cin >> bulan;

    bool bulanGanjil = bulan % 2 ==1;
    int hariMaximal;

    if (hari <=30) {
        cout << "Tanggal Valid" << endl;
    } else {
        cout << "Tanggal Tidak Valid" << endl;
    }


    return 0;
}
