#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
 
void binary_search(vector<int> arr)
{
    int r;
    scanf("%d",&r); 
     int low = 0, high = arr.size() - 1;
      int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] <= r) {
         low=mid+1;
         ans = low;
        } 
        else high = mid - 1;
    }
    if(ans==-1){
      cout<<0<<ln;
    }else{
      cout<<ans<<ln;
    }
     
}
int main()
{
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        binary_search(v);
    }
    cout << ln;
}