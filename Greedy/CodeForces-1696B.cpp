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
        int n,i;
        cin>>n;

        int a[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        a[0] = 0;
        int ans = 0;

        for (i = 1; i <= n; i++)
        {
            if (a[i - 1] == 0 && a[i] != 0)
            {
                ans++;
            }
        }
        if (ans > 2)
        {
            ans = 2;
        }
        cout<<ans<<"\n";
    }

    return 0;
}

