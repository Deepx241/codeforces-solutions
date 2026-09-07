#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        for(int i = 0; i < x; i++)
            cin >> v[i];
 
        bool ok = true;
        for(int i = 0; i < x - 1; i++)
        {
            if(v[i] > v[i + 1])
            {
                ok = false;
                break;
            }
            int mn = min(v[i], v[i + 1]);
            v[i] -= mn;
            v[i + 1] -= mn;
        }
        if(ok)
            cout << "YES
";
        else
            cout << "NO
";
    }
}
 
int main()
{
    solve();
}