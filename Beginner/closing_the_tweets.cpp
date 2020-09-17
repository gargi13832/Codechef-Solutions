#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i,cnt=0;
    cin>>n>>k;
    int arr[n];
    for(i=1;i<=n;i++)
        arr[i]=0;
    string str;
    while(k--){

        cin>>str;
        if(str=="CLICK"){
            int x;
            cin>>x;
            if(arr[x]==0){
                arr[x]=1;
                cnt++;
            }
            else{
                arr[x]=0;
                cnt--;
            }
        }
        else if(str=="CLOSEALL"){
            for(i=1;i<=n;i++)
                arr[i]=0;
            cnt = 0;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
