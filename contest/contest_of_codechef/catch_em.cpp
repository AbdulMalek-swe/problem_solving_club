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
        int n,x,y;
        cin >> n >> x >> y;
        vector<int> arr;
        int sum = 0;
        for(int i=1;i<=n;i++){
            int l;
            cin >> l;
            int mul = x*l;
            int vl = mul >y?y:mul;
            sum+=vl;
        }
        cout << sum << ln;
       

    }
    return 0;
}