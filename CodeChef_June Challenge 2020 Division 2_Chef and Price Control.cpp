#include<bits/stdc++.h>
using namespace std;
main(){

int t,n,k,i,j,Sum=0,sum=0,x;
cin>>t;
for(i=0;i<t;i++){
    cin>>n>>k;
    sum=0,Sum=0;
    for(j=0;j<n;j++){
        cin>>x;
        sum+=x;
        if(x>=k)
          Sum+=k;
        if(x<k)
          Sum+=x;
        }
        cout<<abs(Sum-sum)<<endl;
    }
}









