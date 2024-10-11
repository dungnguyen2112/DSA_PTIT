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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n + 5], b[m + 5], c[k + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> c[i];
        }
        int i = 0,
            j = 0,
            z = 0;
        int dem = 0;
        while (i < n && j < m && z < k)
        {
            if (a[i] == b[j] && b[j] == c[z])
            {
                cout << a[i] << ' ';
                i++;
                j++;
                z++;
                dem++;
                continue;
            }
            if (a[i] < b[j])
            {
                i++;
            }
            else if (b[j] < c[z])
            {
                j++;
            }
            else
                z++;
        }
        if (dem == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
}