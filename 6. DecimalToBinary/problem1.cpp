//WAP to concatenate the given n number;

#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the value of n :";
   cin>>n;
   int a[n];
   cout<<"Enter the elements of an array :";
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   int ans=0;
   for(int i=1;i<=n;i++){
    ans=(ans*10)+a[i];
   }
   cout<<"Your answer is :"<<ans;
   return 0;

    
}