#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int i,n,num=0,no;
    for(i=0;i<test;i++)
    {
        cin>>n;
        no=n;
        while(n!=0)
        {
            num=num*10;
            num=num+(n%10);
            n=n/10;
            //cout<<n<<" "<<num<<" "<<endl<<endl;
        }
        if(num==no)
        cout<<"wins"<<endl;
        else
        cout<<"losses"<<endl;
        num=0;
    }
    return 0;
}
