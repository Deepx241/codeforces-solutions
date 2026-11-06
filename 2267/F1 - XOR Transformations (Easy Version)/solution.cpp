#include <bits/stdc++.h>
using namespace std;
const int N = 2048;
int n, m, tim, a[N], cnt[N], ans[N];
void transform()
{
	vector <int> v;
	for(int i = 1; i <= n; i ++)
	{
		for(int j = i + 1; j <= n; j ++)
		{
			v.push_back(a[i] ^ a[j]);
		}
	}
	sort(v.begin(), v.end());
	for(int i = 1; i <= n; i ++) a[i] = v[i - 1];
}
void solve()
{
	cin >> n >> m;
	
	for(int i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int lim = 0;
	
	ans[lim] = a[n] - a[1];
		
	while(a[n] != 0)
	{
		lim ++, transform();
		ans[lim] = a[n] - a[1];
	}
	for(int i = 1; i <= m; i ++)
	{
		int x;
		cin >> x;
		
		if(x >= lim) cout << ans[lim] << '
';
		else cout << ans[x] << '
';
	}
}
signed main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	
	int test = 0;
	if(!test) cin >> test;
	while(test --) solve();
}