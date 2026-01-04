#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int run = 0; run < t; run++)
    {
        int n, k;
        cin>>n>>k;
        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int count = 0;
        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            if(a[j] == 0)
            {
                flag++;
            }
            else if(a[j] == 1)
            {
                flag = 0;
            }

            if(flag == k)
            {
                count++;
                j++;
                flag = 0;
            }

        }

        cout<<count<<endl;
        

    }
}