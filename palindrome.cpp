#include<iostream>
using namespace std;
int main(){
    int r=0,o,n,re;
    cin>>n;
    o=n;
    while(n!=0){
        re = n%10;
        r = r*10 + re;
        n=n/10;
    }
    if(r==o)
        cout<<true<<endl;
    else
        cout<<false<<endl;
}