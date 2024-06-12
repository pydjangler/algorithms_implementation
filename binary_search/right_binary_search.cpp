// Если элемент есть в массиве, возвращает индекс последнего его вхождения, если же нет, то возвращает индекс последнего элемента, который меньше искомого

#include <iostream>
#include <vector>
using namespace std;

int rbs(vector<int> &a, int x) {
    int l = -1;
    int r = a.size();
    while (l + 1 != r) {
        int c = (l + r) / 2; 
        if (a[c] > x) { 
            r = c;
        }
        else {
            l = c;
        }
    }
    return l;
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
        int t = rbs(a, x);
        cout << t << "\n";
    }
    return 0;
}
