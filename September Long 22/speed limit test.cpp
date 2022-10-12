#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //Alice - A km away and X hours to reach
        //Bob - B km away and Y hours to reach
        float a,x,b,y;        
        cin>>a>>x>>b>>y;

        float alice_time = a/x;
        float bob_time = b/y;

        if(alice_time == bob_time)
            cout<<"Equal"<<endl;
        else if(alice_time > bob_time)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
    }
    return 0;
}