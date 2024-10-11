#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

long long f[10001];

void prepare() {
    int i2 = 1, i3 = 1, i5 = 1;
    f[1] = 1;
    for (int i = 2; i <= 1e4; ++i) {
        f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});
        if (f[i] == f[i2] * 2) i2++;
        if (f[i] == f[i3] * 3) i3++;
        if (f[i] == f[i5] * 5) i5++;
    }
}

void testCase() {
    int n; cin >> n;
    cout << f[n];
}

int main() {
    prepare();
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}