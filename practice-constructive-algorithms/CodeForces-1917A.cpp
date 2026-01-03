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
        int n, i, cnt0 = 0, cntneg = 0;
        cin>>n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
            if (a[i] == 0) cnt0++;
            else if (a[i] < 0)
            {
                cntneg++;
            }
        }
        if (cnt0)
        {
            cout<<"0\n";
        }
        else if (cntneg % 2)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
            cout<<"1 0\n";
        }
    }

    return 0;
}

