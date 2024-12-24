#include <bits/stdc++.h>
using namespace std;
#define ln endl
 #define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 void solve(){
     int n;
    cin >> n;
     
    int count1 = 0,count2=0;
    for(int i=0;i<n;i++)
    {
        char x;
        cin >> x;
        if(i==n-1 && x=='1'){
            count1++;
        }
        if(i==0 && x=='0'){
           count2++;
        }
        
    }
    if(count1 && count2){
        cout<<2*n-1<<endl;
    }else{
        cout<<2*n-2 <<endl;
    }
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