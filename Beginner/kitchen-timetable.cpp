#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int allocated[n],required[n],i,new_allocated[n],cnt=0;
        for(i=0;i<n;i++){
            cin>>allocated[i];
        }
        new_allocated[0] = allocated[0];
        for(i=1;i<n;i++){
            new_allocated[i] = allocated[i] - allocated[i-1];
        }
        for(i=0;i<n;i++)
            cin>>required[i];
        for(i=0;i<n;i++){
            if(required[i]<=new_allocated[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
