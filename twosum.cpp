#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a = pow(-10,9);
    int b = pow(10,9);
    int n;
    cin>>n;
        if(2<=n<=pow(10,4)){
            int nums[n];
            for(int i=0;i<n;i++){
                if(pow(-10,9)<=nums[i]<=pow(10,9)){
                    cin>>nums[i];
                }
            }
            int t;
            cin>>t;
            if(pow(-10,9)<=t<=pow(10,9)){
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        if(nums[i] + nums[j] == t){
                            cout<<"["<<i<<","<<j<<"]"<<endl;
                        }
                    }
                }
            }

        }

}