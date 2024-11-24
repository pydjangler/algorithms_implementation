#include <cinttypes>
#include <functional>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <cmath>
#include <stack>
#include <queue>
#include <tuple>
#include <utility>
#include <limits>
#include <cstdlib>
#include <random>
#include <map>

using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC optimize("inline")

template<typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &p) {
    return in >> p.first >> p.second;
}

template<typename T>
istream &operator>>(istream &in, vector<T> &v) {
    for (auto &item: v)
        in >> item;
    return in;
}

void mcin() {}

template<typename T>
using vT = std::vector<T>;

template<typename T, typename ...Tail>
void mcin(T &&arg, Tail &&...args) {
    cin >> arg;
    mcin(args...);
}

#define in(type, ...) type __VA_ARGS__; mcin(__VA_ARGS__);
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef long long ll;

void solve() {
    in(int, n);
    vT<int> a(n);
    cin >> a;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(0);
    solve();
    return 0;
}
