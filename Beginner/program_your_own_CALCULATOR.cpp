#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    double a,b;
    cin>>a>>b;
    char op;
    cin>>op;
    if(op=='+'){
        cout<<a+b<<endl;
    }
    if(op=='-'){
        cout<<a-b<<endl;
    }
    if(op=='*'){
        cout<<a*b<<endl;
    }
    if(op=='/'){
        double div;
        div = a/b;
        cout<<std::fixed<<setprecision(6)<<div<<endl;
    }
    return 0;
}
