#include<iostream>
using namespace std;
int main(){
    int a[4] = {1,3,5,6};
        int k = 5;
        int l = 0;
        int r = 4;
        int m;
        if(k > a[4])
        cout<<5<<endl;

        while(l<=r){
                m = (l+r)/2;
                if(a[m] == k) cout<<m<<endl;
                
                if(k < a[m]){
                    r = m-1;
                }
                else{
                    l = m+1;
                }
                cout<<l<<endl;
        }
}