#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;

        bool left = 0, right = 0;

        if(a==0 || b==0 || c==0)
        {
            left = true;
        }
        if(a==1 || b==1 || c==1)
        {
            right = true;
        }

        if(left && right)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}
