#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,n,sum=0;
    for(i=0;i<t;i++)
    {
        cin>>n;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
        sum=0;
    }
}
