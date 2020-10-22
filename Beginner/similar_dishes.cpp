#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int cnt=0;
        string a,b,c,d;
        string e,f,g,h;
        cin>>a>>b>>c>>d;
        cin>>e>>f>>g>>h;
        if(a==e || a==f || a==g || a==h)
            cnt++;
        if(b==e || b==f || b==g || b==h)
            cnt++;
        if(c==e || c==f || c==g || c==h)
            cnt++;
        if(d==e || d==f || d==g || d==h)
            cnt++;
        if(cnt>=2)
            cout<<"similar\n";
        else
            cout<<"dissimilar\n";
    }
    return 0;
}
