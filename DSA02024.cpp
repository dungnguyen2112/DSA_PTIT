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

int n;
vector<int> a, b;
vector<vector<int>> res;

void solve()
{
    if (b.size() < 2)
    {
        return;
    }
    vector<int> c(b.begin(), b.end());
    sort(c.begin(), c.end());
    if (b == c)
    {
        res.push_back(b);
    }
}

void Try(int i, int start)
{
    if (b.size() >= 2)
    {
        vector<int> c(b.begin(), b.end());
        sort(c.begin(), c.end());
        if (b == c)
        {
            res.push_back(b);
        }
    }

    for (int j = start; j < n; j++)
    {
        b.push_back(a[j]);
        Try(i + 1, j + 1);
        b.pop_back();
    }
}

bool cmp(vector<int> a, vector<int> b)
{
    string x = "", y = "";
    for (int i : a)
        x += to_string(i) + " ";
    x.pop_back();
    for (int i : b)
        y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

int main()
{
    cin >> n;
    a.resize(n);
    for (int &i : a)
        cin >> i;
    Try(0, 0);
    sort(res.begin(), res.end(), cmp);
    for (auto i : res)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    b.clear();
    res.clear();
}
