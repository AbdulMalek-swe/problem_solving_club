#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void binary_search(vector<int> v)
{

    int l, r;
   scanf("%d %d", &l, &r);
    auto v2 = upper_bound(v.begin(), v.end(), r);
    auto v3 = lower_bound(v.begin(), v.end(), l);
    printf("%d ", (int)(v2 - v3));
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