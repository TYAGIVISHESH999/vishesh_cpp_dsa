#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    if((a>=b)&&(a>=c)){
        cout<<("the largest number is");
        cout<<a;
        }
    else if((b>=a)&&(b>=c)){
        cout<<"the largest number is";
        cout<<b;
        }
    else if((c>=a)&&(c>=b)){
        cout<<"the largest number is";
        cout<<c;
        }
    return 0;
}
