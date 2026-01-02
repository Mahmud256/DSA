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
        int n;
        cin >> n;

        int b[n];

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        int m =1, a[n*2];
        a[0] = b[0];

        for(int i=1,j=1; i<n; i++, j++)
        {
            if (b[i] < b[i - 1])
            {
                a[j] = b[i];
                j++;
                m++;
            }
            a[j] = b[i];
            m++;
        }

        cout<<m<<" ";
        for (int i = 0; i < m; i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<"\n";

    }

    return 0;
}

