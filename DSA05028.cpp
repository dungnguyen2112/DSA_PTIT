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
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    int f[n + 1][m + 1] = {};
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i == 0)
                f[i][j] = j;
            else if (j == 0)
                f[i][j] = i;
            else if (a[i - 1] == b[j - 1])
                f[i][j] = f[i - 1][j - 1];
            else
                f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + 1;
        }
    }
    cout << f[n][m];
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}