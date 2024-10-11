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
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n + 5];
        bool check = false;
        vector<pair<long long, long long>> mp;
        set<long long> st;
        vector<vector<long long>> v;
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long dem = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                break;
            }
            long long pos = (upper_bound(a + i + 1, a + n, k - a[i]) - (a + i + 1)) - (lower_bound(a + i + 1, a + n, k - a[i]) - (a + i + 1));
            dem += pos;
        }
        cout << dem << endl;
    }
}