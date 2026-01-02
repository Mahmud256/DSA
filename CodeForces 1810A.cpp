#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t,m,v,i;
    cin >> t;

    while(t--)
    {
        cin>>m;

        bool isBeatiful = false;

        for(i=1; i<=m; i++)
        {
            cin>>v;
            if(v <= i)
            {
                isBeatiful = true;
            }
        }

        if(isBeatiful)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
