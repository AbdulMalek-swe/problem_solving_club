#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int l,r,x;
        cin >> l >> r >> x;
        set<int> ans;
        for(int i=l;i<=r;i++){
            int k = i^x;
            ans.insert(k);
        }
        int cnt = 0;
       
        for(auto it=ans.begin();it!=ans.end();it++){
            if(ans.count(cnt)) cnt++;
            else break;
        }
        cout<<cnt<<' ';
         
        cout<<endl;
    }

    return 0;
}