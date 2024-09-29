#include<iostream>
using namespace std;
int Binary_search(int *arr,int key,int st,int end){
      int mid=(st+end)/2;
      if(st==end){
        return -1;
      }
      if(arr[mid]==key){
        return mid;
      }
      if(arr[mid]>key){
       return Binary_search(arr,key,st,mid-1);
      }
      return Binary_search(arr,key,mid+1,end);
}
int main(){
    int arr[8]={1,4,12,44,56,64,82,105};
    int key;
    cin>>key;
    cout<<Binary_search(arr,key,0,7)<<endl;

    return 0;
}