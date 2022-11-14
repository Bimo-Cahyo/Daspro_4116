#include <iostream>

using namespace std;

int main()
{
    int balance;
    int permen = 0;
    string x;
    cout << "Uang: Rp.5000" << endl;
    cout << "Harga Permen" << endl;
    cout << "A = Rp.1000 \nB = Rp.500 \nC = Rp.300" << endl;
    cout << "Inputkan apa yag ingin anda beli! (A/B/C)" << endl;
    cin >> x;

    if (x == "a" || x == "A") {
        cout << "Anda membeli 3 permen" << endl;
    }

    else if (x == "b" || x == "B") {
        balance = 5000;
        while (balance > 0) {
            balance = balance - 500;
            permen++;
        }
        cout << "Permen yang dapat anda beli adalah " << permen << endl;
    }

    else if (x == "c" || x == "C") {
        for(int a = 1; a <=5000; a++)
            if (a % 300 == 0) {
                permen++;
                cout << a << endl;
            }
        cout << "Permen yang dapat anda beli adalah: " << permen << endl;
    }

    else {
        cout << "Input invalid!" << endl;
    }

    return 0;
}
