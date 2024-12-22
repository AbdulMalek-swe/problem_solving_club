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
    while (t--){
         int n,m;
         cin >> n >> m;
         string k;
         string s;
         cin >> k >> s;
         int r = m-1;
         int l = 0;
         while (n<r)
         {
             
             for(int i=0;i<m;i++){
                int first  = s[i]-'0';
                int second = k[i+l]-'0';
                int neVl = first+10;
                int mn = min(abs(neVl-second),abs(first-second));
                cout << abs(neVl-second) <<abs(first-second)<< " ";
             }
             l++;
             r++;

         }
         
    }
    return 0;
}