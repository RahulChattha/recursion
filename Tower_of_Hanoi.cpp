#include<iostream>
using namespace std;
void TOH(int n, string s,string a,string d){
    if(n==1){
        cout<<"move "<<n <<" disc from "<<s<<" to "<<d<<endl;
        return;
    }
    TOH(n-1,s,d,a);
    cout<<"move "<<n <<" disc from "<<s<<" to "<<d<<endl;
    TOH(n-1,a,s,d);
   }
int main(){
    int n;
    cin>>n;
    TOH(n,"Source","Aux","Destination");
    return 0;

}