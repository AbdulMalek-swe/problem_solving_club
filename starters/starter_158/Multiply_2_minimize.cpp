#include <bits/stdc++.h>
using namespace std;
#define testCase while(tt--)
#define ll long long int
#define loop(i, start, end) for(int i = (start); i < (end); i++)
// #define nl '\n'
int main() 
{
    int tt;
    cin>>tt;
    testCase{
       int n;
       cin>>n;
       vector<ll>v(n);
           loop(i, 0, n) {
         cin>>v[i];
       }
       map<ll,ll>mp;
       vector<int>ans;
       loop(i,0,n){
        
         mp[v[i]]++;
         if(mp[v[i]]==2){
            ll value = v[i];
            // cout<<value<<endl;
            while(true){
              int total = mp[value];
              cout<<total<<endl;
              if(mp[value]<2){
                // mp.erase(value);
                break;
              }
               mp.erase(value);
               for(int i=0;i<total/2;i++){
                 mp[value*2]++;
               }
              value =2*value;
            }
         }
         ans.push_back(mp.size());
       }
       for(auto vl:ans){
         cout<<vl<<" ";
       }
      // cout<<nl;
    }
    return 0;
}