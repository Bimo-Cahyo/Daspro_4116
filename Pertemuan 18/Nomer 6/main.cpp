#include <iostream>

using namespace std;

int main()
{
     int val, max, min;

    cout << "Program Ini Akan Berhenti Jika Anda Menginput Angka -99\n" << endl;

    while (true)
    {
        //inpuwt
        cout << "Masukkan Nilai Anda : ";
        cin >> val;

        //proses looping akan berhenti ketika x = -99
        if(val == -99){
            break;
        }

        if(val != -99){
            if(max < val){
                max = val;
            }
            if(min > val){
                min = val;
            }
        }

    }

    cout << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}
