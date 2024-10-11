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
    int x;
    cin >> x;
    while (x--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max1 = -1e9;
        multiset<int, greater<int>> st;
        for (int i = 0; i < k; i++)
        {
            st.insert(a[i]);
            max1 = max(max1, a[i]);
        }
        cout << max1 << ' ';
        for (int i = k; i < n; i++)
        {
            st.erase(st.find(a[i - k]));
            st.insert(a[i]);
            cout << *st.begin() << ' ';
        }
        cout << endl;
    }
}