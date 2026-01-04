#include<iostream>

using namespace std;

int maxIndex(int arr[], int low, int high)
{
    int max = arr[low];
    int mxind;

    for(int i=low; i<high; i++)
    {
        if(max<=arr[i])
        {
            max = arr[i];
            mxind = i;
        }
    }
    return mxind;
}

void treeSolver(int arr[], int low, int high, int n)
{
    if(low>=high) return;

    else
    {
        int mxind = maxIndex(arr, low, high);
        arr[mxind] = n;
        n++;
        treeSolver(arr, low, mxind, n);
        treeSolver(arr, mxind+1, high, n);
    }
    
}

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }

        treeSolver(arr, 0, n, 0);
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    
}