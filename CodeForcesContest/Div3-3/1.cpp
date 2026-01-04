#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t, x, min;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        
        min = x%10;

        while(x>0)
        {
            
            if(x%10 < min)
            {
                min = x%10;
            }
            x = x / 10;
        }

        cout<<min<<endl;


    }
}