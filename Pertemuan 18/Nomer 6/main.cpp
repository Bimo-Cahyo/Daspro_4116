#include <iostream>

using namespace std;

int main()
{
    int x;
    int max = INT32_MIN;
    int min = INT32_MAX;
    bool exit = false;
    while (exit == false) {
        cin >> x;
        if (max<x && x!=-99) {
            max = x;
        }

        if (min>x && x!=-99) {
            min = x;
        }


        if (x==-99) {
            exit = true;
        }
        if (exit) {
            break;
        }
    }
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    return 0;
}
