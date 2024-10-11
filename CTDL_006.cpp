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

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    set<int> st;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.find(a[i]) == st.end())
        {
            v.push_back(a[i]);
        }
        st.insert(a[i]);
    }
    for (auto i : v)
    {
        cout << i << ' ';
    }
}