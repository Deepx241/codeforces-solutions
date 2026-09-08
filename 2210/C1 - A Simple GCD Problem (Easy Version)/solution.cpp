#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n), w(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> w[i];
        vector<long long> g(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            g[i] = __gcd(v[i], v[i + 1]);
        }
 
        int cnt = 0;
        if (g[0] < v[0])
            cnt++;
        if (g[n - 2] < v[n - 1])
            cnt++;
        for (int i = 1; i < n - 1; i++)
        {
            long long x = __gcd(g[i - 1], g[i]);
            long long l = (g[i - 1] / x) * g[i];
            if (l < v[i])
                cnt++;
        }
        cout << cnt << '
';
    }
}
 
int main()
{
    solve();
}