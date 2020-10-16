#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll match(ll num){
    ll n,sum = 0;
    while(num){
        n = num%10;
        if((n==0)||(n==6)||(n==9))
            sum = sum+6;
        else if(n==1)
            sum = sum+2;
        else if((n==2)||(n==3)||(n==5))
            sum = sum+5;
        else if(n==4)
            sum = sum+4;
        else if(n==7)
            sum = sum+3;
        else if(n==8)
            sum = sum+7;
        num = num/10;
    }
    return sum;
}

int main(){
    ll test;
    cin>>test;
    ll a,b;
    while(test--){
        cin>>a>>b;
        a = a+b;
        cout<<match(a)<<endl;
    }
    return 0;
}
