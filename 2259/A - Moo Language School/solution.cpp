#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    int ans = 0;
 
    for (int i = 0; i < n; i += k)
    {
        bool allOne = true;
 
        for (int j = i; j < i + k; j++)
        {
            if (s[j] == '0')
            {
                allOne = false;
                break;
            }
        }
 
        if (allOne)
            ans++;
    }
 
    cout << ans << '
';
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
        solve();
}