#include <iostream>

using namespace std;

int main()
{
    int x;
    int counter = 0;
    float avg;
    float sum;
    for (x=1;x<=20;x++) {
        counter++;
        cout << counter << endl;
        sum = (x/2.0)*(2+(x-1));
    }
    cout << "" << endl;
    cout << "jumlah     = " << sum << endl;
    avg = sum/x;
    cout << "rata-rata  = " << avg << endl;
    return 0;
}
