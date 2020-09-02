#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     int i,a,b,c;
     for(i=0;i<t;i++)
     {
        cin>>a>>b>>c;
        if((a<b&&b<c)||(c<b&&b<a))
            cout<<b<<endl;
        else if((b<a&&a<c)||(c<a&&a<b))
            cout<<a<<endl;
        else if((a<c&&c<b)||(b<c&&c<a))
            cout<<c<<endl;
     }
     return 0;
}

