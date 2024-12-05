#include <iostream>
using namespace std;
int nsum(int n){
    if(n==0)
    {
        return 0;
    }
    int res=n+nsum(n-1);
    return res;
}
int main() {
   int n =5;
   int sum= nsum(n);
   cout<<"Sum = "<<sum;
    return 0;
}
