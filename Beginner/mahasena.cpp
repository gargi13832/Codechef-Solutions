#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int lucky=0, unlucky=0;
    while(test--)
    {
        int val;
        cin>>val;
        if(val%2==0)
            lucky++;
        else
            unlucky++;
    }
    if(lucky>unlucky)
        cout<<"READY FOR BATTLE"<<endl;
    else
        cout<<"NOT READY"<<endl;
    return 0;
}
