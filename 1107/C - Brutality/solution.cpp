#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    string s;
    cin >> s;
    long long ans = 0;
    for (int i = 0; i < n; ) {
        int j = i;
        vector<long long> v;
        while (j < n && s[j] == s[i]) {
            v.push_back(a[j]);
            j++;
        }
        sort(v.rbegin(), v.rend());
        for (int x = 0; x < min(k, (int)v.size()); x++)
            ans += v[x];
 
        i = j;
    }
    cout << ans << '
';
}