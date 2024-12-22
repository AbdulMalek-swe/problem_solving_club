#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n,k,l;
     cin>>n>>k>>l;
     if(n<k*l){
         cout<<-1<<endl;
        
     }
     else{
        cout<<n-(k*l)<<endl;
     }
      return 0;
    
}