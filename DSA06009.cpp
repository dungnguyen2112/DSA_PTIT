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
        int n, m;
        cin >> n >> m;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            dem += upper_bound(a + i + 1, a + n, m - a[i]) - lower_bound(a + i + 1, a + n, m - a[i]);
        }
        cout << dem << endl;
    }
}