#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int hardness,tensility;
        float carbon;
        cin>>hardness>>carbon>>tensility;
        int a=0,b=0,c=0,score=0;
        string str = "";
        if(hardness>50)
            a=1;
        if(carbon<0.7)
            b=1;
        if(tensility>5600)
            c=1;

        int num = 100*a + 10*b + c;

        switch(num){
            case 111:
                score = 10;
                break;
            case 110:
                score = 9;
                break;
            case 11:
                score = 8;
                break;
            case 101:
                score = 7;
                break;
            case 100:
                score = 6;
                break;
            case 10:
                score = 6;
                break;
            case 1:
                score = 6;
                break;
            case 0:
                score = 5;
                break;
        }
        cout<<score<<endl;
    }
    return 0;
}
