#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define ll long long int
 #define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 void solve(){
     int n;
    cin >> n;
    vector<int>v(n);
     for(int i=0;i<n;i++){
       cin>>v[i];
     }
     for(int i=1;i<n-1;i++){
       if(v[i-1]+v[i+1]==4){
           if(v[i]>2){
             v[i] = 4-v[i];
           }
       }
     } 
     for(int i=n-2;i>=1;i--){
       if(v[i-1]+v[i+1]==4){
           if(v[i]>2){
             v[i] = 4-v[i];
           }
       }
     }
     ll sum = 0;
      for(int i=0;i<n;i++){
        sum+=v[i];
     }
     cout<<sum<<endl;
 }
int main()
{
   FASTIO;
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
     
   return 0;
}