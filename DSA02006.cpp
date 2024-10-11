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
int a[1000], b[1000];
bool final;
vector<vector<int>> v;
void out(int n)
{
    vector<int> v1;
    for (int i = 1; i < n; i++)
    {
        v1.push_back(b[i]);
    }
    v.push_back(v1);
}

void Try(int i, int sum, int sum1)
{
    if (sum == k)
    {
        final = true;
        out(i);
        return;
    }
    if (sum > k)
        return;
    for (int j = sum1; j <= n; j++)
    {
        b[i] = a[j];
        if (sum + a[j] <= k)
            Try(i + 1, sum + a[j], j + 1);
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        cin >> n >> k;
        final = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1, 0, 1);
        sort(v.rbegin(), v.rend());
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << "[";
            for (int j = 0; j < v[i].size(); j++)
            {
                cout << v[i][j];
                if (j != v[i].size() - 1)
                    cout << ' ';
            }
            cout << "] ";
        }
        if (!final)
        {
            cout << -1;
        }
        cout << endl;
        v.clear();
    }
}