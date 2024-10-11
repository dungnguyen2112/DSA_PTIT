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
vector<vector<int>> a, res;
vector<int> b;
vector<bool> final;

void khoitao()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][b[i]];
    }
    if (sum == k)
    {
        res.push_back(b);
    }
}

void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (!final[j])
        {
            b[i] = j;
            final[j] = true;
            if (i == n-1)
            {
                khoitao();
            }
            else
                Try(i + 1);
            final[j] = false;
        }
    }
}

int main()
{
    cin >> n >> k;
    a.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    b.resize(n);
    final.resize(n, false);
    Try(0);
    cout << res.size() << endl;;
    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j + 1 << ' ';
        }
        cout << endl;
    }
}