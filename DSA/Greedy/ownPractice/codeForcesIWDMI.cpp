#include <iostream>

using namespace std;

void insertionSortAscending(int arr[], int size)
{
    int n = size;
    int flag = 1;
    for (int i = 0; i < n && flag; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        insertionSortAscending(arr, n);

        for (int j = 0; j < n; j++)
        {
            cout << " " << arr[j];
        }
        cout << endl;

        int flag = 1;
        for (int x = 0; x < n-1 && flag; x++)
        {
            if (k>(arr[x + 1] - arr[x]) || (arr[x + 1] == arr[x]))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            if(arr[x + 1] != arr[x])
            {
                k = k - (arr[x + 1] - arr[x]) + 1;
            }
            
            cout<<k<<endl;
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}