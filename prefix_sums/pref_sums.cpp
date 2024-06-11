#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <set>
#include <bitset>
#include <queue>
#include <numeric>
#include <cstdint>
#include <cmath>
#define start cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.precision(10); ios_base::sync_with_stdio(false)
#define finish return 0
#define pb push_back

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC optimize("inline")
typedef long long ll;
using namespace std;

int32_t main() {
    start;
    int n; 
    cin >> n; 
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t; 
        a.pb(t);
    }

    vector<int> prefix_sums(n + 1, 0);
    for (size_t i = 0; i < (int) a.size(); ++i) {
        prefix_sums[i + 1] = prefix_sums[i] + a[i]; 
    }

    for (int element : prefix_sums) {
        cout << element << " ";
    }
    finish;
}
