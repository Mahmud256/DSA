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
        char s[55];
        cin>>s;
        int a[26] = {0};

        for (int i = 0; s[i] != '\0'; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < a[i]; j++)
            {
                cout<<char('a' + i);
            }
        }
        cout<<"\n";
    }

    return 0;
}

