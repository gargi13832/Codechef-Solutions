#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll arr[5],i,num,sum=0;
        for(i=0;i<5;i++)
            cin>>arr[i];
        cin>>num;
        for(i=0;i<5;i++){
            arr[i] = arr[i]*num;
            sum = sum+arr[i];
        }
        cout<<sum<<endl;
        if(sum<=(24*5))
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
