#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;


    if(1<m)
    {
        int group = min(m, n-m);
        cout<<group<<endl;
    }
    else
    {
        cout<<1<<endl;
    }



    return 0;
}
