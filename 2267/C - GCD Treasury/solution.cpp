#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;
 
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        // Factorize x into its distinct prime factors
        vector<long long> primes;
        long long xx = x;
        for(long long p = 2; p * p <= xx; p++){
            if(xx % p == 0){
                primes.push_back(p);
                while(xx % p == 0){
                    xx /= p;
                }
            }
        }
        if(xx > 1){
            primes.push_back(xx);
        }
 
        long long best = 0;
        for(long long p : primes){
            long long sum = 0;
            for(int i = 0; i < n; i++){
                if(a[i] % p == 0){
                    sum += a[i];
                }
            }
            best = max(best, sum);
        }
 
        cout << best << "
";
    }
 
    return 0;
}