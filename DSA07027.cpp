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

void solve()
{
    int n;
    cin >> n;
    int a[n + 5], b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= a[i])
        {
            st.pop();
        }
        if (st.empty())
            b[i] = -1;
        else
            b[i] = st.top();
        st.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        solve();
    }
}