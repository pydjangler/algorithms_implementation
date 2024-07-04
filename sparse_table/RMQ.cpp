#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 200'005;
const int LOG = 18;
int a[MAX_N];
int m[MAX_N][LOG];
int bin_log[MAX_N];

int query(int L, int R) {
    int length = R - L + 1;
    int k = bin_log[length];
    return min(m[L][k], m[R-(1<<k)+1][k]);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    bin_log[1] = 0;
    for (int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i/2]+1;
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m[i][0] = a[i];
    }

    for (int k = 1; k < LOG; k++) {
        for (int i = 0; i + (1 << k) - 1 < n; i++) {
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
        }
    }

    for (int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R;
        cout << query(L - 1, R - 1) << "\n";
    }
    return 0;
}
