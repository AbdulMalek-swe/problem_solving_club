#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n ){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    } 
    return true;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
    while (t--) {
            int n;
           vector<int> odd,even;
            cin >> n;
            for (int i = 1; i <=n; i++) {
                 
                if (i % 2 == 0) even.push_back(i);
                else odd.push_back(i);
            }
            if(n<=3){
                cout << "-1\n";
                return 1;
            }
        //    merge even to odd
        even.insert(even.end(), odd.begin(), odd.end());
        bool flag = false;
           for (int i = 0; i < n; i++)
           {
              if(isPrime(even[i]+even[i+1]) ) {
                  flag = true;
                  break;
              }
           }
           if(flag) cout << "-1\n";
           else  {
            for(int i = 0; i < n; i++) {
            cout << even[i] << " ";
           }
           }
        }
   return 0;
}