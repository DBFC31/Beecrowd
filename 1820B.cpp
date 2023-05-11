#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s2 = s + s;
        int m = 0;
        int c = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '1')
                c++;
            if (c > m)
                m = c;
            if (s2[i] == '0')
                c = 0;
        }
        if (m == 0)
        {
            cout << '0' << endl;
            continue;
        }
        long long int a;
        if (m % 2 == 1)
        {
            long long int b = (m + 1) / 2;
            a = b * b;
        }
        else
        {
            long long int b = m / 2;
            a = b * (b + 1);
        }
        if (m == s2.length())
            a -= s.length();
        cout << a << endl;
    }

    return 0;
}