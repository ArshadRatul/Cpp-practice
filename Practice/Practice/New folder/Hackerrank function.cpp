#include<iostream>
#include<algorithm>
using namespace std;
int check(int,int,int,int);
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    check(a,b,c,d);
    return 0;
}

check(int a,int b,int c,int d)
{
    cout<<max({a,b,c,d},comp);
}
