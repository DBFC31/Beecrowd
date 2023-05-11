#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        int negatives = 0;
        bool hasZero = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                hasZero = true;
            else if (arr[i] < 0)
            {
                negatives++;
            }
        }
        long long int sum = 0;
        if (negatives % 2 == 0 || hasZero)
        {
            for (int i = 0; i < n; i++)
            {
                sum += abs(arr[i]);
            }
        }
        else
        {
            int minIndex = 0;
            for (int i = 0; i < n; i++)
            {
                if (abs(arr[i]) < abs(arr[minIndex]))
                    minIndex = i;
            }
            for (int i = 0; i < n; i++)
            {
                if (i == minIndex)
                {
                    sum -= abs(arr[i]);
                }
                else
                {
                    sum += abs(arr[i]);
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}