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
        int n, k, i;
        cin>>n>>k;
        if (k == 1)
        {
            for (i = 1; i <= n; i++)
            {
                cout<<i<<" ";
            }
        }
        else if (k == n)
        {
            for (i = 0; i < n; i++)
            {
                cout<<"1 ";
            }
        }
        else
        {
            cout<<"-1";
        }
        cout<<"\n";
    }

    return 0;
}

