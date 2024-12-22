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
            cin>>n;
            int k = n-2;
            for(int i=0; i<n; i++) {
                int x;
                cin>>x;
                mp[x]++;
            }
            int vector<int>v;
            for(int i=1;i<=k; i++) {
                 if(k%i==0){
                     v.push_back(i);
                 }
            }
            sort(v.begin(), v.end());
            int j = v.size()-1;
            int id = 0, id1 = 0;
            for(int i=0; i<v.size(); i++,j--) {
                  if(mp[v[i]]&& mp[v[j]]) {
                        if(k==v[i]*v[j]) {
                            id = v[i];
                            id1=v[j];
                            break;
                        }
                  }
            }
            cout<<id<<" "<<id1<<"\n";
        }
   return 0;
}