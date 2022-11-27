#include <iostream>

using namespace std;

int main()
{
   cout << "-------------------------------------------------------------" << endl;
    cout << "Celcius          Fahrenheit        Keterangan             " << endl;
    cout << "-------------------------------------------------------------" << endl;
    int celcius;
    double fahrenheit;
    for(celcius = -40; celcius <= 100; celcius++){
        fahrenheit = celcius * 9/5 + 32;
        switch(celcius){
            case -40:
                cout << celcius << "                " << fahrenheit << "        " << " Cuaca sangat dingin bersalju" << endl;
                break;
            case -18:
                cout << celcius << "                " << fahrenheit << "          " << " Cuaca dingin bersalju" << endl;
                break;
            case 0:
                cout << celcius << "                  " << fahrenheit << "         " << " Titik Beku Air" << endl;
                break;
            case 10:
                cout << celcius << "                 " << fahrenheit << "         " << " Hari yang dingin" << endl;
                break;
            case 21:
                cout << celcius << "                 " << fahrenheit << "         " << " Temperatur ruangan" << endl;
                break;
            case 30:
                cout << celcius << "                 " << fahrenheit << "         " << " Cuaca Pantai" << endl;
                break;
            case 37:
                cout << celcius << "                 " << fahrenheit << "         " << " Temperatur Tubuh" << endl;
                break;
            case 40:
                cout << celcius << "                 " << fahrenheit << "        " << " Air Mandi Panas" << endl;
                break;
            case 100:
                cout << celcius << "                " << fahrenheit << "        " << " Air Mendidih" << endl;
        }
    }
    cout << "-------------------------------------------------------------" << endl;
    return 0;
}
