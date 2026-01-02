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
        int n,k,x;
        cin >> n >> k >> x;

        if(k-1>x || n<k)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int mex = k*(k-1)/2 ;

            if(k==x)
            {
                x--;
            }

            mex += (n-k)*x;

            cout<<mex<<endl;
        }

    }

    return 0;
}

