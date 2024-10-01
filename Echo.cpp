#include<iostream>
using namespace std;
void echo(int n){
    if(n==0){
        return;
    }
    cout<<n%10<<" ";
    echo(n/10);
    echo(n/10);
    return;
}
int main(){
    int n;
    cin>>n;

    echo(n);
    echo(n);
    return 0;
}