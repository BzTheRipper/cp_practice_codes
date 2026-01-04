#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n, s;
        cin >> n >> s;
        int arr[n];
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        if (s == 1 || s == arr[n - 1])
        {
            count = arr[n - 1] - 1;
        }
        else if (s > arr[n - 1])
        {
            count = s - 1;
        }
        else
        {
            if (abs((s - arr[0])) <= abs((arr[n - 1] - s)))
            {

                count = abs((s - arr[0]) * 2 + arr[n - 1] - s);
            }
            else
            {
                count = (arr[n - 1] - s) * 2 + s - arr[0];
            }
        }

        cout << count << endl;
    }
}