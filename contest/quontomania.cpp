#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     map<string,int>mp;
     string str;
     int n;
     cin>>n;
    
     while (n--)
     {
          vector<int>v;
          int k;
          cin>>k;
          int t;
          for(int i=0;i<k;i++){
            cin>>t;
             v.push_back(t);
          }
         
          bool fount = false;
          for(int i=0;i<k-1;i++){
            if(abs(v[i]-v[i+1])==7 || abs(v[i]-v[i+1])==5){
            fount = true;

            }else{
                fount = false;
                break;
            }
          }
          if(fount){
            cout<<"YES"<<endl;
          }else{
            cout<<"NO"<<endl;
          }

     }
     
    return 0;
}