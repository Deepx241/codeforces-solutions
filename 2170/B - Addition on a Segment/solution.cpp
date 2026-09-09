#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long sum = 0;
        long long positive = 0;
 
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
 
            sum += x;
 
            if (x > 0)
                positive++;
        }
 
        long long extra = sum - positive;
        long long need = n - 1;
 
        cout << positive - max(0LL, need - extra) << '
';
    }
 
    return 0;
}