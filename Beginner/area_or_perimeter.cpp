#include<iostream>
using namespace std;
int main()
{
    int a,b,peri,area;
    cin>>a>>b;
    area=a*b;
    peri=2*(a+b);
    if(area>peri)
    cout<<"Area "<<endl<<area;
    if(area<peri)
    cout<<"Peri "<<endl<<peri;
    if(peri==area)
    cout<<"Eq"<<endl<<peri;
    return 0;
}
