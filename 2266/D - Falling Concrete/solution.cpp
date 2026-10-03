#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N; cin >> N;
    set<int> s;
    for (int i = 1; i <= N; i++) {
        int a; cin >> a;
        s.insert(a-i);
    }
    int aa = 0;
    int tt = 0;
    int c = -1e9;
    for (auto x : s) {
        if (x!=c+1) {aa=max(aa,tt); tt=0;}
        tt++;
        c=x;
    }
    aa=max(aa,tt);
    cout << aa << endl;
}
 
int main() {
    int T; cin >> T;
    while (T--) {solve();}
}