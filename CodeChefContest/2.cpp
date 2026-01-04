#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int score(vector<int> arr, int length)
{
    int scoreSum = 0;
    int a = 0;
    int b = 1;
    int reduce;


    while(length>1)
    {
        scoreSum = scoreSum + min(arr[a], arr[b]);
        reduce = max(arr[a], arr[b]);
        if(reduce == arr[a])
        {
            arr.erase(arr.begin()+a);
        }
        else if(reduce == arr[b])
        {
            arr.erase(arr.begin()+b);
        }
        length --;
    }
    cout<<scoreSum<<endl;

    
}

int main()
{
    int t;
    cin>>t;
    int i;

    for (i = 0; i < t; i++)
    {
        int count = 0;

        int length, q;

        cin>>length>>q;

        vector<int> arr;

        for (int j = 0; j < length; j++)
        {
            int n;
            cin>>n;
            arr.push_back(n); 
        }

        

        for (int z = 0; z < q; z++)
        {
            int where, what;
            cin>>where>>what;

            arr[where-1] = what;

            score(arr, length);
        }
        
        
    }

    

    return 0;
    
}