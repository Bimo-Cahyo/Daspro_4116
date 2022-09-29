#include <iostream>

using namespace std;

int main()
{
    int temp;
    cin>> temp;
    if (temp <=0) {
        cout << "ICE" << endl;
    } else if (temp >100) {
        cout << "Gas" << endl;
    }
     else {
        cout << "Liquid" <<endl;
     }
    cout << "Hello world!" << endl;
    return 0;
}
