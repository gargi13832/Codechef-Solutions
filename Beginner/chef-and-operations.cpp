#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,a,b;
    for(i=0;i<test;i++)
    {
        cin>>a>>b;
        if(a>b)
        cout<<">\n";
        if(a<b)
        cout<<"<\n";
        if(a==b)
        cout<<"=\n";
    }
    return 0;
}

