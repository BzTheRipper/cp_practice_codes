#include<iostream>
using namespace std;

int main()
{
    int t;

    cin>>t;

    for(int test=0; test<t; test++)
    {
        int n, h;
        cin>>n>>h;
        h--;
        int flag = 0;
        
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int find;
        for(int j=0; j<n; j++)
        {
            
            for(int trav =0; trav<n; trav++)
            {
                
                find = a[h]*2;
                if(a[trav]<=find && a[trav]> a[h])
                {
                    flag = 1;
                    h=a[trav];
                    
                }
                else if(a[trav] > find)
                {
                    flag=0;
                }

            }

            if(flag == 0)
            {
                break;
            }
        }

        if(flag = 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}