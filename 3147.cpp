#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, e, a, o, u, x;
    cin >> h >> e >> a >> o >> u >> x;
    int B = h + e + a + x + 1;
    int M = o + u;

    if (B > M)
    {
        cout << "Middle-earth is safe." << endl;
    }
    else
    {
        cout << "Sauron has returned." << endl;
    }

    return 0;
}