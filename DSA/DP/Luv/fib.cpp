#include<bits/stdc++.h>
using namespace std;

const long long int N = 1e5+10;

// 0 1 1 2 3 5 8 13 21 34 55
int dp[N];
int fibFun(long long int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n] !=-1) return dp[n];

    return dp[n] = fibFun(n-1) + fibFun(n-2);
}

int main()
{
    memset(dp, -1, sizeof(dp));
    long long int n;
    cin>>n;

    cout<<fibFun(n);

    return 0;
}