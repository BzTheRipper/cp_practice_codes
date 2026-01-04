#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    

    for (int i = 0; i < t; i++)
    {
        int redFlag=0, onn=0, off=0, redCOntrol=0;
        int x;
        cin>>x;

        for (int j = 0; j < x; j++)
        {
            int light;
            cin>>light;
            if(light==1)
            {
                onn++;
            }
            else
            {
                off++;
            }
            if(light == 0)
            {
                redCOntrol++;
                if(redCOntrol>2 || (redCOntrol>=2 && (j+1==x)))
                {
                    redFlag = 1;
                    break;
                }
            }
            if(light == 1)
            {
                redCOntrol=0;
            }

            
        }
        if(x%2==1 && off>onn)
        {
            redFlag=1;
        }

        if(redFlag==1)
        {
            cout<<"NO"<<endl;
            
        }
        else if(redFlag == 0)
        {
            cout<<"YES"<<endl;
            
        }
        
    }
    
}