#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed <<setprecision(3);
    cout<<d<<endl;
    cout<<fixed << setprecision(8);
    cout<<e<<endl;
    return 0;
}
