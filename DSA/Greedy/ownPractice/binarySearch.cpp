#include<iostream>
#include<algorithm>
using namespace std;

int retInd(int arr[], int n, int num)
{
    int index=-1;

    int l=0;
    int r=n-1;
    

    while(l<=r)
    {

        int mid = (l+r)/2;
        if(num>arr[mid])
        {
            l=mid+1;
        }
        else if(num<arr[mid])
        {
            r=mid-1;
        }
        else
        {
            index = mid;
            break;
        }
    }

    return index;
}


int main()
{
    int a[9] = {6, 4, 10, 14, -1, 0, 11, 45, 87};

    sort(a, a+sizeof(a)/4);

    for (int i = 0; i < sizeof(a)/4; i++)
    {
        cout<<a[i]<<" ";
    }

    int x = retInd(a, sizeof(a)/4, 87);
    cout<<"\n"<<x;
    
}