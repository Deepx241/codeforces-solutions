#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        vector<int> v(x);
        for(int i=0;i<x;i++)
            cin >> v[i];
        int cnt=0;
        long long sum=0;
        int left=0;
        for(int i=0;i<x;i++)
        {
            sum += v[i];
            if(sum >= y && sum <= z)
            {
                cnt++;
                sum=0;
                left=i+1;
            }
            else if(sum > z)
            {
                while(left <= i && sum > z)
                {
                    sum -= v[left];
                    left++;
                }
                if(sum >= y && sum <= z)
                {
                    cnt++;
                    sum=0;
                    left=i+1;
                }
            }
        }
        cout << cnt << "
";
    }
}
 
int main()
{
    solve();
}