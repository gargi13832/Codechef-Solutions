#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n],i,gcd=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            gcd = __gcd(arr[i], gcd);
        }
        for(i=0;i<n;i++){
            cout<<arr[i]/gcd<<" ";
        }
        cout<<endl;
    }
    return 0;
}
