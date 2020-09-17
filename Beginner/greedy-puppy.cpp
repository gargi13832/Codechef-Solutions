#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll greedy_pup(ll coins, ll people){
    return coins%people;
}

int main(){
    ll test, n, k;
    cin>>test;
    while(test--){
        cin>>n>>k;
        cout<<greedy_pup(n,k)<<endl;
    }
    return 0;
}
