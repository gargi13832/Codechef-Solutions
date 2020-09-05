#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int A=0,B=0,C=0,t=0;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        int sum=A+B+C;
        if(sum==180)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
