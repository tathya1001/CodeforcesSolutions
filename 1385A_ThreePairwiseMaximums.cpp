#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<long long int> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if (v[2] == v[1])
    {
        cout << "YES" << endl;
        cout << v[2] << " " << v[0] << " " << v[0] << endl;
    }
    else
    {
        cout << "NO" << endl;
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
