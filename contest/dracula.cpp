#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
         int a;
        cin >> a  ;
          int c = a/7;
          int b = a%7;
          int min = c;
          if(b>=2){
           min = c+1;
          }
          cout<<min<<endl;

    }
    
}