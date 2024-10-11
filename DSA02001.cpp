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

void Try(int i)
{
    res.push_back(a);
    if (i == 1)
        return;
    for (int j = 0; j < i - 1; ++j)
    {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    b.clear();
    Try(i - 1);
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        cin >> n;
        a.resize(n);
        res.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Try(n);
        for (auto i : res)
        {
            cout << "[";
            for (int j = 0; j < i.size(); ++j)
            {
                cout << i[j];
                if (j != i.size() - 1)
                {
                    cout << ' ';
                }
            }
            cout << "] ";
            cout << endl;
        }
        cout << endl;
    }
}