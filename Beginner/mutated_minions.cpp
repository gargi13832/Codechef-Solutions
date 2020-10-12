#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k,count=0;
        cin>>n>>k;
        int num;
        while(n--){
            cin>>num;
            if((num+k)%7==0)
                count++;
        }
        cout<<count<<endl;
    }
}
