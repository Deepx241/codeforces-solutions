#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, r;
        cin >> x >> y >> r;
        for (int i = 0; i <= r; i++) {
            for (int j = 0; j <= r; j++) {
                if (i * i + j * j == r * r) {
                    cout << x + i << ' ' << y + j << '
';
                    goto done;
                }
            }
        }
        done:;
    }
}