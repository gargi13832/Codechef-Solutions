#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,a,b,max=0,sum=0;
    for(i=0;i<test;i++)
    {
        cin>>a>>b;
        if(a>=b)
            max=a;
        else
            max=b;
        sum=a+b;
        cout<<max<<" "<<sum<<endl;
    }
    return 0;
}
