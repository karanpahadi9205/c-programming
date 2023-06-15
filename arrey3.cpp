#include<iostream>
using namespace std;
 int getmax(int arr[],int n){
int max=arr[0];
for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    max=arr[0];
    for(int i=0;i<10;i++){
    if(arr[i]>max)
    {
        max=arr[i];
    }
    }
    cout<<max;
 return max;
 }
 int main(){
      int arr[10],max;
       for(int i=0;i<10;i++){
       cin>>arr[i];
       }
       max=getmax(arr);
 cout<<max;
  }
