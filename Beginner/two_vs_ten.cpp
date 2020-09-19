#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
    ll test;
    cin>>test;
    ll num;
    while(test--)
    {
        cin>>num;
        if(num%10==0)
            cout<<0<<endl;
        else if(num%5==0)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
