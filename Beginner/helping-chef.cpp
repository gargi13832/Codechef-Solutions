#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,n;
    for(i=0;i<test;i++)
    {
        cin>>n;

        if(n<10)
        cout<<"What an obedient servant you are!"<<endl;
        else
        cout<<-1<<endl;
    }
}
