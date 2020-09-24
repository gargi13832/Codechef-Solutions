#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,min=99999999;
    cin>>test;
    while(test--){
        cin>>n;
        min=99999999;
        int arr[n],i;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<min)
                min = arr[i];
        }
        cout<<min*(n-1)<<endl;
    }
    return 0;
}
