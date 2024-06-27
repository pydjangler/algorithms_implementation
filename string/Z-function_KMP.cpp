#include <iostream>
#include <vector>
using namespace std;

vector<int> zFunction(const string &s) {
    vector<int> z(s.size());
    int L = 0, R = 0;
    for (int i = 1; i < s.size(); i++) {
        int len = 0;
        if (i <= R) {
            len = min(z[i - L], R - i + 1);
        }
        while (i + len <= s.size() && s[i + len] == s[len])
            len++;
        z[i] = len;
        if (R < i + len - 1) {
            L = i;
            R = i + len - 1;
        }
    }
    return z;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> zFunc = zFunction(s2 + "&" + s1);
    vector<int> res;
    for (size_t i = 0; i < (int)zFunc.size(); ++i) {
        if (zFunc[i] == s2.size()) {
            res.push_back(i - s2.size() - 1);
        }
    }
    for (int index : res) {
        cout << index << " ";
    }
    return 0;
}
