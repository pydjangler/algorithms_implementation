#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <numeric>
#include <cstdint>
#include <cmath>
#define start cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.precision(10); ios_base::sync_with_stdio(false)
#define finish return 0
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC optimize("inline")
typedef long long ll;
using namespace std;

void QuickSort(vector<int> &a, int left, int right) {
    if (left > right) { 
        return; 
    }
    int pivot = a[(left + right) / 2];
    int i = left; int j = right;
    while (i <= j) {
        while (a[i] < pivot) 
            i++;
        while (a[j] > pivot) 
            j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    QuickSort(a, left, j); 
    QuickSort(a, i, right);
}

int32_t main() {
    start;
    int n;
    cin >> n;
    vector<int> a; 
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    QuickSort(a, 0, n - 1);
    // print array
    finish;
}
