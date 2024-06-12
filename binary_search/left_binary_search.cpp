// Если элемент есть в массиве, возвращает индекс первого его вхождения, если элемента нет, то возвращает индекс первого элемента, который больше него

#include <iostream>
#include <vector>
using namespace std;

int lbs(vector<int> &a, int x) {
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
    return r;
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
        int t = lbs(a, x);
        cout << t << "\n";
    }
    return 0;
}
