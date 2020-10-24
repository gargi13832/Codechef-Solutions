#include <iostream>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    ll n,i=0,j=0,diff=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll min=1000000000;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                diff=arr[i]-arr[j];
                if(diff<0)
                    diff= (-1)*diff;
                if(diff<min)
                min=diff;
            }
        }
        cout<<min<<endl;
    }
}
