#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float a,b,x,y;
        cin >> a >> b >> x >> y;
        float chef_time = a/x;
        float chefina_time = b/y;
        if( chef_time == chefina_time)
        {
            cout << "Both" << endl;
        }
        else if(chef_time >= chefina_time)
        {
            cout << "Chefina" << endl;
        }
        else if(chefina_time>=chef_time)
        {
            cout << "Chef" << endl;
        }
    }
}