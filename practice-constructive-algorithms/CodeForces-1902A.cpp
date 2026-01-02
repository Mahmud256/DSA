#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, ok = 0;
        cin>>n;

        char s[105];

        cin>>s;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                ok = 1;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}

