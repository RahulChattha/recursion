#include<iostream>
using namespace std;
int rev(int num){
    int static n=0;
   if(num==0){
   
    return 0;
   }
   n=(n*10)+num%10;
   rev(num/10);
 return n;
}

int main(){
    int num;
    cin>>num;
    cout<< rev(num)<<endl;
    
    return 0;
}