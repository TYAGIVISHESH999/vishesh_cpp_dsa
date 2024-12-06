#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter three numbers  "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if((a>=b)&&(a>=c)){
        cout<<"largest number is ";
        cout<<a;
    }
    else if((b>=a)&&(b>=c)){
        cout<<"largest number is ";
        cout<<b;
    }
    else{
        cout<<"largest number is ";
        cout<<c;
    }
   
