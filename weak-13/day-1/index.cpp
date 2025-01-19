#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++){
         int x;
         cin>>x;
         v.push_back(x);
      }
       map<char,int>mp;
       for(int i=0;i<26;i++){
         mp[i+'a']=0;
       }
      for(int i=0;i<n;i++){
          int value = v[i];
          for(auto vl:mp){
              char k = vl.first;
              int sc = vl.second;
              if(sc==value){
                 cout<<k;
                  mp[k]++;
                  break;
              }
          }
      }
      
        
       cout<<endl;
    }

    return 0;
}