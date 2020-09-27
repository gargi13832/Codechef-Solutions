#include<iostream>
using namespace std;
int main()
{
    int n,digit=0;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        digit++;
    }
    if(digit<=3)
    cout<<digit<<endl;
    else
    cout<<"More than 3 digits"<<endl;
    return 0;
}
