#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(auto &it : v) cin >> it;
 
    ll y = (2 * v[0] - v[1]) / (n + 1);
    ll x = v[1] - v[0] + y;
 
    if(y < 0 || x < 0) {
        cout << "NO" << endl;
        return;
    }
 
    for(int i = 0; i < n; i++) {
        v[i] -= x * (i + 1);
        v[i] -= y * (n - i);
    }
 
    for(int i = 0; i < n; i++) {
        if(v[i] != 0) {
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) solve();
}