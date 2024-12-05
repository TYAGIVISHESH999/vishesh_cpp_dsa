#include <iostream>
using namespace std;
int main() {
    int n;
    int i;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"Number is even"<<endl;
        }
        else
        {
            cout<<"Number is odd"<<endl;
        }
    }
    return 0;
}
