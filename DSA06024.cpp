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
    int n;
    cin >> n;
    int a[n + 5];
    int sum = 1e7;
    bool check = false;
    map<int, int> mp;
    set<int> st;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        st.insert(a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int dem = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[dem])
                dem = j;
        }
        if (dem != i)
        {
            swap(a[i], a[dem]);
        }
        cout << "Buoc " + to_string(i + 1) + ": ";
        for (int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}