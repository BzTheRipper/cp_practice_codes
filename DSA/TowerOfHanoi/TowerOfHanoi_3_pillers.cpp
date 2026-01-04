#include<iostream>

using namespace std;

void tower_of_hanoi_3(int n, int source, int helper, int dest)
{
    if(n==1)
    {
        cout<<"("<<source<<","<<dest<<")"<<endl;
        return;
    }

    tower_of_hanoi_3(n-1, source, dest, helper);
    cout<<"("<<source<<","<<dest<<")"<<endl; 
    tower_of_hanoi_3(n-1, helper, source, dest);

    
}

int main()
{
    tower_of_hanoi_3(3, 1, 2, 3);
}