#include <iostream>

using namespace std;

int main()
{
    cout << "#1" << endl;
    //cara pertama
    int x[2][3]=
    {
        {2,3,4},
        {5,6,7}
    };
    float ftotal=0;
    float stotal=0;
    for(int i=0; i<=2; i++)
    {
        cout<<x[0][i]<<" "<<endl;
        ftotal+=x[0][i];
    }
    for(int i=0; i<=2; i++)
    {
        cout<<x[1][i]<<" "<<endl;
        stotal+=x[1][i];
    }
    float total= ftotal+stotal;
    cout<<"Total Nilai Arrray: "<<total<<endl;
    cout<<"Rata Rata: "<<total/6<<endl;

    cout<<"Atau"<<endl;
    // cara kedua
    float sum=0;
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            cout<<x[i][j]<<" ";
            sum=x[i][j]+sum;
        }
    }
    cout<<endl;
    cout<<"Total dari Array: "<<sum<<endl;
    cout<<"Average: "<<sum/6<<endl;




    cout<<"#2"<<endl;
    int a=2;
    int b=3;
    int c=2;
    int i=1;
    int v[a][b][c];
    float Summ=0;
        for(int j=0; j<=1; j++)
        {
            for(int k=0; k<=2; k++)
            {
                for(int l=0; l<=1; l++)
                {
                v[j][k][l]=2*i;
                a=j;
                b=k;
                c=l;
                i++;
                cout<<v[j][k][l]<<" "<<endl;
                Summ+=v[j][k][l];
                }
            }
        }
        cout<<"TOtall: "<<Summ<<endl;
        cout<<"Rata Rata: "<<Summ/12<<endl;
    return 0;
}
