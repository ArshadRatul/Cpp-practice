#include <iostream>
#include <cstring>
using namespace std;

int pos(char a){
    int val=0;
    for(int i='A';i<='Z';i++){
        if(a==i){break;}
        else{val++;}
    }
    return val+1;
}

int main(){

    int n=0,cost=0;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;

    for(int i=0;i<n;i++){
        if(islower(a[i])){
            if(isupper(b[i])){
                a[i]=b[i];
                cost++;
            }
            else{
                a[i]=a[i]-32;
                cost=cost+pos(a[i]);
            }
        }
    }

    cout<<cost;
    return 0;
}
