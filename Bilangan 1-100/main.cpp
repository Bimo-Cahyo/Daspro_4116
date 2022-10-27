#include <iostream>

using namespace std;

int main()
{
     cout<< "masuk outher selesaiin inner "<<endl;
    for(int i = 0; i < 2; i++ ) { //outher
        cout << i << endl;
        for(int j = 0; j < 3; j++ ) { //inner
            cout << j << endl;
        }
    }
    /*for (int a= 1;a <=100; a++) {
    if (a % 2 == 0)
        cout<< "Genap " << a <<endl;
    }
    cout<< "Pemisah----------------------------" <<endl;

    for (int b= 1;b <=100; b++) {
    if (b % 2 == 1)
        cout<< "Ganjil " << b <<endl;
    }

    cout<< "Pemisah----------------------------" <<endl;

    for (int c= 6;c <=100; c++) {
    if (c % 6 == 0)
        cout<< "Kelipatan " << c <<endl;
    }
    cout<< "Pemisah----------------------------" <<endl;

    for (int d= 2; d<=100; d++){
    if (i % 1 == 0)
    cout<< "Prima " << j <<endl;*/
    /*int bil;
    cout <<"Masukkan Bilangan: ";

    cin >> bil;
    cout << endl;

    if (bil%2==0){
            cout << bil<<" Adalah bilangan genap"<<endl;
    } else {
         cout<<bil<<" Adalah bilanan ganjil"<<endl;
    } */
    return 0;
}
