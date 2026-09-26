#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n;
    vector<int> depth(n, 0);
    vector<int> p(n, -1);
    for (int v = 1; v < n; ++v) {
        cin >> p[v];
        --p[v];
        depth[v] = depth[p[v]] + 1;
    }
    cin >> m;
    if (m == 0) {
        cout << "0";
        return;
    }
    vector<int> pt(m);
    bool root = false;
    for (int i = 0; i < m; ++i) {
        cin >> pt[i];
        --pt[i];
        if (pt[i] == 0) {
            root = true;
        }
    }
    cout << m - 1 << ' ';
    int to_skip;
    if (root == true) {
        to_skip = 0;
    } else {
        int min_depth = 1e9;
        int closest = -1;
        for (int v : pt) {
            if (min_depth > depth[v]) {
                min_depth = depth[v];
                closest = v;
            }
        }
        to_skip = closest;
    }
 
    for (int v : pt) {
        if (v != to_skip) {
            cout << v + 1 << ' ';
        }
    }
 
}
 
int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        solve();
        cout << '
';
    }
 
    return 0;
}