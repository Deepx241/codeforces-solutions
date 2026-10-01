#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int zero = 0, one = 0;
        for(char c : s)
            if(c == '0')
                zero++;
        if(s[0] == '1')
        {
            cout << zero << '
';
            continue;
        }
        int ans = n;
        for(char c : s)
        {
            if(c == '1')
                one++;
            else
                zero--;
 
            ans = min(ans, one + zero);
        }
        cout << ans << '
';
    }
}