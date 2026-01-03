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
        int m;
        cin>>m;

        int k = 1;
        int tmp = m;
        tmp /= 10;

        while(tmp)
        {
            tmp /= 10;
            k *= 10;
        }

        cout<<m-k<<endl;


    }

    return 0;
}
