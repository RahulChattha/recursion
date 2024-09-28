#include<iostream>

using namespace std;
int bin_deci(int bin){
   int static i=0;
    int static num;
    if(bin==0){
        return 0;
        }
    num=(num+(bin%10)* pow(2,i));
    i++;
    bin_deci(bin/10);
   return num;

}
int main(){
    int bin;
    cin>>bin;
    cout<<bin_deci(bin)<<endl;
    return 0;

}