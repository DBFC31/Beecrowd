#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int d[201];
    for (int i = 1; i < 201; i++)
    {
        d[i] = i;
    }

    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            a[i] = d[i];
        }
        int sum = (n * (n + 1)) / 2;
        if (sum % n == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            continue;
        }
        else
        {
            int remaining = n - sum % n; // if n = 8 and sum = 36: remaining = 4
            a[remaining] *= 2;
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            continue;
        }
    }

    return 0;
}