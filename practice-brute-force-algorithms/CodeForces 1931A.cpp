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
        cin>>n;

        bool gotAns = false;

        for(char f = 'a'; f <= 'z'; f++)
        {
            for(char s = 'a'; s <= 'z'; s++)
            {
                for(char t = 'a'; t <= 'z'; t++)
                {
                    int fv = f - 'a' + 1;
                    int sv = s - 'a' + 1;
                    int tv = t - 'a' + 1;
                    if(fv + sv + tv == n)
                    {
                        gotAns = true;
                        cout<<f<<s<<t<<endl;
                        break;
                    }
                }
                if(gotAns)
                    break;
            }
            if(gotAns)
                break;
        }

    }

    return 0;
}
