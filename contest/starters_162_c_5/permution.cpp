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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int isBool = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % k == (i + 1) % k)
            {
                isBool = false;
                break;
            }
        }
        if (isBool)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }else{
            cout << -1 << "\n";
        }
        cout << "\n";
    }
        return 0;
    }