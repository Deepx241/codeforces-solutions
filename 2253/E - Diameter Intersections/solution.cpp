#include<bits/stdc++.h>
 
using namespace std;
 
const int N = 1000043;
 
vector<int> g[N];
int n;
 
vector<int> get_dist(int x)
{
    vector<int> d(n, -1);
    d[x] = 0;
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        for(auto y : g[k])
            if(d[y] == -1)
            {
                d[y] = d[k] + 1;
                q.push(y);
            }   
    }
    return d;
}
 
void remove_edge(int x, int y)
{
    int idx = -1;
    for(int i = 0; i < g[x].size(); i++)
        if(g[x][i] == y)
            idx = i;
    g[x].erase(g[x].begin() + idx, g[x].begin() + idx + 1);    
} 
 
vector<int> process(int v)
{
    vector<int> d(n, -1), p(n, -1);
    queue<int> q;
    q.push(v);
    d[v] = 0;
    vector<int> visited;
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        visited.push_back(k);
        for(auto y : g[k])
            if(d[y] == -1)
            {
                d[y] = d[k] + 1;
                q.push(y);
                p[y] = k;
            }
    }
    int max_dist = *max_element(d.begin(), d.end());
    vector<bool> has_end(n, false);
    has_end[v] = true;
    for(auto x : visited)
        if(d[x] == max_dist)
        {
            int cur = x;
            while(!has_end[cur])
            {
                has_end[cur] = true;
                cur = p[cur];
            }
        }
 
    vector<int> res;
    for(auto x : visited)
    {
        if(!has_end[x]) continue;
        int good_children = 0;
        for(auto y : g[x])
            if(p[x] != y && has_end[y]) good_children++;
        if(good_children != 1) res.push_back(d[x]);
    }   
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}
 
void solve()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        g[i].clear();
    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
 
    auto dist0 = get_dist(0);
    int e1 = max_element(dist0.begin(), dist0.end()) - dist0.begin();
    auto dist1 = get_dist(e1);
    int e2 = max_element(dist1.begin(), dist1.end()) - dist1.begin();
    auto dist2 = get_dist(e2);
    int d = dist1[e2];
 
    int x = -1, y = -1;
    for(int i = 0; i < n; i++)
        if(dist1[i] + dist2[i] == d)
        {
            if(dist1[i] == dist2[i] - 1)
                x = i;
            else if(dist1[i] == dist2[i] + 1)
                y = i;
        }
 
    remove_edge(x, y);
    remove_edge(y, x);
    auto ans1 = process(x);
    auto ans2 = process(y);
 
    vector<bool> res(n + 1);
    for(auto x : ans1)
        for(auto y : ans2)
            res[x + y + 1] = true;
    int cnt = 0;
    for(auto x : res)
        if(x) cnt++;
    cout << cnt;
    for(int i = 0; i <= n; i++)
        if(res[i])
            cout << " " << i;
    cout << endl;
}
 
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
        solve();
}