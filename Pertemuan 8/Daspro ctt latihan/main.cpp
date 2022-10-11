#include <iostream>
#include <stdio.h>

 using namespace std;

 int main()
{
   /* int x;
    int y;
    int z;

    cin >> x;
    cin >> y;
    z=x+y;
    cout << z;

    int x;

    x = 12;

    if(x>10)
    cout << "x lebih besar";
    else if(x<10)
        cout << "x lebih kecil";
    else
        cout << "x=10";


    int u;
    u = 18;
    float t = 16.7;
    char ub = 'L';
    string ubb = "XL";

    cout <<"umur saya: "<< u;
    cout << endl;
    cout <<"Tingii Saya: "<< t;
    cout <<"\nUkuran baju: "<< ubb;

   char day;
    cin >> day;

    switch (day) {
        case 'A':
            cout << "Satu";
            break;
        case 'B':
            cout << "Dua";
            break;
        default:
            cout << "Undefined";
            break;
    }

    int x;
    //init  //cond limit    //counter
    for(x = 0; x <= 9001; x++){
      cout << x << " Saya tidak terlambat lagi" << endl;
    }
    //x++ ==> x = x+1 ==> x += 1
    x = 0;
    while (x <= 90){
        cout << x << " Saya tidak terlambat lagi" << endl;
        x++;
    }

    x = 0;
    do {
    }while (x<10);

     //1,3,5,7,8,10,12 31
    //4,6,9,11 30
    //2,28
    int day=31;
    int month=10;

    if((day > 0 && day <= 31) && (month == 1 ||
        month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)) {
            cout << "Tanggal valid" << endl;
    } else if ((day > 0 && day <= 30) && (month == 4 ||
        month == 6 || month == 9 || month == 11 )) {
            cout << "Tanggal valid" << endl;
    } else if ((day > 0 && day <= 29) && (month == 2)) {
        cout << "Tanggal valid" << endl;
    } else {
        cout << "Tanggal tidak valid" << endl;
    }
    int day=31;
    int month=1;

    if((day > 0 && day <= 31) && (month == 1 ||
        month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12)) {
           cout << "tanggal valid" << endl;
    } else if((day > 0 && day <= 30) && (month == 4 ||
        month == 6|| month == 9 || month == 11)) {
        cout <<"tanggal valid"<< endl;
    } else if ((day > 0 && day <= 29) && (month == 2)) {
        cout <<"tanggal valid"<< endl;
    } else {
        cout << "tanggal tidak valid" << endl;
             }*/

   int x=3;

   if(x % 2 == 0) {
    cout << "genap";
   } else if(x % 2 == 1) {
    cout << ("ganjil");
   } else(x % 2 > 1 && > 4){
    cout <<"ganjil besar";
   }

    return 0;
}
