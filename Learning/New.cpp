#include <iostream>
using namespace std;
int main()
{
    int a[2][3],b[5];
    /*
    for(int i=0;i<5;i++) //0123
    {
        cout<<"["<<i+1<<"]= ";
        cin>>b[i];

    }
    for(int i=0;i<5;i++) //0123
    {
        cout<<"value if index "<<i<<" is "<<b[i]<<endl;
    }*/
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


