#include<bits/stdc++.h>
using namespace std;
void solve()
{

   int s;
   string str;
   cin >> s >> str;
   for(int i=1;i<s;++i) 
      if(str[i]=='1') 
      {
         cout << i << endl;
         return;
      }
   cout << s << endl;
}
signed main() 
{
   int t;
   cin >> t;
   while(t--) 
   solve();
}