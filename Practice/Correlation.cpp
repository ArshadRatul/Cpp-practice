#include<iostream>
#include<cmath>
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

    float sum_xx=0,sum_yy,sum_xy=0,sum_x=0,sum_y=0,r=0;
    for(int j=0;j<n;j++)     //calculating sum of xx,xy,x,y.
    {
        sum_x=sum_x+x[j];
        sum_y=sum_y+y[j];
        sum_xx=sum_xx+(x[j]*x[j]);
        sum_yy=sum_yy+(y[j]*y[j]);
        sum_xy=sum_xy+(x[j]*y[j]);

    }
    // Output of calculated values
    cout<<"Sum of x= "<<sum_x<<endl;
    cout<<"Sum of y= "<<sum_y<<endl;
    cout<<"Sum of x^2= "<<sum_xx<<endl;
    cout<<"Sum of y^2= "<<sum_yy<<endl;
    cout<<"Sum of xy= "<<sum_xy<<endl;

    //calculating correlation
    r=((n*sum_xy)-(sum_x*sum_y))/sqrt(((n*sum_xx)-(sum_x*sum_x))*((n*sum_yy)-(sum_y*sum_y)));
    cout<<"r= "<<r<<endl;
    if((r>=-1)&&(r<-0.75))
    {
        cout<<"Strong and negative correlation";
    }
    else if (((r>=-0.75)&&(r<-0.25))||((r>=0.25)&&(r<0.75)))
    {
        cout<<"Moderate correlation";
    }
    else if ((r>=0.75)&&(r<=1))
    {
        cout<<"Strong and positive correlation";
    }
    else if((r>=-0.25)&&(r<0.25))
    {
        cout<<"No correlation";
    }

  return 0;
}

//describing the functions
void input_val(float a[],int b)
{
    for(int i=0;i<b;i++)
    {
        cout<<"["<<i+1<<"]=";
        cin>>a[i];
    }
}

