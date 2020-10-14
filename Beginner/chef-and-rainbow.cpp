#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){
    ll test,n,i,j;
    cin>>test;
    while(test--){
        cin>>n;
        vector<int> vec(n);
        for(ll i=0;i<n;i++)
            cin>>vec[i];

        int flag = 0;
        stack<ll> st;
        int curr = 1;
        for(i=0;i<n;){
            if(vec[i] != curr){
                flag = 1;
                break;
            }
            if(curr == 7){
                while(vec[i]==curr){
                    i++;
                }
                curr++;
                break;
            }
            while(vec[i]==curr){
                st.push(vec[i]);
                i++;
            }
            curr++;
        }
        if(!flag){
            for(j=i;j<n;j++){
                if(st.empty()){
                    flag = 1;
                    break;
                }
                if(st.top() == vec[j]){
                    st.pop();
                }
                else{
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag && st.empty())
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
