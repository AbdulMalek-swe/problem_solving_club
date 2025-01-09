#include <bits/stdc++.h>
using namespace std;
int binary_search(int value,vector<int>a){
   
   while (l <= r) {
         mid = l + (r - l) / 2;
         if (key <= a[mid]) {
            ans = mid;
            r = mid - 1;
         }
         else {
            l = mid + 1;
         }
      }
}
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, q;
   cin >> n >> q;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }
  sort(a.start(), a.end());
   for (int i = 0;i < q;i++) {
      int key, l = 0, r = n - 1, ans = n, mid;
      cin >> key;
      int value = binary_search(key,a);
      cout << value << "\n";
   }
   return 0;
}