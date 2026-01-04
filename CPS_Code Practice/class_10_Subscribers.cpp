#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int gotPower = 1;

    for (int i = 0; i < x; i++)
    {
        if(x/10 != 0)
        {
            x/10;
            gotPower++;
        }
    }
    
}