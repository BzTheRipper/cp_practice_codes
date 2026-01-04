#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t, doors, sec;
    cin>>t;
    
    int count = 0;
    for(int i=0; i<t; i++)
    {
        int buttonPressed = 0;
        cin>>doors>>sec;

        string dec = "YES";

        for(int j=0; j<doors; j++)
        {
            int x;
            cin>>x;

            if(sec<=0 && x==1)
            {
                
                dec = "NO";
                break;
            }

            if(x==1)
            {
                buttonPressed = 1;
            }

            if(buttonPressed == 1)
            {
                sec--;
            }

            
        }

        cout<<dec<<"  "<<i<<endl;
 
    }

}
