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
        int n,k;
        cin >> n >> k;
        vector<int> arr;
        for(int i=1;i<n;i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        // sort(arr.begin(), arr.end(), greater<int>());
         int mn = INT_MAX;
        //  int ind = -1;
        for (int i = 0; i < n; i++)
        {
            // if(arr[i]<k){
            //     ind = i;
            //     break;
            // }
             mn = min(mn, arr[i]%k);
        }
        cout<<mn<<ln;
        
    }
    return 0;
}