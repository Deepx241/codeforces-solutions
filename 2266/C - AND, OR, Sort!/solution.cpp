#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int z = 0, on = 0;
        for(char c : s)
            if(c == '0')
                z++;
        if(s[0] == '1')
        {// all zeroes will be wrong in hs of 1 if first position is 1 ,bcz xor and and of 1 is 1 always with 1 or 0 
            cout <<z<< '
';
            continue;
        }
        int ans = n;//move through every boundary
        //i dont need 1s on left so find the1s on left and zeroes on right for every boundary  
        for(char c : s){
            if(c == '1')
                on++;
            else
                z--;//i dont need 0 on the left ot sort it 
            ans = min(ans, on+ z);
        }
        cout << ans << '
';
    }
}