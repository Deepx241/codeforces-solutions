#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
 
    vector<int> p(n);
    for (int &a : p)
        cin >> a;
 
    int g = gcd(x, y);
 
    for (int i = 0; i < n; i++)
    {
        if (i % g != (p[i] - 1) % g)
        {
            cout << "NO
";
            return;
        }
    }
 
    cout << "YES
";
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
        solve();
}