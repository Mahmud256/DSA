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
        int n, m, i, j;
        cin>>n>>m;

        if (n == 1 & m == 1)
        {
            int x;
            cin>>x;
            cout<<"-1\n";
            continue;
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                int x;
                cin>>x;
                x++;
                if (x > n * m) x = 1;
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

