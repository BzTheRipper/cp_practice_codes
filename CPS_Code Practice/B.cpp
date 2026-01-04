#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int T;
    cin>>T;
    char S[16];
    int flag = 0;

    for (int j = 1; j <= 16; j++)
    {
        char buffers;
        S[j-1] = getchar();
        buffers = getchar();

        if(int(S[j-1]) == 49 && j>=2 && j%2 == 0)
        {
            
            int flag = 1;
            S[j-1];
        }
        
    }

    if(flag == 1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    
        
}