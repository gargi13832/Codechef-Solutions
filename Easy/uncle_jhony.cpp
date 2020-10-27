#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,i,k,temp,final;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        temp = arr[k-1];
        sort(arr,arr+n);
        for(i=0;i<n;i++){
            if(arr[i]==temp){
                final = i;
                break;
            }
        }
        cout<<final+1<<endl;
    }
    return 0;
}
