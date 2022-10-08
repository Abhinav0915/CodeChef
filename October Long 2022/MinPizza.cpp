#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        int count = 0;
        cin >> n >> x;
        int temp;
        temp = n*x;
        if(temp%4==0)
        {
            temp = temp/4;
        }
        else
        {
            temp = temp/4 + 1;
        }
        cout << temp << endl;        
    }
    return 0;
    
}