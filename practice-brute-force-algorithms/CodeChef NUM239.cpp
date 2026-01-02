#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        int l, r;
        cin >> l >> r;

        int count = 0;

        for (int i = l; i <= r; i++) {
            int d = i % 10;
            if (d == 2 || d == 3 || d == 9) {
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
