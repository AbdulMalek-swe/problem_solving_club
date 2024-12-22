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
        int n,m;
     cin >> n >> m;
     vector<int>a,b;
     map<int,int>mp;
     for(int i=1;i<=n;i++)
     {
         int x;
         cin >> x;
          mp[i]=x;
     }
     int count=0;
     for(int i=0;i<m;i++)
     {
         int x;
         cin >> x;
         if(mp[x]!=0){
          mp[x]--;
          count++;
         }

        //  b.push_back(x);
     }
     cout<<count-m<<endl; 
    }
    
    
    return 0;
}