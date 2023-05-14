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
        int a[n + 1];
        int d[n + 1]; // d[i] representa a distancia da posicao i ao numero i
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            d[a[i]] = abs(a[i] - i);
        }

        int mdc = d[1];
        for (int i = 1; i <= n; i++)
        {
            mdc = __gcd(mdc, d[i]);
        }
        cout << mdc << endl;
    }

    return 0;
}