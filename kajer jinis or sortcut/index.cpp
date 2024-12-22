#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int& d : v) cin >> d;

    remove_copy_if(v.begin(), v.end(), ostream_iterator<int>(cout, " "), [k](int value) {
        return value == k;
    });
    cout << endl;

    return 0;
}
