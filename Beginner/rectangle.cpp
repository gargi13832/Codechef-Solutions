#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int a,b,c,d;
    while(test--)
    {
        cin>>a>>b>>c>>d;
        if((a==b && c==d)||(a==c && b==d)||(a==d && b==c))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
