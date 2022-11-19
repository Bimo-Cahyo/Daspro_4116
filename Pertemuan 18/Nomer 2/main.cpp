#include <iostream>

using namespace std;

int main()
{
     cout<<" Nomer 2============"<< endl;
    int n;
    for (n=1;n<=100;n++) {
        if(n%2 == 0) {
            cout << "Nilai genap adalah " << n << endl;
            continue;
        }
    }
    return 0;
}
