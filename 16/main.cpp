#include <iostream>

using namespace std;

int main()
{
   int menu;
    string x;
    int jumlah = 0;
    bool exit = false;

    while (exit == false) {
        cout << "==== Daftar Menu Makanan ====" << endl;
        cout << "1. Nasi Kerikiri \n2. Rica-Rica Bekicot \n3. Pepes Brotowali \n4. Kepiting Presto" << endl;
        cout << "Input kode makanan = ";


        //Mekanisme memillih makanan (switch case)
        cin >> menu;
        switch (menu) {
        case (1):
            cout << "Anda memesan Nasi Kerikiri" << endl;
            break;
        case (2):
            cout << "Anda memesan Rica-Rica Bekicot" << endl;
            break;
        case (3):
            cout << "Anda memesan Pepes Brotowali" << endl;
            break;
        case (4):
            cout << "Anda memesan Kepiting Presto" << endl;
            break;
        default:
            cout << "Menu tidak terseia!!!" << endl;
        }


        //Mekanisme pesan ulang (loop)
        cout << "Apakah Anda Ingin Memesan Lagi? (Y/N)" << endl;
        cin >> x;
        if (x == "N" || x =="n") {
            exit = true;
            cout << "Jumlah pesanan anda adalah " << jumlah << endl;
            continue;
        }

        else if (x == "Y" || x == "y" && menu < 5 && menu > 0) {
            jumlah++;
            cout << "Jumlah pesanan anda sekarang adalah " << jumlah << endl;
        }

        if (exit) {
            break;
        }
    }
    return 0;
}
