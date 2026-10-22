#include <bits/stdc++.h>
using namespace std;
 
bool check(long long mid, vector<pair<long long, long long>> &A) {
    long long n = 1;
    long long ex = 0;
    long long p = mid;
    for (long long i = 0; i < A.size(); i++) {
        if (p-A[i].first+(63-__builtin_clzll(n))>60) {return false;}
        n<<=(p-A[i].first-1);
        if (!A[i].first) {ex+=A[i].second; break;}
        if (A[i].second>n) {ex+=A[i].second-n;}
        else {n=(n<<1)-A[i].second;}
        p=A[i].first;
    }
    return (ex>=n);
}
 
void solve() {
    long long N; cin >> N;
    vector<pair<long long, long long>> A;
    long long lo = 0;
    long long hi = 1000000100;
    for (long long i = 0; i < N; i++) {
        long long a, b; cin >> a >> b;
        A.push_back({a,b});
        lo=max(lo,a);
    }
    sort(A.rbegin(),A.rend());
    if (A.back().first) {A.push_back({0,0});}
    while (lo<hi) {
        long long mid = (lo+hi+1)/2;
        if (check(mid,A)) {lo=mid;}
        else {hi=mid-1;}
    }
    cout << lo << endl;
}
 
int main() {
    long long T; cin >> T;
    while (T--) {solve();}
}