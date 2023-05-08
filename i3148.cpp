#include <bits/stdc++.h>

using namespace std;

vector<int> X;

int kills(int exp, int i)
{
    int s = 0;
    for (int j = 0; j < X.size(); j++)
    {
        if (j == i)
            continue;
        if (X[j] == -1)
            continue;
        s += X[j];
    }
    return exp * s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            X.push_back(a);
        }

        int exp = 1; // número de vírus mortos por dedetização = X[i] * exp
        sort(X.begin(), X.end());
        for (int i = 0; i < n; i++)
        {
            if (kills(exp + 1, i) > kills(exp, -1)) // se adquirir a experiencia valer mais a pena que detetizar
            {
                exp++;
                X[i] = -1;
            }
        }
        cout << kills(exp, -1) << endl;
        X.clear();
    }

    return 0;
    // ideia: considerar a soma inicial e inves de recalcular, subtrair Xi e multiplicar por 2 (no primeiro caso)
}