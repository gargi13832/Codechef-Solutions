#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    int year;
    while(test--){
        cin>>year;
        if(year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019)
            cout<<"HOSTED\n";
        else
            cout<<"NOT HOSTED\n";
    }
    return 0;
}
