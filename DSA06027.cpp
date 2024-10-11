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
        int n;
        cin >> n;
        int a[n + 5];
        int sum = 1e7;
        bool check = false;
        map<int, int> mp;
        set<int> st;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            st.insert(a[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                {
                    swap(a[i], a[j]);
                }
            }
            vector<int> b(a, a + n);
            v.push_back(b);
        }
        reverse(v.begin(), v.end());
        int dem = v.size();
        for (auto i : v)
        {
            cout << "Buoc " + to_string(dem) + ": ";
            for (auto j : i)
            {
                cout << j << ' ';
            }
            dem--;
            cout << endl;
        }
    }
}