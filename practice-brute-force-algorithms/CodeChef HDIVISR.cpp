#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, c=0, ans=0;

    cin>>n;

    for(int i=1; i<=10; i++)
    {
        if(n%i==0)
        {
            ans = i;
        }
    }

    cout<<ans<<endl;


    return 0;
}
