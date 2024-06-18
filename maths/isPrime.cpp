#include <iostream> 
#include <math.h>
using namespace std;

bool seive(int x) {
    bool flag = true;
    if (x <= 1) {
        return false;
    } else {
        for (int i = 2; i < static_cast<int>(pow(x, 0.5) + 1); ++i) {
            if (x % i == 0) {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main() {
    int x;
    cin >> x;
    if (seive(x)) { cout << "YES\n"; }
    else { cout << "NO\n"; }
    return 0;
}
