#include<iostream>
using namespace std;
bool check(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
   return check(arr+1,n-1);
}
int main(){
    int arr[5]={1,4,10,134,78};
    cout<<check(arr,5)<<endl;
    return 0;
    
    
    }