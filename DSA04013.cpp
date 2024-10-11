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

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        int m = n / 2, r = n;
        int ans = n;
        while (m > 0)
        {
            if (a[r] >= 2 * a[m])
            {
                ans--;
                m--;
                r--;
            }
            else
            {
                m--;
            }
        }
        cout << ans << endl;
    }
}
