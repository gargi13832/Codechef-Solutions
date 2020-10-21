#include<bits/stdc++.h>

using namespace std;
typedef long long int  ll;

ll fib_recur(ll n){
    if(n<=2)
        return 1;

    return fib_recur(n-1) + fib_recur(n-2);
}

ll dp[1000];

ll fib_dynamic(ll n){
    if(dp[n]!=0)
        return dp[n];

    if(n<=2){
        dp[n] = 1;
    }
    else{
        dp[n] = fib_dynamic(n-1) + fib_dynamic(n-2);
    }

    return dp[n];
}
