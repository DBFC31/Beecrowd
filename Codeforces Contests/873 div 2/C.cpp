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
        long long int a[n];
        long long int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        sort(a, a + n);
        long long int mult = 1;
        for (int i = 0; i < n; i++)
        {
            mult *= lower_bound(b, b + n, a[i]) - b - i;
            mult %= 1000000007;
        }

        cout << mult << endl;
    }

    return 0;
}