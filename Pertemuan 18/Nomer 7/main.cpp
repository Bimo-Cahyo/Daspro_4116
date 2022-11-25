#include <iostream>

using namespace std;

int main()
{
    int sum;
    int number;
    cout << "Enter a Number : ";
    cin >> number;
    while(number != 9999){
        sum += number;
        cout << "Enter a number : ";
        cin >> number;
    }
    cout << "Jumlah Bilangan = " << sum <<endl;
    return 0;
}
