#include<iostream>
using namespace std;
int main()
{
    int test,k;
    cin>>test>>k;
    int i,n,count=0;
    for(i=0;i<test;i++)
    {
        cin>>n;
        if(n%k==0)
            count++;
    }
    cout<<count;
}
