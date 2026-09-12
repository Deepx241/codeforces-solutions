#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){//obs out fron string
        int n,k;
        cin>>n>>k;
        if(k<n||k>2*n-1){
            cout<<-1<<'
';
            continue;
        }
        int r=k-n+1;
        int d=n-r;
        vector<int> a((size_t)n*n,0);
        auto idx=[&](int i,int j){return i*n+j;};
        for(int i=0;i<d;i++) a[idx(i,i)]=i+1;
        int v=d+1;
        int cnt=v+1;
        a[idx(d+r-1,d)]=v;
        for(int bi=0;bi<=r-2;bi++)
        {
            a[idx(d+bi,d)]=cnt++;
        }
        for(int bj=1;bj<=r-1;bj++) a[idx(d+r-1,d+bj)]=cnt++;
        for(int bi=0;bi<=r-2;bi++)
            for(int bj=1;bj<=r-1;bj++)
                a[idx(d+bi,d+bj)]=cnt++;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(a[idx(i,j)]==0) a[idx(i,j)]=cnt++;
        string out;
        out.reserve((size_t)n*n*7);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                out+=to_string(a[idx(i,j)]);
                out+=(j+1<n)?' ':'
';
            }
        }
        cout<<out;//main one
    }
}