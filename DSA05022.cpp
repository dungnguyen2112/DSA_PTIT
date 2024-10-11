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

void TestCase() {
    int n, in, de, co;
    cin >> n >> in >> de >> co;

    int f[101] = {}; f[1] = in;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 1)
            f[i] = min({f[i - 1] + in, f[(i - 1) / 2] + co + in, f[(i + 1) / 2] + co + de});
        else
            f[i] = min(f[i - 1] + in, f[i / 2] + co);
    }
    cout << f[n];
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << "\n";
    }
    return 0;
}
