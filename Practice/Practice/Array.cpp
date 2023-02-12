/*
//Array 1d
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    /*
    NO.2
    float sum=0.0,ave=0.0,tem;
    int a[10];
    cout<<"array: "<<endl;
    for (int i=0;i<10;i++)
    {
        a[i]=rand()%(100-50)+50;
        sum=sum+a[i];
        cout<<a[i]<<endl;
    }
    ave=sum/10;

    for(int j=0;j<10;j++)
    {
        for(int k=0;k<10;k++)
        {
            if(a[k]>a[k+1])
            {
                tem=a[k];
                a[k]=a[k+1];
                a[k+1]=tem;
            }
        }
    }
    cout<<"Sorted: "<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Average: "<<ave<<endl;
    cout<<"Highest: "<<a[9]<<endl;
    cout<<"lowest: "<<a[0]<<endl;
    */

    /*
    //No.6
    bool a=true,b=true;
    int tem=0,c=9;
    int a1[10],a2[10],a3[10];
    cout<<"Enter the array: "<<endl;
    srand(time(0));
    for(int i=0;i<10;i++) //For taking input and taking copy array-1 in the array-2.
    {
        cout<<"a1["<<i+1<<"]= ";
        cin>>a1[i];
        a2[i]=a1[i];
    }
    for(int j=0;j<10;j++)//for sorting array-2 in descending order .
    {
        for(int k=0;k<10;k++)
        {
            if(a2[k+1]>a2[k])
            {
                tem=a2[k];
                a2[k]=a2[k+1];
                a2[k+1]=tem;
            }
        }
    }
    for(int h=0;h<10;h++)//for taking input in array-3 in ascending order.
    {
        a3[c]=a2[h];
        c--;
    }
    cout<<"A1  "<<"A2  "<<"A3 "<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<a1[i]<<"  "<<a2[i]<<"  "<<a3[i]<<endl;
    }
    for(int i=0;i<10;i++)// checking if a1 is equal to a2 array
    {
        if(a1[i]!=a2[i])
        {
            a=false;
            break;
        }
    }
    for(int i=0;i<10;i++)// checking if a1 is equal to a3 array
    {
        if(a1[i]!=a3[i])
        {
            b=false;
            break;
        }
    }
    if(a==true)
    {
        cout<<"The array is sorted in descending order.";
    }
    else if (b==true)
    {
        cout<<"The array is sorted in ascending order.";
    }
    else {cout<<"The array is not sorted.";}

    return 0;
}
*/

//Array 2D
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[4][3],b[3][2],d[4][2];
    srand(time(0));

    for(int r=0;r<4;r++)//For taking input in array A.
    {
        for(int c=0;c<3;c++)
        {
            a[r][c]=rand()%(10-5)+5;
        }
    }

    for(int r=0;r<3;r++)//For taking input in array B.
    {
        for(int c=0;c<2;c++)
        {
            b[r][c]=rand()%(10-5)+5;
        }
    }
    cout<<"Array A: \n";
    for(int r=0;r<4;r++)//Printing array A.
    {
        for(int c=0;c<3;c++)
        {
            cout<<a[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array B: \n";
    for(int r=0;r<3;r++)//Printing array B.
    {
        for(int c=0;c<2;c++)
        {
            cout<<b[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array C: \n";
    for(int r=0;r<4;r++)
    {
        for(int c=0;c<2;c++)
        {
            d[r][c]=0;
            for(int j=0;j<3;j++)
            {
                d[r][c]=d[r][c]+(a[r][j]*b[j][c]);
            }
            cout<<d[r][c]<<"  " ;
        }
        cout<<endl;
    }
    cout<<"Transpose of C: \n";
    for(int k=0;k<2;k++)
    {
        for(int h=0;h<4;h++)
        {
            cout<<d[h][k]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
