#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    int c = 2;
    int i = 1;
    int v[a][b][c];
    float sum = 0;
    for(int j = 0; j <= 1 ; j++){
        for(int z = 0; z <= 2; z++){
            for(int x = 0;x <= 0; x++){
                v[j][z][x]= 2*i;
                a=j;
                b=z;
                c=x;
                i++;
                cout << v[j][z][x] << " " << endl;
                sum += v[j][z][x];
            }
        }
    }
    cout << "Total: " << sum << endl;
    cout << "Rata-Rata: " << sum/12 << endl;

    return 0;
}
