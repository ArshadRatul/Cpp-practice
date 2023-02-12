#include<iostream>
using namespace std;

void input_val(float[],int);      //Input function.
int main()
{
    int n=0;                  //Declaring the variables.

    cout<< "Enter the value of n: ";
    cin>> n;                  //Taking input of n.
    float x[n],y[n];            //Declaring the arrays.
    cout<< "Enter the values for x"<<endl;
    input_val(x,n);        //Taking input into the arrays x.
    cout<< "Enter the values for y"<<endl;
    input_val(y,n);         //Taking input into the array y.

    float sum_xx=0,sum_xy=0,sum_x=0,sum_y=0,B=0,A=0;
    for(int j=0;j<n;j++)     //calculating sum of xx,xy,x,y.
    {
        sum_x=sum_x+x[j];
        sum_y=sum_y+y[j];
        sum_xx=sum_xx+(x[j]*x[j]);
        sum_xy=sum_xy+(x[j]*y[j]);
    }
    // Output of calculated values
    cout<<"Sum of x= "<<sum_x<<endl;
    cout<<"Sum of y= "<<sum_y<<endl;
    cout<<"Sum of x^2= "<<sum_xx<<endl;
    cout<<"Sum of xy= "<<sum_xy<<endl;

    //calculating beta
    B=((n*sum_xy)-(sum_x*sum_y))/((n*sum_xx)-(sum_x*sum_x));
    cout<<"B= "<<B<<endl;
    //calculating alpha
    A=(sum_y/n)-(B*(sum_x/n));
    cout<<"a= "<<A<<endl;

  return 0;
}

void input_val(float a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<"["<<i+1<<"]=";
        cin>>a[i];
    }
}
