#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll test;
    cin>>test;
    ll n, b, w, h, p, max=0,best=b;
    while(test--){
        cin>>n>>b;
        max=0;
        best=b;
        while(n--){
            cin>>w>>h>>p;
            if(p<=b){
                if(w*h>=max)
                    max = w*h;
            }
        }
        if(max==0)
            cout<<"no tablet\n";
        else
            cout<<max<<endl;
    }
    return 0;
}
