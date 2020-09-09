#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,flag=0;
        cin>>n;
        ll i;
            for(i=2;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
    }
    return 0;
}
