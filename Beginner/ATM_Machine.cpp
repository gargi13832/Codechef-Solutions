#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n, money,i;
        cin>>n>>money;
        ll arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++){
            if(arr[i]>money)
                cout<<0;
            else{
                money = money - arr[i];
                cout<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}
