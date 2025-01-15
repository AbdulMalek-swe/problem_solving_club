#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
   
    while(t--){
      int n;
    cin>>n;
    std::vector<int> v ;
    for(int i=0;i<n;i++){
      int k;
      cin>>k;
      v.push_back(k);
    }
    int sum =1;
    int x = 0;
    
    
    while(true){
       
 
           int dm = 0;
           for(int i=0;i<n;i++){
             int g = x^v[i];
             dm ^=g;
           }
           if(dm==0){
          cout<<x<<endl;
          break;
        }
        x++;
         if(x==100000){
           cout<<-1<<endl;
           break;
         }
        
    }
    }
    
    // cout<<x;
    return 0;
}
