#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int test;
    cin>>test;
    string num;
    while(test--){
        ll zero = 0, one = 0;
        cin>>num;

        for(int i = 0; i<num.length(); i++){
            if(num[i]=='0')
                zero++;
            else
                one++;
        }

        if(zero==1 || one ==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
