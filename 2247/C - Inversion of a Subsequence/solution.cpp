#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int x = 0, y = 0, c = 0;
    for (int &i : a) {
        cin >> i;
        x += i;
    }
    for (int &i : b) {
        cin >> i;
        y += i;
    }
    if (a == b) {
        cout << 0 << '
';
        return;
    }
    if (x == 0 || y == n) {
        cout << -1 << '
';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && a[i] == 1)
            c++;
    }
    if (c % 2)
        cout << 1 << '
';
    else
        cout << 2 << '
';
}
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
}