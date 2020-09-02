#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,n,four=0;
    for(i=0;i<test;i++)
    {
        cin>>n;
        while(n!=0)
        {
            if(n%10==4)
                four++;
            n=n/10;
        }
        cout<<four<<endl;
        four=0;
    }
    return 0;
}
