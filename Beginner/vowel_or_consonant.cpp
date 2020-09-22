#include<iostream>
using namespace std;
int main()
{
    char C,vowels[5]={'A','E','I','O','U'};
    int n=0;
    cin>>C;
    for(int i=0;i<5;i++)
    {
        if(C==vowels[i])
        {
            cout<<"Vowel";
            break;
        }
        else n++;
    }
    if(n==5)
    cout<<"Consonant";
}
