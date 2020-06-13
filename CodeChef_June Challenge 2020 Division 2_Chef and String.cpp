#include<bits/stdc++.h>
#include<string>
using namespace std;
main(){

int t,i,j,sum=0;
string n;
cin>>t;
for(i=0;i<t;i++){
    cin>>n;
    sum=0;
    for(j=0;j<n.length();j++){
        if(n[j] != n[j+1] && j+1<n.length()){
            sum++;
            j++;
        }
    }
    cout<<sum<<endl;
}
}
