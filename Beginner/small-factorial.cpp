#include <iostream>
using namespace std;
typedef long long int ll;
ll f[22];
void fact(ll n)
{
    f[0]=1;
    f[1]=1;
    for(ll i=2;i<=n;i++)
    {
        f[i]=f[i-1]*i;
    }
}
int main() {
    ll t,n;
    cin>>t;
    fact(21);
    while(t--)
    {
        cin>>n;
        cout<<f[n]<<endl;
    }
	// your code goes here
	return 0;
}
