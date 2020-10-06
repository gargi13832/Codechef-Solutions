#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,length,breadth,gcd,plots;
    cin>>test;
    while(test--){
        cin>>length>>breadth;
        gcd = __gcd(length,breadth);
        plots = (length*breadth)/(gcd*gcd);
        cout<<plots<<endl;
    }
    return 0;
}
