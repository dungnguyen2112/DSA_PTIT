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
#include <bits/stdc++.h>
using namespace std;

int n, k, s, stop;
int a[25];
int Try(int i, int sum, int cou)
{
    if (stop)
        return;
    if (cou == k)
    {
        stop = 1;
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        if (sum == s)
            Try(i + 1, 0, cou + 1);
        else if (sum < s)
            Try(i + 1, sum + a[i], cou);
        else
            return;
    }
    return cou;
}

void solve()
{
    s = 0, stop = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % k != 0)
    {
        cout << 0;
        return;
    }
    s /= k;
    cout << Try(0, 0, 0);
}

int main()
{
    faster() int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}