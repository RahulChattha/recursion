#include<iostream>

 using namespace std;
int rev(string& str,int n){
    int static st=0;
    if(st>=n){
        
        return 0;
    }
    swap(str[st],str[n]);
    st++;
    rev(str,n-1);
  
  return 0;
}
int main(){
    string a;
    cin>>a;
   
    rev(a,a.length()-1);
   cout<< a<<endl; 
    return 0;
}
