#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;

int main()
{

    unsigned int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned int n;
        cpp_int prod;
        scanf("%d",&n);
        prod=1;
        for(int i=n;i>=1;i--)
        {
            prod*=i;

        }
        cout<<prod<<"\n";
    }
    return 0;
}

