#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z;  //w=initial amount, x=amount to be deposited, y=amount to be withdrawn, z=months
        cin>>w>>x>>y>>z;
        int deduct=x-y;
        int res=w+(deduct*z);
        cout<<res<<endl;
    }
    return 0;
}