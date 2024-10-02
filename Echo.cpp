#include<iostream>
using namespace std;
void echo(int *s, int n){
    if(n==0)
    {
        return;
    }
   
    echo(s+1,n-1);
    echo(s+1,n-1);
   cout<<*s;
}
int main(){
      int str[]={1,2,3};
    

    echo(str,3);
    echo(str,3);
    return 0;
}