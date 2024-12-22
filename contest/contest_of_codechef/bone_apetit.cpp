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
     int n,m;
     cin >> n >> m;
     int x,y;
     cin>>x>>y;
     cout<<(x*n)+(y*m)<<endl;
    return 0;
}