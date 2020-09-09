#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    char c;
    while(test--){
        cin>>c;
        switch(c){
            case 'B':
                cout<<"BattleShip\n";
                break;
            case 'b':
                cout<<"BattleShip\n";
                break;
            case 'C':
                cout<<"Cruiser\n";
                break;
            case 'c':
                cout<<"Cruiser\n";
                break;
            case 'D':
                cout<<"Destroyer\n";
                break;
            case 'd':
                cout<<"Destroyer\n";
                break;
            case 'F':
                cout<<"Frigate\n";
                break;
            case 'f':
                cout<<"Frigate\n";
                break;
        }
    }
    return 0;
}
