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

bool check(string s, int i) {
    return (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6'));
}

void testCase() {
    string s; cin >> s;
    int n = s.length();
    s = "#" + s;

    vector<long long> f(n + 1, 0);
    f[0] = 1;
    for (int i = 1; i <= n; ++i) {
        if (s[i] == '0') {
            if (i == 1 || (s[i - 1] != '1' && s[i - 1] != '2')) {
                cout << 0;
                return;
            }
            f[i] = f[i - 2];
        }
        else {
            f[i] = f[i - 1];
            if (i >= 2 && check(s, i))
                f[i] += f[i - 2];
        }
    }
    cout << f[n];
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}