#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        int a, b;
        cin >> a >> b;
        
        if(__builtin_clz(a) > __builtin_clz(b)) cout << "-1
";
        else if(a == b) cout << "0
";
        else{
            vector<int> val;
            for(int i = 0; i < 31; i++){
                int x = (1 << i);
                if(x <= a && (a & x) == 0) a += x, val.push_back(x);
            }
            for(int i = 0; i < 31; i++){
                int x = (1 << i);
                if(x <= a && (b & x) == 0) val.push_back(x);
            }
            cout << val.size() << '
';
            for(auto z : val) cout << z << ' ';
            cout << '
';
        }
    }
}