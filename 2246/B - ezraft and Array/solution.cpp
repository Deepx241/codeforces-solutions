#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 2) {
            cout << -1 << "
";
            continue;
        }
        if (n == 1) {
            cout << 1 << "
";
            continue;
        }
        vector<long long> a = {1, 2, 3};
        long long sum = 6;
        while ((int)a.size() < n) {
            a.push_back(sum);
            sum *= 2;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 == n ? '
' : ' ');
        }
    }
    return 0;
}