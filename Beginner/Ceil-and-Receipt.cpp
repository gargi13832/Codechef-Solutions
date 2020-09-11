#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test,n,remain,count=0;
	cin>>test;
	while(test--){
	    count = 0;
	    cin>>n;
	    while(n){
            if(n<=2048){
               remain = n%2;
               if(remain==1)
                    count++;
               n = n/2;
            }
            else{
                n = n-2048;
                count++;
            }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
