#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> freq(n + 2, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) {
                freq[x]++;
            }
        }
        int mex = 0;
        while (freq[mex] > 0) {
            mex++;
        }
        int answer = min(mex, k - 1);
        cout << answer << '
';
    }
 
    return 0;
}