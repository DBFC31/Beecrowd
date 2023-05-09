#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int X[n];
        int to = 0; // total de virus
        int k = 0;  // total de virus que seriam matados
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            X[i] = a;
            to += a;
        }
        k = to;

        int exp = 1; // número de vírus mortos por dedetização = X[i] * exp
        sort(X, X + n);
        for (int i = 0; i < n; i++)
        {
            if (X[i] == -1)
                continue;
            if ((to - X[i]) * (exp + 1) > k) // se adquirir a experiencia valer mais a pena que detetizar
            {
                exp++;
                to -= X[i];
                k = to * exp;
                X[i] = -1;
            }
        }
        cout << k << endl;
        t -= 1;
    }

    return 0;
}