#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int W,L,x,y;
    cin>>W>>L>>x>>y;
    int area1=L*x;
    int area2=W-x*L;
    if(area1>area2){cout<<area1;}
    else{cout<<area2;}

    return 0;
}

