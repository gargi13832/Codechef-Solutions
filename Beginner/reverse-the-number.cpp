#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int no,temp=0,k;
    while (test--)
    {
        cin>>no;
        while (no != 0)
        {
            k=no%10;
            temp=(temp*10)+ k;
            no=no/10;
        }
        cout << temp << endl;
        temp=0;
    }
    return 0;
}
