#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,k,i,count=0,flag=0;
        cin>>n>>k;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n-1;i++){
            if(arr[i]<k){
                flag = 1;
                break;
            }
            else{
                count++;
                arr[i+1] += arr[i]-k;
            }
        }
        if(flag==0){
            ll days = arr[n-1]/k;
            count += days;
        }
        cout<<count+1<<endl;
    }
    return 0;
}
