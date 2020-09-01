#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int n,i;
    int last,first;
    for(i=0;i<test;i++)
    {
        cin>>n;
        last=n%10;
        while(n!=0)
        {
            first=n%10;
            n=n/10;
        }
        cout<<first+last<<endl;
    }
    return 0;
}

