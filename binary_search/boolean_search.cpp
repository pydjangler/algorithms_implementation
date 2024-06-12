#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &a, int x) {
    int l = -1;
    int r = a.size();
    while (l + 1 != r) {
        int c = (l + r) / 2; 
        if (a[c] < x) { 
            l = c;
        }
        else {
            r = c;
        }
    }
    if (r != a.size() && a[r] == x) return true;
    else return false;
} 

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    while (k--) {
        int x;
        cin >> x;
        if (search(a, x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
