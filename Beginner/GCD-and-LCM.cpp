#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll hcf(ll n1, ll n2){
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}

int main(){
    ll test;
    cin>>test;
    ll a ,b ,g;
    while(test--){
        cin>>a>>b;
        g = hcf(a,b);
        cout<<g<<" "<<(a*b)/g<<endl;
    }
    return 0;
}
