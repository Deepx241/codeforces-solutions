#include<bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int x, y;
    cin >> x >> y;
    int s = x + y;
    for(int d = (1 << 30); d >= 1; d >>= 1)
        if((s & d) != 0 && x >= d)
            x -= d;
    cout << s << " " << x << endl;    
}
 
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();
}