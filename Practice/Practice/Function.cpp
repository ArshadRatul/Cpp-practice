#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
/*
int add(int,int,int);

int main()
{
    int o,p,q,k;
    cout<<"Enter three numbers to add: \n";
    cin>>o>>p>>q;

    cout<<"The addition is "<<add(o,p,q);

    return 0;
}

int add(int a,int b,int c)
{
    int x;
    x=a+b+c;
    return x;
}
*/
#include<iostream>
using namespace std;
void input(int x[],int a)
{
    for(int i=0;i<a;i++)
    {
        cout<< "["<<i<<"]=: ";
        cin>>x[i];
    }
}
void print(int y[],int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<y[i]<<",";
    }
    cout<<"\b ";
}
int main()
{
    int b=0;
    cout<<"Enter the size of array: ";
    cin>>b;
    int a[b];
    input(a,b);
    print(a,b);

    return 0;
}
