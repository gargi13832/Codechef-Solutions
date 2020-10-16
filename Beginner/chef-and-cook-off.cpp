#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,cnt,temp,num;
    cin>>test;
    while(test--){
        cnt = 0;
        temp = 5;
        while(temp--){
            cin>>num;
            if(num==1)
                cnt++;
        }
        if(cnt==0)
            cout<<"Beginner\n";
        else if(cnt==1)
            cout<<"Junior Developer\n";
        else if(cnt==2)
            cout<<"Middle Developer\n";
        else if(cnt==3)
            cout<<"Senior Developer\n";
        else if(cnt==4)
            cout<<"Hacker\n";
        else if(cnt==5)
            cout<<"Jeff Dean\n";
    }
    return 0;
}
