#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    while (l < r)
    {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;

        l += 2;
        r -= 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';

    return 0;
}
