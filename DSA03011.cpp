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
long long mod = 1e9 + 7;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        long long n;
        cin >> n;
        long long a[n + 1];
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            q.push(a[i]);
        }
        long long dem = 0;
        while (q.size() >= 2)
        {
            long long x = q.top() % mod;
            q.pop();
            long long y = q.top() % mod;
            q.pop();
            dem += (x + y) % mod;
            q.push((x + y) % mod);
        }
        cout << dem % mod << endl;
    }
}