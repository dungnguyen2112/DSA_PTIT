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
int a[30];
vector<string> tmp;
vector<vector<string>> res;

void solve()
{
    vector<string> x;
    for (int i = 1; i <= k; ++i)
    {
        x.push_back(tmp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j)
    {
        a[i] = j;
        if (i == k)
            solve();
        else
            Try(i + 1);
    }
}

int main()
{
    faster()
    cin >> n >> k;
    set<string> st;
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    tmp.push_back("");
    for (auto i : st)
    {
        tmp.push_back(i);
    }
    n = tmp.size() - 1;
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        for (string j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}