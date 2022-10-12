#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int res1=2*(n+m);
        int res2=res1*x;
        cout<<res2<<endl;
    }
    return 0;
}