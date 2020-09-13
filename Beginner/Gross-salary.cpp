#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    float HRA, DA;

    while(test--){
        float basic_sal,total;
        cin>>basic_sal;
        if(basic_sal<1500){
            HRA = 0.1*basic_sal;
            DA = basic_sal-HRA;
        }
        else if(basic_sal>=1500){
            HRA = 500;
            DA = 0.98*basic_sal;
        }
        total = (basic_sal) + HRA + DA;
        //cout<<HRA<<" "<<DA<<endl;
        cout<<fixed << setprecision(2)<<total<<endl;
    }

    return 0;
}
