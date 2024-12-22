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
        int n;
        cin >> n;
        vector<long long int> a(n),arr(n+1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            
        }
        sort(a.begin(), a.end());
        arr[0] = a[0]-1;
        arr[1] = 1;
       for(int i=1;i<n;i++){
           arr[i+1] = abs(a[i]-arr[i]);
       }
        long long int ans = 0;
        for(int i=0;i<=n;i++){
            cout<<arr[i]<<endl; 
        }
         
         
    }

    return 0;
}