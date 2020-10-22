#include <iostream>
#include<math.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b;
    cin>>a>>b;
    ll diff=0;
    diff = a - b ;
    if(diff%10!=9)
    cout<<diff+1<<endl;
    else
    cout<<diff-1<<endl;
    return 0;
}
