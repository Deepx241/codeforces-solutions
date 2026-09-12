#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, x, cnt = 0;
        cin >> n;
 
        for (int i = 0; i < n; i++) {
            cin >> x;
            cnt += x;
        }
        cout << (cnt >= (n + 1) / 2 ? "Bessie" : "Elsie") << '
';
    }
}