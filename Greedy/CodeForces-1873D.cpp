#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    string s;

    while (t--)
    {
        int n,k,i,count=0;

        cin>>n>>k;
        cin>>s;

        for(i=0; i<n;)
        {
            if(s[i]=='B')
            {
                count++;
                i += k;
            }
            else
            {
                i++;
            }
        }
        cout<<count<<"\n";
    }

    return 0;
}

