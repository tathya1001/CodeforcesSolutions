#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 2;
        for (int i = 1; i < n; i++)
            cout << 3;
        cout << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
