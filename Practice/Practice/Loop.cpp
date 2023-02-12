//loop level 1
/*
#include<iostream>
using namespace std;
int main()
{

    //Q. 1
    int x;
    while(x!=-1)
    {
        cout<<"Enter a value: ";
        cin>>x;
    }


    //Q.3
    int x;
    for (int i=0;i<100;i++)
    {
        cout<<i<<",";
    }
    cout<<"\b ";



    return 0;
}
*/
// loop level 1
/*#include<iostream>
using namespace std;
int main()
{
    int x=0,y=1,z,b;
    //011235813
    cout<<"Enter the term: ";
    cin>>b;
    if (b==1)
    {
        cout<<"0";
    }
    else if (b==2)
    {
        cout<<"1";
    }
    else if (b>2)
    {
        for(int i=0;i<b-2;i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        cout<<z;
    }


    return 0;
}*/
/*no.13
#include<iostream>
using namespace std;
int main()
{
    int inp,x=0,y=1,z,i;
    cout<<"Enter a number to check: ";
    cin>>inp;

    if(inp==0)
    {
        cout<< "1st term of fibonacci series.";
    }
    else if(inp==1)
    {
        cout<< "2nd or 3rd term of fibonacci series.";
    }
    else if (inp>1)
    {
        for(int i=0;i<inp;i++)
        {
            z=x+y;
            x=y;
            y=z;
            if(z==inp)
            {
                cout<<i+3<<"th term of fibonacci series.";
                break;
            }
        }
        if(i!=inp)
        {
          cout<<"Not in the fibonacci series.";
        }
    }

    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cin>>x;

    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
        {
            cout<<i<<"+";
            sum=sum-i;
        }
        else
        {
            cout<<i<<"-";
            sum=sum+i;
        }
    }
    cout<<"\b=";
    cout<<sum;

    return 0;
}
