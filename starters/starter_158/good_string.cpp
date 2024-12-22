#include <bits/stdc++.h>
using namespace std;
#define ln endl
 #define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
   FASTIO;
    string st;
    int n;
    cin >> n;
    cin >> st;
    int count1 = 0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(st[i]=='a'&&st[i+1]=='b'){
            count1++;
            
        }
        else if(st[i]=='b'&&st[i+1]=='a'){
            count2++;
        }
    }
    if(count1==count2){
        cout<<n<<ln;
    }else{
         char first = st[0];
         char last = st[n-1];
         int ans1 = n,ans2=n;
        for(int i=0;i<n;i++){
            if(st[i]!=first){
                break;
            }
            ans1--;
        }
        for(int i=n-1;i>=0;i--){
            if(st[i]!=last){
                break;
            }
            ans2--;
        }
        cout<<max(ans1,ans2)<<ln;
    }
   return 0;
}