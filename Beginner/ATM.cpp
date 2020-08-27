#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    float balance,wl;
    cin>>wl>>balance;
    if((int)wl%5==0)
    {
        if((wl+0.50)<=balance)
        {
            printf("%.2f\n",balance-0.50-wl);
        }
        else
        {
            printf("%.2f\n",balance);
        }
    }
    else
        printf("%.2f\n",balance);
    return 0;
}
