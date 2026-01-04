#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int arr[t][200001];
    

    for(int i=0; i<t; i++)
    {
        int x;
        cin>>x;

        for(int l=0; l<x; l++)
        {
            if(x%2 == 0)
            {
                for(int j = 0; j<x/2-1; j++)
                {
                    arr[i][j] = j+2;
                }
                arr[i][x/2-1] = x;
                for(int k = x/2; k<x-1; k++)
                {
                    arr[i][k] = k+1;
                }
                arr[i][x-1] = 1;
            }

            else if(x%2==1)
            {
                for(int j = 0; j<x/2; j++)
                {
                    arr[i][j] = j+2;
                }
                arr[i][x/2] = x;
                for(int k = x/2+1; k<x-1; k++)
                {
                    arr[i][k] = k+1;
                }
                arr[i][x-1] = 1;
                
            }
            arr[i][x] = -1;
        }

        
    }
    for(int i = 0; i<t; i++)
    {
        for(int j=0; arr[i][j]!=-1; j++)
        {
            if(j!=0)
            {
                cout<<" ";
            }
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    
    
    return 0;

}