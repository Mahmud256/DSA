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

        if (n == 1)
        {
            cout << 1 << '\n';
        }
        else if (n % 2 == 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 1; i <= n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
