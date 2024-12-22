#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
    while (t--) {
           map<int,int> mp;
           int n;
           cin >> n;
           int ans = 0;
           for(int i = 0; i < n; i++) {
             int x;
             cin >> x;
             mp[x]++;
              
           }
           for(auto &p : mp) {
              int cnt = p.second;
              ans += cnt / 2;
           }
            cout << ans << "\n";
            mp.clear();
           

        }
   return 0;
}