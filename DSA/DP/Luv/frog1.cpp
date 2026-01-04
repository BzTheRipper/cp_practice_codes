#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int h[N];
int frogFun(int n)
{

    if(n==0) return 0;

    int cost = INT_MAX;

    //way 1 
    cost = min(cost, frogFun(n-1) + abs(h[n]-h[n-1]));
    //way 2
    if(n>1)
    cost = min(cost, frogFun(n-2) + abs(h[n]-h[n-2]));
}


int main()
{

    int n;

    cin>>n;

    for(int i=0; i<n; )

    return 0;
}