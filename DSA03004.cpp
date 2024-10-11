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
long long mul = 1e9 + 7;
int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long max = 0;
        string c, b;
        for (int i = 0; i < n; i += 2)
        {
            c += to_string(a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            b += to_string(a[i]);
        }
        cout << stoll(c) + stoll(b) << endl;
    }
}