#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, ans = 0;
        cin>>n;

        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            n = n/10;
            n = n * 10;
            for(long long i=n ; i<n+10 ; i++)
            {
                if(i%7==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}
