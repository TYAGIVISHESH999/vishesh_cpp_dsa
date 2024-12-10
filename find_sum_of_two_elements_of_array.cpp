#include <iostream>
using namespace std;
int main() {
    int n,target;
    cout<<"enter size of an array";
    cin>>n;
    int arr[n];
    cout<<"enter an array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target elements";
    cin>>target;
    int s=0;
    int e=n-1;
    while(s<=e){
       if(arr[s]+arr[e]==target){
           cout<<"those two number present in element which produce target sum is";
           cout<<arr[s]<<" "<<arr[e];
           return 1;
       }
       else if(arr[s]+arr[e]<target){
          s++;
      } else{
         e--;
      }
    }
        return 0;
}
