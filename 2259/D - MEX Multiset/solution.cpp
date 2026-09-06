#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<int> a(n);
        for(auto &x:a) scanf("%d",&x);
 
        vector<vector<int>> pos(n+2);
        for(int i=0;i<n;i++)
            if(a[i]<=n) pos[a[i]].push_back(i);
 
        vector<int> c(n+2);
        for(int v=0;v<=n+1;v++) c[v]=pos[v].size();
 
        int m=0;
        while(m<=n && c[m]>0) m++;
 
        int k=0;
        while(k<=m && c[k]>=3) k++;
 
        string s(n,'C');
        bool ok=true;
 
        if(c[k]==0){
            for(int v=0;v<m;v++){
                if(pos[v].size()>=1) s[pos[v][0]]='A';
                if(pos[v].size()>=2) s[pos[v][1]]='B';
            }
        } else if(c[k]==2){
            int T=k;
            while(T<=m && c[T]>=2) T++;
            for(int v=0;v<T;v++){
                if(pos[v].size()>=1) s[pos[v][0]]='A';
                if(pos[v].size()>=2) s[pos[v][1]]='B';
            }
        } else {
            if(k==0) ok=false;
            else {
                for(int v=0;v<k;v++){
                    if(pos[v].size()>=1) s[pos[v][0]]='A';
                    if(pos[v].size()>=2) s[pos[v][1]]='B';
                }
                s[pos[k][0]]='A';
            }
        }
 
        if(!ok) printf("NO
");
        else printf("YES
%s
", s.c_str());
    }
}