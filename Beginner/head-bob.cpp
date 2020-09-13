#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int Y=0,N=0,I=0;
        int len;
        cin>>len;
        char c;
        while(len--){
            cin>>c;
            if(c=='Y')
                Y++;
            else if(c=='N')
                N++;
            else if(c=='I')
                I++;
        }
        if(I>0)
            cout<<"INDIAN\n";
        else if(Y>0)
            cout<<"NOT INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
    return 0;
}
