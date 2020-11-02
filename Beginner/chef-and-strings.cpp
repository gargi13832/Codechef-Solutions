#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,i,sum=0,temp;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=1;i<n;i++){
            temp = abs(arr[i] - arr[i-1])-1;
            sum = sum + temp;
        }
        cout<<sum<<endl;
    }
    return 0;
}
