#include <iostream>
#include<climits>
using namespace std;

int main() 
{
    int n;
   int arr[5]={10,2,3,4,5};
   int result=arr[0];
   for (int i=0;i<5;i++){
     if(arr[i]>result)
        {
       result=arr[i];
        }
   }
   
  cout<<"largest number is "<<result<<endl;
    return 0;
}
