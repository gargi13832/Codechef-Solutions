#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll a,b,n,temp,div;
        cin>>a>>b>>n;
        temp = pow(2,n/2);
        b = b*temp;
        if(n%2==0)
            a = a*temp;
        else{
            temp = pow(2,(n-(n/2)));
            a = a*temp;
        }
        div = max(a,b)/min(a,b);
        cout<<div<<endl;
    }
    return 0;
}
