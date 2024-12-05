#include <iostream>
using namespace std;
int main() {
    int age;
    char iscitizen;
    cout<<"Enter Age : "<<endl;
    cin>>age;
    cout<<"Citizen type Y else type N"<<endl;
    cin>>iscitizen;
    if(age>=18&&iscitizen=='Y')
    {
        cout<<"Eligible for Vote";
    }
    else{
        cout<<"Not Eligible for vote";
    }
    return 0;
}
