#include <iostream>

using namespace std;

int main()
{
    /*for(int i = 0; i < 4; i++){
        if(i == 2){
            continue;
        }
        if(i > 3){
            break;//stop tapi angka tetap masuk
        }
        cout << i << endl;
    }
    cout<<"========================================================================="<<endl;
    for(int i = 0; i <= 1; i++){
         cout << i << endl;
        for(int j = 0; j <=1; j++){
        cout << j << endl;
        }
    }*/
    /*i=0, j=0; 0
           j=0
       i=1,j=1
           j=1*/

    /*i=0     0
      i=0, j=0, 0
           j=0  0
      i=1,      1
      */
      /*cout << "Daftar Makanan" << endl;
      int menu;
      cout<<"/nAngka:";
      cin>> menu;

      switch(menu){
          case 1: cout<<"Nasi Kerikirl";break;
          case 2: cout<<"Rica-Rica Bekicot";break;
          case 3: cout<<"Pepes Brotowali";break;
          case 4: cout<<"Kepiting Presto";break;
      }*/
      while (true) {

        cout << endl
        cout << "Daftar Makanan" << endl;
        cout << "1. Nasi Kerikil" << endl;
        cout << "2. Rica-Rica Bekicot" << endl;
        cout << "3. Pepes Brotowali" << endl;
        cout << "4. Kepiting Presto" << endl;

        int x;
        cout <<"Masukan Kode makanan"<<endl;
        cin >>x;
        cout<< endl;
        switch(menu){
          case 1:
              cout<<"Anda Memesan Nasi Kerikirl" <<endl;
              break;
          case 2:
              cout<<"Anda Memesan Rica-Rica Bekicot"<<endl;
              break;
          case 3:
              cout<<"Anda Memesan Pepes Brotowali"<<endl;
              break;
          case 4:
              cout<<"Anda Memesan Kepiting Presto"<<endl;
              break;
          default:
            cout<<"Maaf, Kode Makanan Anda Salah"<<endl;
            break;
      }

return 0;
}
