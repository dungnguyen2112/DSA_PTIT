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
int n, k;
vector<int> c, a, b;
vector<vector<int>> res;

void solve()
{
    for (int i = 1; i <= k; ++i)
    {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= n - k + i; ++j)
    {
        b[i] = j;
        if (i == k)
            solve();
        else
            Try(i + 1);
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        set<int> st;
        cin >> n >> k;
        a.resize(n + 1);
        b.resize(k + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        sort(a.begin() + 1, a.end());
        Try(1);
    }
}