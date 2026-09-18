#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> vec(n); 
        for (auto &x: vec) cin >> x;
 
        sort(vec.begin(), vec.end());
        // Remove duplicates
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        n = vec.size();
        int best = 0;
        int current = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0 || vec[i] != vec[i-1]+1) {
                current = 0;
            }
            current++;
            best = max(best, current);
        }
        cout << best << "
";
    }
}