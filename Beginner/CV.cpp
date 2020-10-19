#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,i,cnt = 0;
        cin>>n;
        string str;
        cin>>str;
        for(i=0;i<n;i++){
            if((str[i]=='b'||str[i]=='c'||str[i]=='d'||str[i]=='f'||str[i]=='g'||str[i]=='h'||str[i]=='j'||
            str[i]=='k'||str[i]=='l'||str[i]=='m'||str[i]=='n'||str[i]=='p'||str[i]=='q'||str[i]=='r'||str[i]=='s'||str[i]=='t'||str[i]=='v'||
            str[i]=='w'||str[i]=='x'||str[i]=='y'||str[i]=='z') && (str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u'))
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
