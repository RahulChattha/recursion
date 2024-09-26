#include<iostream>
using namespace std;
bool palindromecheck(string str,int l){
    int static st=0;
    if(st>=l){
        return true;
    }
    if(str[st]!=str[l]){
        return false;
    }
    st++;
    
  return palindromecheck(str,l-1);

}
int main(){
    string a;
    cin>>a;
    cout<<palindromecheck(a,a.length()-1)<<endl;
    return 0;
}