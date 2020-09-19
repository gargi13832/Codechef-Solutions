#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int i, flag = 0;
    for(i=2;i<=n-1;i++){
        if(n%i==0)
            break;
    }
    if(i==n)
        return true;
    else
        return false;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y,i,flag = 0;
        cin>>x>>y;
        int sum = x+y,nos=1;
        sum++;
        while(!isprime(sum)){
            sum++;
            nos++;
        }
        cout<<nos<<endl;
    }
    return 0;
}
