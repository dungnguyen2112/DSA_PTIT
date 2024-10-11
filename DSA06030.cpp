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
        for (int i = 1; i < n; i++)
        {
            bool check = true;
            for (int j = 0; j < n - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    check = false;
                }
            }
            if (check)
            {
                break;
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