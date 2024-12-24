#include <bits/stdc++.h>
using namespace std;
#define testCase while(tt--)
#define ll long long int
#define loop(i, start, end) for(int i = (start); i < (end); i++)
#define nl '\n'
int main() 
{
    int tt;
    cin>>tt;
    testCase{
       int n;
       cin>>n;
       vector<ll>a(n),b(n);
       loop(i,0,n){
         cin>>a[i];
       }
       loop(i,0,n){
         cin>>b[i];
       }
       int count=0,idx=-1;
        loop(i,0,n){
         if(min(a[i],b[i])!=b[i]){
           count++;
           idx = i;
         }
       }
       if(count==0||count>1){
         ll ans = 0;
           loop(i,0,n){
           ans+=min(a[i],b[i]);
       }
       cout<<ans<<nl;
       }else{
          ll ans = 0,res=0;
          loop(i,0,n){
            ans+=b[i];
          }
          res = ans;
          loop(i,0,n){
             if(i!=idx){
                ll curneValue = res-b[i]-b[idx]+a[i]+a[idx];
                ans=min(ans,curneValue);
             }
          }
          cout<<ans<<nl;
          
       }
    }
    return 0;
}