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
        vector<long long int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long int n1 = n + 1;
        long long int need = n1 * 50;
        long long int ans = need - sum;
        if (ans < 0)
        {
            cout << 0 << endl;
        }
        else if (ans <= 100)
        {

            cout << ans << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}