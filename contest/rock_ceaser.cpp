#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a; 
        int cnt = 0, cnt1 = 0;
        string ch1,ch2;
         cin>>ch1>>ch2;
        for (int i = 0; i < a; i++)
        { 
             if (ch1[i] == ch2[i]) continue;
           else  if ((ch1[i] == 'R' && ch2[i] == 'S') || (ch1[i] == 'S' && ch2[i] == 'P') || (ch1[i] == 'P' && ch2[i] == 'R'))
            {
                cnt++;
            }
            else if (ch1[i] == 'S' && ch2[i] == 'R' || ch1[i] == 'P' && ch2[i] == 'S' || ch1[i] == 'R' && ch2[i] == 'P')
            {
                cnt1++;
            }
        }
          if(cnt>cnt1){
            cout<<"0"<<endl;
          }else{
            cout<<(cnt1-cnt+1)/2<<endl;
          }
    }
}