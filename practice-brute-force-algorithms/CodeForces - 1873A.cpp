#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        if (str == "bca" || str == "cab") {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
