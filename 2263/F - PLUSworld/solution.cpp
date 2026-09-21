#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
 
        int start = 1, remaining = 0;
        bool possible = true;
 
        for (int i = 1; i <= n; i++) {
            if (a[i] > b[i]) {
                possible = false;
            }
            if (a[i] < b[i]) {
                if (remaining == 0) {
                    start = i;
                }
                remaining++;
            }
        }
 
        if (!possible) {
            cout << -1 << '
';
            continue;
        }
 
        vector<int> operations;
        int position = start;
 
        while (remaining > 0) {
            if (a[position] < b[position]) {
                while (a[position] < b[position] &&
                       (a[position] >= position ||
                        a[a[position]] == b[a[position]])) {
                    a[position]++;
                    operations.push_back(1);
                }
 
                if (a[position] == b[position]) {
                    remaining--;
                }
            }
 
            if (remaining == 0 || a[position] == position) {
                break;
            }
 
            operations.push_back(2);
            position = a[position];
        }
 
        if (remaining > 0) {
            cout << -1 << '
';
            continue;
        }
 
        cout << operations.size() << ' ' << start << '
';
        for (int operation : operations) {
            cout << operation << ' ';
        }
        cout << '
';
    }
}